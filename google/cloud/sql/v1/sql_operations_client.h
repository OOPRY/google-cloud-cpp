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
// source: google/cloud/sql/v1/cloud_sql_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_OPERATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_OPERATIONS_CLIENT_H

#include "google/cloud/sql/v1/sql_operations_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to fetch operations for database instances.
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
class SqlOperationsServiceClient {
 public:
  explicit SqlOperationsServiceClient(
      ExperimentalTag,
      std::shared_ptr<SqlOperationsServiceConnection> connection,
      Options opts = {});
  ~SqlOperationsServiceClient();

  ///@{
  /// @name Copy and move support
  SqlOperationsServiceClient(SqlOperationsServiceClient const&) = default;
  SqlOperationsServiceClient& operator=(SqlOperationsServiceClient const&) =
      default;
  SqlOperationsServiceClient(SqlOperationsServiceClient&&) = default;
  SqlOperationsServiceClient& operator=(SqlOperationsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SqlOperationsServiceClient const& a,
                         SqlOperationsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SqlOperationsServiceClient const& a,
                         SqlOperationsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Retrieves an instance operation that has been performed on an instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlOperationsGetRequest,google/cloud/sql/v1/cloud_sql_operations.proto#L54}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlOperationsGetRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_operations.proto#L54}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Get(
      google::cloud::sql::v1::SqlOperationsGetRequest const& request,
      Options opts = {});

  ///
  /// Lists all instance operations that have been performed on the given Cloud
  /// SQL instance in the reverse chronological order of the start time.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlOperationsListRequest,google/cloud/sql/v1/cloud_sql_operations.proto#L63}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::OperationsListResponse,google/cloud/sql/v1/cloud_sql_operations.proto#L79}
  ///
  /// [google.cloud.sql.v1.OperationsListResponse]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_operations.proto#L79}
  /// [google.cloud.sql.v1.SqlOperationsListRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_operations.proto#L63}
  ///
  StatusOr<google::cloud::sql::v1::OperationsListResponse> List(
      google::cloud::sql::v1::SqlOperationsListRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SqlOperationsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_OPERATIONS_CLIENT_H
