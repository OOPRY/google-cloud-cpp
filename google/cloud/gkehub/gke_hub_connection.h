// Copyright 2022 Google LLC
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
// source: google/cloud/gkehub/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CONNECTION_H

#include "google/cloud/gkehub/gke_hub_connection_idempotency_policy.h"
#include "google/cloud/gkehub/internal/gke_hub_retry_traits.h"
#include "google/cloud/gkehub/internal/gke_hub_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GkeHubRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    gkehub_internal::GkeHubRetryTraits>;

using GkeHubLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        gkehub_internal::GkeHubRetryTraits>;

using GkeHubLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        gkehub_internal::GkeHubRetryTraits>;

/**
 * The `GkeHubConnection` object for `GkeHubClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GkeHubClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `GkeHubClient`.
 *
 * To create a concrete instance, see `MakeGkeHubConnection()`.
 *
 * For mocking, see `gkehub_mocks::MockGkeHubConnection`.
 */
class GkeHubConnection {
 public:
  virtual ~GkeHubConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::gkehub::v1::Membership> ListMemberships(
      google::cloud::gkehub::v1::ListMembershipsRequest request);

  virtual StreamRange<google::cloud::gkehub::v1::Feature> ListFeatures(
      google::cloud::gkehub::v1::ListFeaturesRequest request);

  virtual StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
      google::cloud::gkehub::v1::GetMembershipRequest const& request);

  virtual StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
      google::cloud::gkehub::v1::GetFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Membership>>
  CreateMembership(
      google::cloud::gkehub::v1::CreateMembershipRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Feature>> CreateFeature(
      google::cloud::gkehub::v1::CreateFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteMembership(
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteFeature(google::cloud::gkehub::v1::DeleteFeatureRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Membership>>
  UpdateMembership(
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request);

  virtual future<StatusOr<google::cloud::gkehub::v1::Feature>> UpdateFeature(
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request);

  virtual StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
  GenerateConnectManifest(
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request);
};

/**
 * A factory function to construct an object of type `GkeHubConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of GkeHubClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `GkeHubConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::gkehub::GkeHubPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `GkeHubConnection` created by
 * this function.
 */
std::shared_ptr<GkeHubConnection> MakeGkeHubConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CONNECTION_H
