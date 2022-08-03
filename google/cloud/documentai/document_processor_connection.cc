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

#include "google/cloud/documentai/document_processor_connection.h"
#include "google/cloud/documentai/document_processor_options.h"
#include "google/cloud/documentai/internal/document_processor_connection_impl.h"
#include "google/cloud/documentai/internal/document_processor_option_defaults.h"
#include "google/cloud/documentai/internal/document_processor_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace documentai {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceConnection::~DocumentProcessorServiceConnection() =
    default;

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceConnection::ProcessDocument(
    google::cloud::documentai::v1::ProcessRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
DocumentProcessorServiceConnection::BatchProcessDocuments(
    google::cloud::documentai::v1::BatchProcessRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
DocumentProcessorServiceConnection::ReviewDocument(
    google::cloud::documentai::v1::ReviewDocumentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceConnection(std::string const& location,
                                       Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 DocumentProcessorServicePolicyOptionList>(
      options, __func__);
  options = documentai_internal::DocumentProcessorServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = documentai_internal::CreateDefaultDocumentProcessorServiceStub(
      background->cq(), options);
  return std::make_shared<
      documentai_internal::DocumentProcessorServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

std::shared_ptr<DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceConnection(Options options) {
  return MakeDocumentProcessorServiceConnection(std::string{},
                                                std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai
}  // namespace cloud
}  // namespace google
