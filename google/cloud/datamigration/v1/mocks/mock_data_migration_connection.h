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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_MOCKS_MOCK_DATA_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_MOCKS_MOCK_DATA_MIGRATION_CONNECTION_H

#include "google/cloud/datamigration/v1/data_migration_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace datamigration_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DataMigrationServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DataMigrationServiceClient`. To do
 * so, construct an object of type `DataMigrationServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockDataMigrationServiceConnection
    : public datamigration_v1::DataMigrationServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::clouddms::v1::MigrationJob>,
              ListMigrationJobs,
              (google::cloud::clouddms::v1::ListMigrationJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::MigrationJob>, GetMigrationJob,
      (google::cloud::clouddms::v1::GetMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      CreateMigrationJob,
      (google::cloud::clouddms::v1::CreateMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      UpdateMigrationJob,
      (google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
      DeleteMigrationJob,
      (google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      StartMigrationJob,
      (google::cloud::clouddms::v1::StartMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      StopMigrationJob,
      (google::cloud::clouddms::v1::StopMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      ResumeMigrationJob,
      (google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      PromoteMigrationJob,
      (google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      VerifyMigrationJob,
      (google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      RestartMigrationJob,
      (google::cloud::clouddms::v1::RestartMigrationJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::SshScript>, GenerateSshScript,
      (google::cloud::clouddms::v1::GenerateSshScriptRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::clouddms::v1::ConnectionProfile>,
      ListConnectionProfiles,
      (google::cloud::clouddms::v1::ListConnectionProfilesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::ConnectionProfile>,
      GetConnectionProfile,
      (google::cloud::clouddms::v1::GetConnectionProfileRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>,
      CreateConnectionProfile,
      (google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>,
      UpdateConnectionProfile,
      (google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
      DeleteConnectionProfile,
      (google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_MOCKS_MOCK_DATA_MIGRATION_CONNECTION_H
