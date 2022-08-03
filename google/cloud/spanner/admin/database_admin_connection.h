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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_DATABASE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_DATABASE_ADMIN_CONNECTION_H

#include "google/cloud/spanner/admin/database_admin_connection_idempotency_policy.h"
#include "google/cloud/spanner/admin/internal/database_admin_retry_traits.h"
#include "google/cloud/spanner/admin/internal/database_admin_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using DatabaseAdminRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        spanner_admin_internal::DatabaseAdminRetryTraits>;

using DatabaseAdminLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        spanner_admin_internal::DatabaseAdminRetryTraits>;

using DatabaseAdminLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        spanner_admin_internal::DatabaseAdminRetryTraits>;

/**
 * The `DatabaseAdminConnection` object for `DatabaseAdminClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DatabaseAdminClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DatabaseAdminClient`.
 *
 * To create a concrete instance, see `MakeDatabaseAdminConnection()`.
 *
 * For mocking, see `spanner_admin_mocks::MockDatabaseAdminConnection`.
 */
class DatabaseAdminConnection {
 public:
  virtual ~DatabaseAdminConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::spanner::admin::database::v1::Database>
  ListDatabases(
      google::spanner::admin::database::v1::ListDatabasesRequest request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  CreateDatabase(
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request);

  virtual StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      google::spanner::admin::database::v1::GetDatabaseRequest const& request);

  virtual future<
      StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request);

  virtual Status DropDatabase(
      google::spanner::admin::database::v1::DropDatabaseRequest const& request);

  virtual StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Backup>>
  CreateBackup(
      google::spanner::admin::database::v1::CreateBackupRequest const& request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Backup>>
  CopyBackup(
      google::spanner::admin::database::v1::CopyBackupRequest const& request);

  virtual StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      google::spanner::admin::database::v1::GetBackupRequest const& request);

  virtual StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      google::spanner::admin::database::v1::UpdateBackupRequest const& request);

  virtual Status DeleteBackup(
      google::spanner::admin::database::v1::DeleteBackupRequest const& request);

  virtual StreamRange<google::spanner::admin::database::v1::Backup> ListBackups(
      google::spanner::admin::database::v1::ListBackupsRequest request);

  virtual future<StatusOr<google::spanner::admin::database::v1::Database>>
  RestoreDatabase(
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request);

  virtual StreamRange<google::longrunning::Operation> ListDatabaseOperations(
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest
          request);

  virtual StreamRange<google::longrunning::Operation> ListBackupOperations(
      google::spanner::admin::database::v1::ListBackupOperationsRequest
          request);

  virtual StreamRange<google::spanner::admin::database::v1::DatabaseRole>
  ListDatabaseRoles(
      google::spanner::admin::database::v1::ListDatabaseRolesRequest request);
};

/**
 * A factory function to construct an object of type `DatabaseAdminConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DatabaseAdminClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DatabaseAdminConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::spanner_admin::DatabaseAdminPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DatabaseAdminConnection` created by
 * this function.
 */
std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_DATABASE_ADMIN_CONNECTION_H
