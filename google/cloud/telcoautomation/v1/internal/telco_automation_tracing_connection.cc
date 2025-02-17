// Copyright 2023 Google LLC
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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#include "google/cloud/telcoautomation/v1/internal/telco_automation_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TelcoAutomationTracingConnection::TelcoAutomationTracingConnection(
    std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationTracingConnection::ListOrchestrationClusters(
    google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "ListOrchestrationClusters");
  internal::OTelScope scope(span);
  auto sr = child_->ListOrchestrationClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::OrchestrationCluster>(std::move(span),
                                                                std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationTracingConnection::GetOrchestrationCluster(
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::GetOrchestrationCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOrchestrationCluster(request));
}

future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
TelcoAutomationTracingConnection::CreateOrchestrationCluster(
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "CreateOrchestrationCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateOrchestrationCluster(request));
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationTracingConnection::DeleteOrchestrationCluster(
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "DeleteOrchestrationCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteOrchestrationCluster(request));
}

StreamRange<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationTracingConnection::ListEdgeSlms(
    google::cloud::telcoautomation::v1::ListEdgeSlmsRequest request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListEdgeSlms");
  internal::OTelScope scope(span);
  auto sr = child_->ListEdgeSlms(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::EdgeSlm>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationTracingConnection::GetEdgeSlm(
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::GetEdgeSlm");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEdgeSlm(request));
}

future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>>
TelcoAutomationTracingConnection::CreateEdgeSlm(
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::CreateEdgeSlm");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEdgeSlm(request));
}

future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
TelcoAutomationTracingConnection::DeleteEdgeSlm(
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::DeleteEdgeSlm");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEdgeSlm(request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::CreateBlueprint(
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::CreateBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateBlueprint(request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::UpdateBlueprint(
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::UpdateBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBlueprint(request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::GetBlueprint(
    google::cloud::telcoautomation::v1::GetBlueprintRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::GetBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBlueprint(request));
}

Status TelcoAutomationTracingConnection::DeleteBlueprint(
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::DeleteBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBlueprint(request));
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::ListBlueprints(
    google::cloud::telcoautomation::v1::ListBlueprintsRequest request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListBlueprints");
  internal::OTelScope scope(span);
  auto sr = child_->ListBlueprints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::Blueprint>(std::move(span),
                                                     std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::ApproveBlueprint(
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ApproveBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ApproveBlueprint(request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::ProposeBlueprint(
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ProposeBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ProposeBlueprint(request));
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::RejectBlueprint(
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::RejectBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RejectBlueprint(request));
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::ListBlueprintRevisions(
    google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListBlueprintRevisions");
  internal::OTelScope scope(span);
  auto sr = child_->ListBlueprintRevisions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::Blueprint>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationTracingConnection::SearchBlueprintRevisions(
    google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "SearchBlueprintRevisions");
  internal::OTelScope scope(span);
  auto sr = child_->SearchBlueprintRevisions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::Blueprint>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::SearchDeploymentRevisions(
    google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "SearchDeploymentRevisions");
  internal::OTelScope scope(span);
  auto sr = child_->SearchDeploymentRevisions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::Deployment>(std::move(span),
                                                      std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationTracingConnection::DiscardBlueprintChanges(
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::DiscardBlueprintChanges");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DiscardBlueprintChanges(request));
}

StreamRange<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationTracingConnection::ListPublicBlueprints(
    google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListPublicBlueprints");
  internal::OTelScope scope(span);
  auto sr = child_->ListPublicBlueprints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::PublicBlueprint>(std::move(span),
                                                           std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationTracingConnection::GetPublicBlueprint(
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::GetPublicBlueprint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPublicBlueprint(request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::CreateDeployment(
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::CreateDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateDeployment(request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::UpdateDeployment(
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::UpdateDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateDeployment(request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::GetDeployment(
    google::cloud::telcoautomation::v1::GetDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::GetDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDeployment(request));
}

Status TelcoAutomationTracingConnection::RemoveDeployment(
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::RemoveDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RemoveDeployment(request));
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::ListDeployments(
    google::cloud::telcoautomation::v1::ListDeploymentsRequest request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListDeployments");
  internal::OTelScope scope(span);
  auto sr = child_->ListDeployments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::Deployment>(std::move(span),
                                                      std::move(sr));
}

StreamRange<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::ListDeploymentRevisions(
    google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListDeploymentRevisions");
  internal::OTelScope scope(span);
  auto sr = child_->ListDeploymentRevisions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::Deployment>(std::move(span),
                                                      std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationTracingConnection::DiscardDeploymentChanges(
    google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "DiscardDeploymentChanges");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DiscardDeploymentChanges(request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::ApplyDeployment(
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ApplyDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ApplyDeployment(request));
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationTracingConnection::ComputeDeploymentStatus(
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ComputeDeploymentStatus");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ComputeDeploymentStatus(request));
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationTracingConnection::RollbackDeployment(
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::RollbackDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RollbackDeployment(request));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingConnection::GetHydratedDeployment(
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::GetHydratedDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetHydratedDeployment(request));
}

StreamRange<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingConnection::ListHydratedDeployments(
    google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ListHydratedDeployments");
  internal::OTelScope scope(span);
  auto sr = child_->ListHydratedDeployments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::telcoautomation::v1::HydratedDeployment>(std::move(span),
                                                              std::move(sr));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingConnection::UpdateHydratedDeployment(
    google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::"
      "UpdateHydratedDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateHydratedDeployment(request));
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationTracingConnection::ApplyHydratedDeployment(
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "telcoautomation_v1::TelcoAutomationConnection::ApplyHydratedDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ApplyHydratedDeployment(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection>
MakeTelcoAutomationTracingConnection(
    std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TelcoAutomationTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google
