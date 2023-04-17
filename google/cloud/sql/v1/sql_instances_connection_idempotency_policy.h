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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/sql/v1/cloud_sql_instances.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlInstancesServiceConnectionIdempotencyPolicy {
 public:
  virtual ~SqlInstancesServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SqlInstancesServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AddServerCa(
      google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request);

  virtual google::cloud::Idempotency Clone(
      google::cloud::sql::v1::SqlInstancesCloneRequest const& request);

  virtual google::cloud::Idempotency Delete(
      google::cloud::sql::v1::SqlInstancesDeleteRequest const& request);

  virtual google::cloud::Idempotency DemoteMaster(
      google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request);

  virtual google::cloud::Idempotency Export(
      google::cloud::sql::v1::SqlInstancesExportRequest const& request);

  virtual google::cloud::Idempotency Failover(
      google::cloud::sql::v1::SqlInstancesFailoverRequest const& request);

  virtual google::cloud::Idempotency Get(
      google::cloud::sql::v1::SqlInstancesGetRequest const& request);

  virtual google::cloud::Idempotency Import(
      google::cloud::sql::v1::SqlInstancesImportRequest const& request);

  virtual google::cloud::Idempotency Insert(
      google::cloud::sql::v1::SqlInstancesInsertRequest const& request);

  virtual google::cloud::Idempotency List(
      google::cloud::sql::v1::SqlInstancesListRequest const& request);

  virtual google::cloud::Idempotency ListServerCas(
      google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request);

  virtual google::cloud::Idempotency Patch(
      google::cloud::sql::v1::SqlInstancesPatchRequest const& request);

  virtual google::cloud::Idempotency PromoteReplica(
      google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request);

  virtual google::cloud::Idempotency ResetSslConfig(
      google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request);

  virtual google::cloud::Idempotency Restart(
      google::cloud::sql::v1::SqlInstancesRestartRequest const& request);

  virtual google::cloud::Idempotency RestoreBackup(
      google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request);

  virtual google::cloud::Idempotency RotateServerCa(
      google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request);

  virtual google::cloud::Idempotency StartReplica(
      google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request);

  virtual google::cloud::Idempotency StopReplica(
      google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request);

  virtual google::cloud::Idempotency TruncateLog(
      google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request);

  virtual google::cloud::Idempotency Update(
      google::cloud::sql::v1::SqlInstancesUpdateRequest const& request);

  virtual google::cloud::Idempotency CreateEphemeral(
      google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
          request);

  virtual google::cloud::Idempotency RescheduleMaintenance(
      google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
          request);

  virtual google::cloud::Idempotency VerifyExternalSyncSettings(
      google::cloud::sql::v1::
          SqlInstancesVerifyExternalSyncSettingsRequest const& request);

  virtual google::cloud::Idempotency StartExternalSync(
      google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
          request);
};

std::unique_ptr<SqlInstancesServiceConnectionIdempotencyPolicy>
MakeDefaultSqlInstancesServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CONNECTION_IDEMPOTENCY_POLICY_H
