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
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_VIDEO_INTELLIGENCE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_VIDEO_INTELLIGENCE_CONNECTION_H

#include "google/cloud/videointelligence/internal/video_intelligence_retry_traits.h"
#include "google/cloud/videointelligence/internal/video_intelligence_stub.h"
#include "google/cloud/videointelligence/video_intelligence_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace videointelligence {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using VideoIntelligenceServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        videointelligence_internal::VideoIntelligenceServiceRetryTraits>;

using VideoIntelligenceServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        videointelligence_internal::VideoIntelligenceServiceRetryTraits>;

using VideoIntelligenceServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        videointelligence_internal::VideoIntelligenceServiceRetryTraits>;

/**
 * The `VideoIntelligenceServiceConnection` object for
 * `VideoIntelligenceServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VideoIntelligenceServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `VideoIntelligenceServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeVideoIntelligenceServiceConnection()`.
 *
 * For mocking, see
 * `videointelligence_mocks::MockVideoIntelligenceServiceConnection`.
 */
class VideoIntelligenceServiceConnection {
 public:
  virtual ~VideoIntelligenceServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<
      StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>
  AnnotateVideo(
      google::cloud::videointelligence::v1::AnnotateVideoRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `VideoIntelligenceServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * VideoIntelligenceServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VideoIntelligenceServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * -
 * `google::cloud::videointelligence::VideoIntelligenceServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `VideoIntelligenceServiceConnection`
 * created by this function.
 */
std::shared_ptr<VideoIntelligenceServiceConnection>
MakeVideoIntelligenceServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_VIDEO_INTELLIGENCE_CONNECTION_H
