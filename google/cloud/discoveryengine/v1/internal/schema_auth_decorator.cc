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
// source: google/cloud/discoveryengine/v1/schema_service.proto

#include "google/cloud/discoveryengine/v1/internal/schema_auth_decorator.h"
#include <google/cloud/discoveryengine/v1/schema_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SchemaServiceAuth::SchemaServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SchemaServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::discoveryengine::v1::Schema>
SchemaServiceAuth::GetSchema(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::GetSchemaRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSchema(context, request);
}

StatusOr<google::cloud::discoveryengine::v1::ListSchemasResponse>
SchemaServiceAuth::ListSchemas(
    grpc::ClientContext& context,
    google::cloud::discoveryengine::v1::ListSchemasRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSchemas(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SchemaServiceAuth::AsyncCreateSchema(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::discoveryengine::v1::CreateSchemaRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateSchema(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
SchemaServiceAuth::AsyncUpdateSchema(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::discoveryengine::v1::UpdateSchemaRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateSchema(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
SchemaServiceAuth::AsyncDeleteSchema(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::discoveryengine::v1::DeleteSchemaRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteSchema(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
SchemaServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> SchemaServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
