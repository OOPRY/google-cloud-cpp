// Copyright 2020 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/iam/credentials/v1/iamcredentials.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_H

#include "google/cloud/iam/iam_credentials_connection_idempotency_policy.h"
#include "google/cloud/iam/internal/iam_credentials_retry_traits.h"
#include "google/cloud/iam/internal/iam_credentials_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IAMCredentialsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        iam_internal::IAMCredentialsRetryTraits>;

using IAMCredentialsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        iam_internal::IAMCredentialsRetryTraits>;

using IAMCredentialsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        iam_internal::IAMCredentialsRetryTraits>;

/**
 * The `IAMCredentialsConnection` object for `IAMCredentialsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `IAMCredentialsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `IAMCredentialsClient`.
 *
 * To create a concrete instance, see `MakeIAMCredentialsConnection()`.
 *
 * For mocking, see `iam_mocks::MockIAMCredentialsConnection`.
 */
class IAMCredentialsConnection {
 public:
  virtual ~IAMCredentialsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::iam::credentials::v1::GenerateAccessTokenRequest const& request);

  virtual StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
  GenerateIdToken(
      google::iam::credentials::v1::GenerateIdTokenRequest const& request);

  virtual StatusOr<google::iam::credentials::v1::SignBlobResponse> SignBlob(
      google::iam::credentials::v1::SignBlobRequest const& request);

  virtual StatusOr<google::iam::credentials::v1::SignJwtResponse> SignJwt(
      google::iam::credentials::v1::SignJwtRequest const& request);
};

/**
 * A factory function to construct an object of type `IAMCredentialsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of IAMCredentialsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `IAMCredentialsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::iam::IAMCredentialsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `IAMCredentialsConnection` created by
 * this function.
 */
std::shared_ptr<IAMCredentialsConnection> MakeIAMCredentialsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_H
