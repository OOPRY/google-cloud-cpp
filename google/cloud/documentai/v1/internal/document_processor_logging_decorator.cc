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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/v1/internal/document_processor_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/documentai/v1/document_processor_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceLogging::DocumentProcessorServiceLogging(
    std::shared_ptr<DocumentProcessorServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceLogging::ProcessDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::ProcessRequest const& request) {
        return child_->ProcessDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::documentai::v1::BatchProcessRequest const& request) {
        return child_->AsyncBatchProcessDocuments(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceLogging::FetchProcessorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::FetchProcessorTypesRequest const&
                 request) {
        return child_->FetchProcessorTypes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
DocumentProcessorServiceLogging::ListProcessorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::ListProcessorTypesRequest const&
                 request) {
        return child_->ListProcessorTypes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceLogging::GetProcessorType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::GetProcessorTypeRequest const&
                 request) {
        return child_->GetProcessorType(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
DocumentProcessorServiceLogging::ListProcessors(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::documentai::v1::ListProcessorsRequest const& request) {
        return child_->ListProcessors(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceLogging::GetProcessor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::documentai::v1::GetProcessorRequest const& request) {
        return child_->GetProcessor(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncTrainProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::TrainProcessorVersionRequest const&
                 request) {
        return child_->AsyncTrainProcessorVersion(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceLogging::GetProcessorVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::GetProcessorVersionRequest const&
                 request) {
        return child_->GetProcessorVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
DocumentProcessorServiceLogging::ListProcessorVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListProcessorVersionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::ListProcessorVersionsRequest const&
                 request) {
        return child_->ListProcessorVersions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncDeleteProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
                 request) {
        return child_->AsyncDeleteProcessorVersion(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncDeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::DeployProcessorVersionRequest const&
                 request) {
        return child_->AsyncDeployProcessorVersion(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncUndeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
              request) {
        return child_->AsyncUndeployProcessorVersion(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceLogging::CreateProcessor(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::CreateProcessorRequest const&
                 request) {
        return child_->CreateProcessor(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncDeleteProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::DeleteProcessorRequest const&
                 request) {
        return child_->AsyncDeleteProcessor(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncEnableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::EnableProcessorRequest const&
                 request) {
        return child_->AsyncEnableProcessor(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncDisableProcessor(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::DisableProcessorRequest const&
                 request) {
        return child_->AsyncDisableProcessor(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncSetDefaultProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::documentai::v1::
                 SetDefaultProcessorVersionRequest const& request) {
        return child_->AsyncSetDefaultProcessorVersion(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
        return child_->AsyncReviewDocument(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncEvaluateProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
              request) {
        return child_->AsyncEvaluateProcessorVersion(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceLogging::GetEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::GetEvaluationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::documentai::v1::GetEvaluationRequest const& request) {
        return child_->GetEvaluation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
DocumentProcessorServiceLogging::ListEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::documentai::v1::ListEvaluationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::documentai::v1::ListEvaluationsRequest const&
                 request) {
        return child_->ListEvaluations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> DocumentProcessorServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google
