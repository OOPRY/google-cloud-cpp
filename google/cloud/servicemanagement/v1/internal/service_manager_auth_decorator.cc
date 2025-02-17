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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/v1/internal/service_manager_auth_decorator.h"
#include <google/api/servicemanagement/v1/servicemanager.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicemanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceManagerAuth::ServiceManagerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ServiceManagerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::api::servicemanagement::v1::ListServicesResponse>
ServiceManagerAuth::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::ListServicesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServices(context, options, request);
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerAuth::GetService(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerAuth::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerAuth::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerAuth::AsyncUndeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUndeleteService(cq, *std::move(context),
                                           std::move(options), request);
      });
}

StatusOr<google::api::servicemanagement::v1::ListServiceConfigsResponse>
ServiceManagerAuth::ListServiceConfigs(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::ListServiceConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServiceConfigs(context, options, request);
}

StatusOr<google::api::Service> ServiceManagerAuth::GetServiceConfig(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServiceConfig(context, options, request);
}

StatusOr<google::api::Service> ServiceManagerAuth::CreateServiceConfig(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateServiceConfig(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerAuth::AsyncSubmitConfigSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncSubmitConfigSource(cq, *std::move(context),
                                              std::move(options), request);
      });
}

StatusOr<google::api::servicemanagement::v1::ListServiceRolloutsResponse>
ServiceManagerAuth::ListServiceRollouts(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServiceRollouts(context, options, request);
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerAuth::GetServiceRollout(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServiceRollout(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerAuth::AsyncCreateServiceRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateServiceRollout(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerAuth::GenerateConfigReport(
    grpc::ClientContext& context, Options const& options,
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateConfigReport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceManagerAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> ServiceManagerAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1_internal
}  // namespace cloud
}  // namespace google
