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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_SCHEMA_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_SCHEMA_CLIENT_H

#include "google/cloud/discoveryengine/v1/schema_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Schema][google.cloud.discoveryengine.v1.Schema]s.
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
/// [google.cloud.discoveryengine.v1.Schema]:
/// @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
///
class SchemaServiceClient {
 public:
  explicit SchemaServiceClient(
      std::shared_ptr<SchemaServiceConnection> connection, Options opts = {});
  ~SchemaServiceClient();

  ///@{
  /// @name Copy and move support
  SchemaServiceClient(SchemaServiceClient const&) = default;
  SchemaServiceClient& operator=(SchemaServiceClient const&) = default;
  SchemaServiceClient(SchemaServiceClient&&) = default;
  SchemaServiceClient& operator=(SchemaServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SchemaServiceClient const& a,
                         SchemaServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SchemaServiceClient const& a,
                         SchemaServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param name  Required. The full resource name of the schema, in the format of
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}/schemas/{schema}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Schema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.GetSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L117}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Schema> GetSchema(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.GetSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Schema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.GetSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L117}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Schema> GetSchema(
      google::cloud::discoveryengine::v1::GetSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a list of [Schema][google.cloud.discoveryengine.v1.Schema]s.
  ///
  /// @param parent  Required. The parent data store resource name, in the format of
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.discoveryengine.v1.Schema], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.ListSchemasRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L131}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  StreamRange<google::cloud::discoveryengine::v1::Schema> ListSchemas(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Gets a list of [Schema][google.cloud.discoveryengine.v1.Schema]s.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.ListSchemasRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.discoveryengine.v1.Schema], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.ListSchemasRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L131}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  StreamRange<google::cloud::discoveryengine::v1::Schema> ListSchemas(
      google::cloud::discoveryengine::v1::ListSchemasRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param parent  Required. The parent data store resource name, in the format of
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}`.
  /// @param schema  Required. The [Schema][google.cloud.discoveryengine.v1.Schema] to create.
  /// @param schema_id  Required. The ID to use for the
  ///  [Schema][google.cloud.discoveryengine.v1.Schema], which will become the
  ///  final component of the
  ///  [Schema.name][google.cloud.discoveryengine.v1.Schema.name].
  ///  @n
  ///  This field should conform to
  ///  [RFC-1034](https://tools.ietf.org/html/rfc1034) standard with a length
  ///  limit of 63 characters.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.Schema] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.CreateSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L177}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> CreateSchema(
      std::string const& parent,
      google::cloud::discoveryengine::v1::Schema const& schema,
      std::string const& schema_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.CreateSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.Schema] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.CreateSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L177}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> CreateSchema(
      google::cloud::discoveryengine::v1::CreateSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.UpdateSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.Schema] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  /// [google.cloud.discoveryengine.v1.UpdateSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L204}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::Schema>> UpdateSchema(
      google::cloud::discoveryengine::v1::UpdateSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param name  Required. The full resource name of the schema, in the format of
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}/schemas/{schema}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.DeleteSchemaMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.DeleteSchemaMetadata]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L249}
  /// [google.cloud.discoveryengine.v1.DeleteSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L217}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::DeleteSchemaMetadata>>
  DeleteSchema(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a [Schema][google.cloud.discoveryengine.v1.Schema].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.DeleteSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.DeleteSchemaMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.DeleteSchemaMetadata]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L249}
  /// [google.cloud.discoveryengine.v1.DeleteSchemaRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema_service.proto#L217}
  /// [google.cloud.discoveryengine.v1.Schema]: @googleapis_reference_link{google/cloud/discoveryengine/v1/schema.proto#L33}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::DeleteSchemaMetadata>>
  DeleteSchema(
      google::cloud::discoveryengine::v1::DeleteSchemaRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SchemaServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_SCHEMA_CLIENT_H
