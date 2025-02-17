// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.pb.h>
#include <google/spanner/admin/database/v1/spanner_database_admin.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultDatabaseAdminRestStub::DefaultDatabaseAdminRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<rest_internal::LongrunningEndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultDatabaseAdminRestStub::DefaultDatabaseAdminRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DefaultDatabaseAdminRestStub::ListDatabases(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListDatabasesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databases"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncCreateDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "databases"),
            rest_internal::TrimEmptyQueryParameters(
                {std::make_pair("create_statement", request.create_statement()),
                 std::make_pair("database_dialect",
                                std::to_string(request.database_dialect())),
                 std::make_pair("proto_descriptors",
                                request.proto_descriptors())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::spanner::admin::database::v1::Database>
DefaultDatabaseAdminRestStub::GetDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  return rest_internal::Get<google::spanner::admin::database::v1::Database>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncUpdateDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request.database(), false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.database().name())));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncUpdateDatabaseDdl(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.database(), "/", "ddl"),
            rest_internal::TrimEmptyQueryParameters(
                {std::make_pair("operation_id", request.operation_id()),
                 std::make_pair("proto_descriptors",
                                request.proto_descriptors())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

Status DefaultDatabaseAdminRestStub::DropDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  return rest_internal::Delete(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.database()));
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DefaultDatabaseAdminRestStub::GetDatabaseDdl(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::database::v1::GetDatabaseDdlResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.database(), "/", "ddl"));
}

StatusOr<google::iam::v1::Policy> DefaultDatabaseAdminRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":setIamPolicy"));
}

StatusOr<google::iam::v1::Policy> DefaultDatabaseAdminRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":getIamPolicy"));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultDatabaseAdminRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return rest_internal::Post<google::iam::v1::TestIamPermissionsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":testIamPermissions"));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncCreateBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request.backup(), false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "backups"),
            rest_internal::TrimEmptyQueryParameters(
                {std::make_pair("backup_id", request.backup_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncCopyBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "backups", ":copy"),
            rest_internal::TrimEmptyQueryParameters(
                {std::make_pair("backup_id", request.backup_id()),
                 std::make_pair("source_backup", request.source_backup())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::spanner::admin::database::v1::Backup>
DefaultDatabaseAdminRestStub::GetBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  return rest_internal::Get<google::spanner::admin::database::v1::Backup>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DefaultDatabaseAdminRestStub::UpdateBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  return rest_internal::Patch<google::spanner::admin::database::v1::Backup>(
      *service_, rest_context, request.backup(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.backup().name()));
}

Status DefaultDatabaseAdminRestStub::DeleteBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  return rest_internal::Delete(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DefaultDatabaseAdminRestStub::ListBackups(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListBackupsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backups"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncRestoreDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "databases", ":restore"),
            rest_internal::TrimEmptyQueryParameters(
                {std::make_pair("database_id", request.database_id()),
                 std::make_pair("backup", request.backup())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DefaultDatabaseAdminRestStub::ListDatabaseOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListDatabaseOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databaseOperations"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DefaultDatabaseAdminRestStub::ListBackupOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListBackupOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backupOperations"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DefaultDatabaseAdminRestStub::ListDatabaseRoles(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListDatabaseRolesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databaseRoles"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Get<google::longrunning::Operation>(
            *operations, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.name())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultDatabaseAdminRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.name(), ":cancel")));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
