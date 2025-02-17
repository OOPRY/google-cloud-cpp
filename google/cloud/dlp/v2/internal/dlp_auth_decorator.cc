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
// source: google/privacy/dlp/v2/dlp.proto

#include "google/cloud/dlp/v2/internal/dlp_auth_decorator.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dlp_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceAuth::DlpServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DlpServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceAuth::InspectContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::InspectContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->InspectContent(context, options, request);
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceAuth::RedactImage(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::RedactImageRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RedactImage(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceAuth::DeidentifyContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeidentifyContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeidentifyContent(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceAuth::ReidentifyContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ReidentifyContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReidentifyContent(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceAuth::ListInfoTypes(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListInfoTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInfoTypes(context, options, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceAuth::CreateInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceAuth::UpdateInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceAuth::GetInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
DlpServiceAuth::ListInspectTemplates(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListInspectTemplatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInspectTemplates(context, options, request);
}

Status DlpServiceAuth::DeleteInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceAuth::CreateDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceAuth::UpdateDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceAuth::GetDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
DlpServiceAuth::ListDeidentifyTemplates(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDeidentifyTemplates(context, options, request);
}

Status DlpServiceAuth::DeleteDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceAuth::CreateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceAuth::UpdateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceAuth::HybridInspectJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->HybridInspectJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceAuth::GetJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>
DlpServiceAuth::ListJobTriggers(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListJobTriggersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListJobTriggers(context, options, request);
}

Status DlpServiceAuth::DeleteJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceAuth::ActivateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ActivateJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceAuth::CreateDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDiscoveryConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceAuth::UpdateDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceAuth::GetDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDiscoveryConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListDiscoveryConfigsResponse>
DlpServiceAuth::ListDiscoveryConfigs(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDiscoveryConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDiscoveryConfigs(context, options, request);
}

Status DlpServiceAuth::DeleteDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceAuth::CreateDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDlpJob(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse>
DlpServiceAuth::ListDlpJobs(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDlpJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDlpJobs(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceAuth::GetDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDlpJob(context, options, request);
}

Status DlpServiceAuth::DeleteDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDlpJob(context, options, request);
}

Status DlpServiceAuth::CancelDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CancelDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelDlpJob(context, options, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceAuth::CreateStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceAuth::UpdateStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceAuth::GetStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
DlpServiceAuth::ListStoredInfoTypes(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListStoredInfoTypes(context, options, request);
}

Status DlpServiceAuth::DeleteStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceAuth::HybridInspectDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->HybridInspectDlpJob(context, options, request);
}

Status DlpServiceAuth::FinishDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::FinishDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->FinishDlpJob(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2_internal
}  // namespace cloud
}  // namespace google
