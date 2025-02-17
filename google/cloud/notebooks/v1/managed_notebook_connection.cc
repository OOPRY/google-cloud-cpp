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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/v1/managed_notebook_connection.h"
#include "google/cloud/notebooks/v1/internal/managed_notebook_connection_impl.h"
#include "google/cloud/notebooks/v1/internal/managed_notebook_option_defaults.h"
#include "google/cloud/notebooks/v1/internal/managed_notebook_stub_factory.h"
#include "google/cloud/notebooks/v1/internal/managed_notebook_tracing_connection.h"
#include "google/cloud/notebooks/v1/managed_notebook_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedNotebookServiceConnection::~ManagedNotebookServiceConnection() = default;

StreamRange<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceConnection::ListRuntimes(
    google::cloud::notebooks::v1::
        ListRuntimesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::notebooks::v1::Runtime>>();
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceConnection::GetRuntime(
    google::cloud::notebooks::v1::GetRuntimeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::CreateRuntime(
    google::cloud::notebooks::v1::CreateRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::UpdateRuntime(
    google::cloud::notebooks::v1::UpdateRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
ManagedNotebookServiceConnection::DeleteRuntime(
    google::cloud::notebooks::v1::DeleteRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::StartRuntime(
    google::cloud::notebooks::v1::StartRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::StopRuntime(
    google::cloud::notebooks::v1::StopRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::SwitchRuntime(
    google::cloud::notebooks::v1::SwitchRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::ResetRuntime(
    google::cloud::notebooks::v1::ResetRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::UpgradeRuntime(
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::ReportRuntimeEvent(
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
ManagedNotebookServiceConnection::RefreshRuntimeTokenInternal(
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::DiagnoseRuntime(
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ManagedNotebookServiceConnection>
MakeManagedNotebookServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ManagedNotebookServicePolicyOptionList>(
      options, __func__);
  options = notebooks_v1_internal::ManagedNotebookServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = notebooks_v1_internal::CreateDefaultManagedNotebookServiceStub(
      std::move(auth), options);
  return notebooks_v1_internal::MakeManagedNotebookServiceTracingConnection(
      std::make_shared<
          notebooks_v1_internal::ManagedNotebookServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1
}  // namespace cloud
}  // namespace google
