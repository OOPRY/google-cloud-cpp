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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CLIENT_H

#include "google/cloud/datamigration/v1/data_migration_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Database Migration service
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class DataMigrationServiceClient {
 public:
  explicit DataMigrationServiceClient(
      std::shared_ptr<DataMigrationServiceConnection> connection,
      Options opts = {});
  ~DataMigrationServiceClient();

  ///@{
  /// @name Copy and move support
  DataMigrationServiceClient(DataMigrationServiceClient const&) = default;
  DataMigrationServiceClient& operator=(DataMigrationServiceClient const&) =
      default;
  DataMigrationServiceClient(DataMigrationServiceClient&&) = default;
  DataMigrationServiceClient& operator=(DataMigrationServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DataMigrationServiceClient const& a,
                         DataMigrationServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DataMigrationServiceClient const& a,
                         DataMigrationServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists migration jobs in a given project and location.
  ///
  /// @param parent  Required. The parent, which owns this collection of
  /// migrationJobs.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.ListMigrationJobsRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L239}
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  StreamRange<google::cloud::clouddms::v1::MigrationJob> ListMigrationJobs(
      std::string const& parent, Options opts = {});

  ///
  /// Lists migration jobs in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::ListMigrationJobsRequest,google/cloud/clouddms/v1/clouddms.proto#L239}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.ListMigrationJobsRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L239}
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  StreamRange<google::cloud::clouddms::v1::MigrationJob> ListMigrationJobs(
      google::cloud::clouddms::v1::ListMigrationJobsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single migration job.
  ///
  /// @param name  Required. Name of the migration job resource to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.GetMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L291}
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  StatusOr<google::cloud::clouddms::v1::MigrationJob> GetMigrationJob(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single migration job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::GetMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L291}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.GetMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L291}
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  StatusOr<google::cloud::clouddms::v1::MigrationJob> GetMigrationJob(
      google::cloud::clouddms::v1::GetMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Creates a new migration job in a given project and location.
  ///
  /// @param parent  Required. The parent, which owns this collection of
  /// migration jobs.
  /// @param migration_job  Required. Represents a [migration
  ///  job](https://cloud.google.com/database-migration/docs/reference/rest/v1/projects.locations.migrationJobs)
  ///  object.
  /// @param migration_job_id  Required. The ID of the instance to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.CreateMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L303}
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  CreateMigrationJob(
      std::string const& parent,
      google::cloud::clouddms::v1::MigrationJob const& migration_job,
      std::string const& migration_job_id, Options opts = {});

  ///
  /// Creates a new migration job in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::CreateMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L303}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.CreateMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L303}
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  CreateMigrationJob(
      google::cloud::clouddms::v1::CreateMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Updates the parameters of a single migration job.
  ///
  /// @param migration_job  Required. The migration job parameters to update.
  /// @param update_mask  Required. Field mask is used to specify the fields to
  /// be overwritten in the
  ///  migration job resource by the update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.UpdateMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L331}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  UpdateMigrationJob(
      google::cloud::clouddms::v1::MigrationJob const& migration_job,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the parameters of a single migration job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::UpdateMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L331}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.UpdateMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L331}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  UpdateMigrationJob(
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single migration job.
  ///
  /// @param name  Required. Name of the migration job resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::OperationMetadata,google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  /// [google.cloud.clouddms.v1.DeleteMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L350}
  /// [google.cloud.clouddms.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteMigrationJob(std::string const& name, Options opts = {});

  ///
  /// Deletes a single migration job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::DeleteMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L350}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::OperationMetadata,google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  /// [google.cloud.clouddms.v1.DeleteMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L350}
  /// [google.cloud.clouddms.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteMigrationJob(
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Start an already created migration job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::StartMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L375}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.StartMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L375}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>> StartMigrationJob(
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Stops a running migration job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::StopMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L383}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.StopMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L383}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>> StopMigrationJob(
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Resume a migration job that is currently stopped and is resumable (was
  /// stopped during CDC phase).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::ResumeMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L391}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.ResumeMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L391}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  ResumeMigrationJob(
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Promote a migration job, stopping replication to the destination and
  /// promoting the destination to be a standalone database.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::PromoteMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L399}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.PromoteMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L399}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  PromoteMigrationJob(
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Verify a migration job, making sure the destination can reach the source
  /// and that all configuration and prerequisites are met.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::VerifyMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L407}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.VerifyMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L407}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  VerifyMigrationJob(
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Restart a stopped or failed migration job, resetting the destination
  /// instance to its original state and starting the migration process from
  /// scratch.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::RestartMigrationJobRequest,google/cloud/clouddms/v1/clouddms.proto#L415}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::MigrationJob,google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  ///
  /// [google.cloud.clouddms.v1.MigrationJob]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L372}
  /// [google.cloud.clouddms.v1.RestartMigrationJobRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L415}
  ///
  future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  RestartMigrationJob(
      google::cloud::clouddms::v1::RestartMigrationJobRequest const& request,
      Options opts = {});

  ///
  /// Generate a SSH configuration script to configure the reverse SSH
  /// connectivity.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::GenerateSshScriptRequest,google/cloud/clouddms/v1/clouddms.proto#L423}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::SshScript,google/cloud/clouddms/v1/clouddms.proto#L464}
  ///
  /// [google.cloud.clouddms.v1.GenerateSshScriptRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L423}
  /// [google.cloud.clouddms.v1.SshScript]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L464}
  ///
  StatusOr<google::cloud::clouddms::v1::SshScript> GenerateSshScript(
      google::cloud::clouddms::v1::GenerateSshScriptRequest const& request,
      Options opts = {});

  ///
  /// Retrieve a list of all connection profiles in a given project and
  /// location.
  ///
  /// @param parent  Required. The parent, which owns this collection of
  /// connection profiles.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.ListConnectionProfilesRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L470}
  ///
  StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
  ListConnectionProfiles(std::string const& parent, Options opts = {});

  ///
  /// Retrieve a list of all connection profiles in a given project and
  /// location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::ListConnectionProfilesRequest,google/cloud/clouddms/v1/clouddms.proto#L470}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.ListConnectionProfilesRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L470}
  ///
  StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
  ListConnectionProfiles(
      google::cloud::clouddms::v1::ListConnectionProfilesRequest request,
      Options opts = {});

  ///
  /// Gets details of a single connection profile.
  ///
  /// @param name  Required. Name of the connection profile resource to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.GetConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L521}
  ///
  StatusOr<google::cloud::clouddms::v1::ConnectionProfile> GetConnectionProfile(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single connection profile.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::GetConnectionProfileRequest,google/cloud/clouddms/v1/clouddms.proto#L521}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.GetConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L521}
  ///
  StatusOr<google::cloud::clouddms::v1::ConnectionProfile> GetConnectionProfile(
      google::cloud::clouddms::v1::GetConnectionProfileRequest const& request,
      Options opts = {});

  ///
  /// Creates a new connection profile in a given project and location.
  ///
  /// @param parent  Required. The parent, which owns this collection of
  /// connection profiles.
  /// @param connection_profile  Required. The create request body including the
  /// connection profile data
  /// @param connection_profile_id  Required. The connection profile identifier.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.CreateConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L532}
  ///
  future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  CreateConnectionProfile(
      std::string const& parent,
      google::cloud::clouddms::v1::ConnectionProfile const& connection_profile,
      std::string const& connection_profile_id, Options opts = {});

  ///
  /// Creates a new connection profile in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::CreateConnectionProfileRequest,google/cloud/clouddms/v1/clouddms.proto#L532}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.CreateConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L532}
  ///
  future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  CreateConnectionProfile(
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request,
      Options opts = {});

  ///
  /// Update the configuration of a single connection profile.
  ///
  /// @param connection_profile  Required. The connection profile parameters to
  /// update.
  /// @param update_mask  Required. Field mask is used to specify the fields to
  /// be overwritten in the
  ///  connection profile resource by the update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.UpdateConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L558}
  ///
  future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  UpdateConnectionProfile(
      google::cloud::clouddms::v1::ConnectionProfile const& connection_profile,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Update the configuration of a single connection profile.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::UpdateConnectionProfileRequest,google/cloud/clouddms/v1/clouddms.proto#L558}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::ConnectionProfile,google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  ///
  /// [google.cloud.clouddms.v1.ConnectionProfile]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms_resources.proto#L536}
  /// [google.cloud.clouddms.v1.UpdateConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L558}
  ///
  future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  UpdateConnectionProfile(
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes a single Database Migration Service connection profile.
  /// A connection profile can only be deleted if it is not in use by any
  /// active migration jobs.
  ///
  /// @param name  Required. Name of the connection profile resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::OperationMetadata,google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  /// [google.cloud.clouddms.v1.DeleteConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L577}
  /// [google.cloud.clouddms.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteConnectionProfile(std::string const& name, Options opts = {});

  ///
  /// Deletes a single Database Migration Service connection profile.
  /// A connection profile can only be deleted if it is not in use by any
  /// active migration jobs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::clouddms::v1::DeleteConnectionProfileRequest,google/cloud/clouddms/v1/clouddms.proto#L577}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::clouddms::v1::OperationMetadata,google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  /// [google.cloud.clouddms.v1.DeleteConnectionProfileRequest]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L577}
  /// [google.cloud.clouddms.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/clouddms/v1/clouddms.proto#L601}
  ///
  future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteConnectionProfile(
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<DataMigrationServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CLIENT_H
