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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_INTERNAL_DLP_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_INTERNAL_DLP_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dlp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DlpServiceStub {
 public:
  virtual ~DlpServiceStub() = 0;

  virtual StatusOr<google::privacy::dlp::v2::InspectContentResponse>
  InspectContent(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::InspectContentRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::RedactImageResponse> RedactImage(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::RedactImageRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
  DeidentifyContent(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::DeidentifyContentRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
  ReidentifyContent(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ReidentifyContentRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
  ListInfoTypes(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ListInfoTypesRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::InspectTemplate>
  CreateInspectTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::CreateInspectTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::InspectTemplate>
  UpdateInspectTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::InspectTemplate>
  GetInspectTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
  ListInspectTemplates(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ListInspectTemplatesRequest const& request) = 0;

  virtual Status DeleteInspectTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  CreateDeidentifyTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  UpdateDeidentifyTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  GetDeidentifyTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
  ListDeidentifyTemplates(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const&
          request) = 0;

  virtual Status DeleteDeidentifyTemplate(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::JobTrigger> CreateJobTrigger(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::JobTrigger> UpdateJobTrigger(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectJobTrigger(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const&
          request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::JobTrigger> GetJobTrigger(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::GetJobTriggerRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>
  ListJobTriggers(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ListJobTriggersRequest const& request) = 0;

  virtual Status DeleteJobTrigger(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DlpJob> ActivateJobTrigger(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DlpJob> CreateDlpJob(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::CreateDlpJobRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse> ListDlpJobs(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ListDlpJobsRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::DlpJob> GetDlpJob(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::GetDlpJobRequest const& request) = 0;

  virtual Status DeleteDlpJob(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request) = 0;

  virtual Status CancelDlpJob(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::CancelDlpJobRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::StoredInfoType>
  CreateStoredInfoType(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::StoredInfoType>
  UpdateStoredInfoType(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::StoredInfoType> GetStoredInfoType(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
  ListStoredInfoTypes(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request) = 0;

  virtual Status DeleteStoredInfoType(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) = 0;

  virtual StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectDlpJob(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) = 0;

  virtual Status FinishDlpJob(
      grpc::ClientContext& context,
      google::privacy::dlp::v2::FinishDlpJobRequest const& request) = 0;
};

class DefaultDlpServiceStub : public DlpServiceStub {
 public:
  explicit DefaultDlpServiceStub(
      std::unique_ptr<google::privacy::dlp::v2::DlpService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::privacy::dlp::v2::InspectContentResponse> InspectContent(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::InspectContentRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::RedactImageResponse> RedactImage(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::RedactImageRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
  DeidentifyContent(grpc::ClientContext& client_context,
                    google::privacy::dlp::v2::DeidentifyContentRequest const&
                        request) override;

  StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
  ReidentifyContent(grpc::ClientContext& client_context,
                    google::privacy::dlp::v2::ReidentifyContentRequest const&
                        request) override;

  StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse> ListInfoTypes(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ListInfoTypesRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> CreateInspectTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::CreateInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> UpdateInspectTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> GetInspectTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
  ListInspectTemplates(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ListInspectTemplatesRequest const& request)
      override;

  Status DeleteInspectTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  CreateDeidentifyTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  UpdateDeidentifyTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate> GetDeidentifyTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
  ListDeidentifyTemplates(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request)
      override;

  Status DeleteDeidentifyTemplate(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> CreateJobTrigger(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> UpdateJobTrigger(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectJobTrigger(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> GetJobTrigger(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::GetJobTriggerRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse> ListJobTriggers(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ListJobTriggersRequest const& request) override;

  Status DeleteJobTrigger(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DlpJob> ActivateJobTrigger(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DlpJob> CreateDlpJob(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::CreateDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse> ListDlpJobs(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ListDlpJobsRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::DlpJob> GetDlpJob(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::GetDlpJobRequest const& request) override;

  Status DeleteDlpJob(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request) override;

  Status CancelDlpJob(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::CancelDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> CreateStoredInfoType(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> UpdateStoredInfoType(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> GetStoredInfoType(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
  ListStoredInfoTypes(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request)
      override;

  Status DeleteStoredInfoType(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse> HybridInspectDlpJob(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request)
      override;

  Status FinishDlpJob(
      grpc::ClientContext& client_context,
      google::privacy::dlp::v2::FinishDlpJobRequest const& request) override;

 private:
  std::unique_ptr<google::privacy::dlp::v2::DlpService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_INTERNAL_DLP_STUB_H
