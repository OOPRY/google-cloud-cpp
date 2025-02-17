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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/v1/internal/recommender_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/recommender/v1/recommender_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recommender_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecommenderLogging::RecommenderLogging(std::shared_ptr<RecommenderStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::recommender::v1::ListInsightsResponse>
RecommenderLogging::ListInsights(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::ListInsightsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::recommender::v1::ListInsightsRequest const& request) {
        return child_->ListInsights(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderLogging::GetInsight(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::GetInsightRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::GetInsightRequest const& request) {
        return child_->GetInsight(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderLogging::MarkInsightAccepted(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::MarkInsightAcceptedRequest const&
                 request) {
        return child_->MarkInsightAccepted(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::ListRecommendationsResponse>
RecommenderLogging::ListRecommendations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::ListRecommendationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::ListRecommendationsRequest const&
                 request) {
        return child_->ListRecommendations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderLogging::GetRecommendation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::GetRecommendationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::GetRecommendationRequest const&
                 request) {
        return child_->GetRecommendation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderLogging::MarkRecommendationDismissed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::MarkRecommendationDismissedRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::
                 MarkRecommendationDismissedRequest const& request) {
        return child_->MarkRecommendationDismissed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderLogging::MarkRecommendationClaimed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::
                 MarkRecommendationClaimedRequest const& request) {
        return child_->MarkRecommendationClaimed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderLogging::MarkRecommendationSucceeded(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::
                 MarkRecommendationSucceededRequest const& request) {
        return child_->MarkRecommendationSucceeded(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderLogging::MarkRecommendationFailed(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
              request) {
        return child_->MarkRecommendationFailed(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderLogging::GetRecommenderConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::GetRecommenderConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::GetRecommenderConfigRequest const&
                 request) {
        return child_->GetRecommenderConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderLogging::UpdateRecommenderConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
              request) {
        return child_->UpdateRecommenderConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderLogging::GetInsightTypeConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
                 request) {
        return child_->GetInsightTypeConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderLogging::UpdateInsightTypeConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
              request) {
        return child_->UpdateInsightTypeConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1_internal
}  // namespace cloud
}  // namespace google
