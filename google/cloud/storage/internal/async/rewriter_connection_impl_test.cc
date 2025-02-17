// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/async/rewriter_connection_impl.h"
#include "google/cloud/storage/async/object_requests.h"
#include "google/cloud/storage/internal/grpc/stub.h"
#include "google/cloud/storage/options.h"
#include "google/cloud/storage/retry_policy.h"
#include "google/cloud/storage/testing/canonical_errors.h"
#include "google/cloud/storage/testing/mock_storage_stub.h"
#include "google/cloud/internal/background_threads_impl.h"
#include "google/cloud/testing_util/async_sequencer.h"
#include "google/cloud/testing_util/status_matchers.h"
#include "google/cloud/testing_util/validate_metadata.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::storage::testing::MockStorageStub;
using ::google::cloud::storage_experimental::RewriteObjectResponse;
using ::google::cloud::testing_util::AsyncSequencer;
using ::google::cloud::testing_util::IsOkAndHolds;
using ::google::cloud::testing_util::StatusIs;
using ::google::cloud::testing_util::ValidateMetadataFixture;
using ::testing::AllOf;
using ::testing::AtLeast;
using ::testing::Field;
using ::testing::IsEmpty;
using ::testing::Pair;
using ::testing::UnorderedElementsAre;

class RewriterConnectionImplTest : public ::testing::Test {
 protected:
  auto GetMetadata(grpc::ClientContext& context) {
    return validate_metadata_fixture_.GetMetadata(context);
  }

 private:
  ValidateMetadataFixture validate_metadata_fixture_;
};

internal::ImmutableOptions TestOptions(Options options = {}) {
  using ms = std::chrono::milliseconds;
  options = internal::MergeOptions(
      std::move(options),
      Options{}
          .set<storage::RetryPolicyOption>(
              storage::LimitedErrorCountRetryPolicy(2).clone())
          .set<storage::BackoffPolicyOption>(
              storage::ExponentialBackoffPolicy(ms(1), ms(2), 2.0).clone()));
  return internal::MakeImmutableOptions(DefaultOptionsGrpc(std::move(options)));
}

auto TransientError() {
  return StatusOr<google::storage::v2::RewriteResponse>(
      storage::testing::canonical_errors::TransientError());
}

auto PermanentError() {
  return StatusOr<google::storage::v2::RewriteResponse>(
      storage::testing::canonical_errors::PermanentError());
}

auto constexpr kAuthority = "storage.googleapis.com";

TEST_F(RewriterConnectionImplTest, Basic) {
  AsyncSequencer<bool> sequencer;
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncRewriteObject)
      .WillOnce([&] {
        return sequencer.PushBack("RewriteObject(1)").then([](auto) {
          return TransientError();
        });
      })
      .WillOnce([&](auto&, auto context,
                    internal::ImmutableOptions const& options,
                    auto const& request) {
        EXPECT_EQ(options->get<AuthorityOption>(), kAuthority);
        auto metadata = GetMetadata(*context);
        EXPECT_THAT(metadata, UnorderedElementsAre(
                                  Pair("x-goog-quota-user", "test-quota-user"),
                                  Pair("x-goog-fieldmask", "field1,field2")));
        EXPECT_THAT(request.destination_bucket(),
                    "projects/_/buckets/destination-bucket");
        EXPECT_THAT(request.destination_name(), "destination-object");
        EXPECT_THAT(request.source_bucket(),
                    "projects/_/buckets/source-bucket");
        EXPECT_THAT(request.source_object(), "source-object");
        EXPECT_THAT(request.rewrite_token(), IsEmpty());
        return sequencer.PushBack("RewriteObject(2)").then([](auto) {
          google::storage::v2::RewriteResponse response;
          response.set_total_bytes_rewritten(1000);
          response.set_object_size(3000);
          response.set_rewrite_token("test-rewrite-token");
          return make_status_or(response);
        });
      })
      .WillOnce([&] {
        return sequencer.PushBack("RewriteObject(3)").then([](auto) {
          return TransientError();
        });
      })
      .WillOnce([&](auto&, auto context,
                    internal::ImmutableOptions const& options,
                    auto const& request) {
        EXPECT_EQ(options->get<AuthorityOption>(), kAuthority);
        auto metadata = GetMetadata(*context);
        EXPECT_THAT(metadata, UnorderedElementsAre(
                                  Pair("x-goog-quota-user", "test-quota-user"),
                                  Pair("x-goog-fieldmask", "field1,field2")));
        EXPECT_THAT(request.destination_bucket(),
                    "projects/_/buckets/destination-bucket");
        EXPECT_THAT(request.destination_name(), "destination-object");
        EXPECT_THAT(request.source_bucket(),
                    "projects/_/buckets/source-bucket");
        EXPECT_THAT(request.source_object(), "source-object");
        EXPECT_THAT(request.rewrite_token(), "test-rewrite-token");
        return sequencer.PushBack("RewriteObject(4)").then([](auto) {
          google::storage::v2::RewriteResponse response;
          response.set_total_bytes_rewritten(2000);
          response.set_object_size(3000);
          response.set_rewrite_token("test-rewrite-token");
          return make_status_or(response);
        });
      })
      .WillOnce([&] {
        return sequencer.PushBack("RewriteObject(5)").then([](auto) {
          return TransientError();
        });
      })
      .WillOnce([&](auto&, auto context,
                    internal::ImmutableOptions const& options,
                    auto const& request) {
        EXPECT_EQ(options->get<AuthorityOption>(), kAuthority);
        auto metadata = GetMetadata(*context);
        EXPECT_THAT(metadata, UnorderedElementsAre(
                                  Pair("x-goog-quota-user", "test-quota-user"),
                                  Pair("x-goog-fieldmask", "field1,field2")));
        EXPECT_THAT(request.destination_bucket(),
                    "projects/_/buckets/destination-bucket");
        EXPECT_THAT(request.destination_name(), "destination-object");
        EXPECT_THAT(request.source_bucket(),
                    "projects/_/buckets/source-bucket");
        EXPECT_THAT(request.source_object(), "source-object");
        EXPECT_THAT(request.rewrite_token(), "test-rewrite-token");
        return sequencer.PushBack("RewriteObject(6)").then([](auto) {
          google::storage::v2::RewriteResponse response;
          response.set_total_bytes_rewritten(3000);
          response.set_object_size(3000);
          response.mutable_resource()->set_bucket(
              "projects/_/buckets/destination-bucket");
          response.mutable_resource()->set_name("destination-object");
          response.mutable_resource()->set_size(3000);
          return make_status_or(response);
        });
      });

  auto match_progress = [](int rewritten, int size) {
    return AllOf(
        Field(&RewriteObjectResponse::total_bytes_rewritten, rewritten),
        Field(&RewriteObjectResponse::object_size, size),
        Field(&RewriteObjectResponse::rewrite_token, "test-rewrite-token"));
  };

  internal::AutomaticallyCreatedBackgroundThreads pool(1);
  auto connection = std::make_shared<RewriterConnectionImpl>(
      pool.cq(), std::move(mock), TestOptions(),
      google::cloud::storage::internal::RewriteObjectRequest(
          "source-bucket", "source-object", "destination-bucket",
          "destination-object", std::string{})
          .set_multiple_options(storage::Fields("field1,field2"),
                                storage::QuotaUser("test-quota-user")));

  auto r1 = connection->Iterate();
  auto next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(1)");
  next.first.set_value(true);
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(2)");
  next.first.set_value(true);
  EXPECT_THAT(r1.get(), IsOkAndHolds(match_progress(1000, 3000)));

  auto r2 = connection->Iterate();
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(3)");
  next.first.set_value(true);
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(4)");
  next.first.set_value(true);
  EXPECT_THAT(r2.get(), IsOkAndHolds(match_progress(2000, 3000)));

  auto r3 = connection->Iterate();
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(5)");
  next.first.set_value(true);
  next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(6)");
  next.first.set_value(true);
  auto response = r3.get();
  ASSERT_STATUS_OK(response);
  ASSERT_TRUE(response->metadata.has_value());
  EXPECT_EQ(response->metadata->bucket(), "destination-bucket");
  EXPECT_EQ(response->metadata->name(), "destination-object");
  EXPECT_EQ(response->metadata->size(), 3000);
}

TEST_F(RewriterConnectionImplTest, PermanentError) {
  AsyncSequencer<bool> sequencer;
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncRewriteObject).WillOnce([&] {
    return sequencer.PushBack("RewriteObject(1)").then([](auto) {
      return PermanentError();
    });
  });

  internal::AutomaticallyCreatedBackgroundThreads pool(1);
  auto connection = std::make_shared<RewriterConnectionImpl>(
      pool.cq(), std::move(mock), TestOptions(),
      google::cloud::storage::internal::RewriteObjectRequest(
          "source-bucket", "source-object", "destination-bucket",
          "destination-object", std::string{}));

  auto r1 = connection->Iterate();
  auto next = sequencer.PopFrontWithName();
  EXPECT_EQ(next.second, "RewriteObject(1)");
  next.first.set_value(true);
  EXPECT_THAT(r1.get(), StatusIs(PermanentError().status().code()));
}

TEST_F(RewriterConnectionImplTest, TooManyTransients) {
  auto mock = std::make_shared<MockStorageStub>();
  EXPECT_CALL(*mock, AsyncRewriteObject).Times(AtLeast(2)).WillRepeatedly([] {
    return make_ready_future(TransientError());
  });

  internal::AutomaticallyCreatedBackgroundThreads pool(1);
  auto connection = std::make_shared<RewriterConnectionImpl>(
      pool.cq(), std::move(mock), TestOptions(),
      google::cloud::storage::internal::RewriteObjectRequest(
          "source-bucket", "source-object", "destination-bucket",
          "destination-object", std::string{}));

  auto r1 = connection->Iterate();
  EXPECT_THAT(r1.get(), StatusIs(TransientError().status().code()));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
