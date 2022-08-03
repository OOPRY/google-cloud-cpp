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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#include "google/cloud/dialogflow_es/conversation_models_connection.h"
#include "google/cloud/dialogflow_es/conversation_models_options.h"
#include "google/cloud/dialogflow_es/internal/conversation_models_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/conversation_models_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/conversation_models_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationModelsConnection::~ConversationModelsConnection() = default;

future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>
ConversationModelsConnection::CreateConversationModel(
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::ConversationModel>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsConnection::GetConversationModel(
    google::cloud::dialogflow::v2::GetConversationModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsConnection::ListConversationModels(
    google::cloud::dialogflow::v2::
        ListConversationModelsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::ConversationModel>>();
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>
ConversationModelsConnection::DeleteConversationModel(
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>
ConversationModelsConnection::DeployConversationModel(
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::cloud::dialogflow::v2::UndeployConversationModelOperationMetadata>>
ConversationModelsConnection::UndeployConversationModel(
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::
                   UndeployConversationModelOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsConnection::GetConversationModelEvaluation(
    google::cloud::dialogflow::v2::
        GetConversationModelEvaluationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsConnection::ListConversationModelEvaluations(
    google::cloud::dialogflow::v2::
        ListConversationModelEvaluationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::dialogflow::v2::ConversationModelEvaluation>>();
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>
ConversationModelsConnection::CreateConversationModelEvaluation(
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ConversationModelsConnection> MakeConversationModelsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ConversationModelsPolicyOptionList>(options,
                                                                     __func__);
  options = dialogflow_es_internal::ConversationModelsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_es_internal::CreateDefaultConversationModelsStub(
      background->cq(), options);
  return std::make_shared<
      dialogflow_es_internal::ConversationModelsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

std::shared_ptr<ConversationModelsConnection> MakeConversationModelsConnection(
    Options options) {
  return MakeConversationModelsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
