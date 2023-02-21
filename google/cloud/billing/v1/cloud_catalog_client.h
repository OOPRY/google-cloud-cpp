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
// source: google/cloud/billing/v1/cloud_catalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_CLOUD_CATALOG_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_CLOUD_CATALOG_CLIENT_H

#include "google/cloud/billing/v1/cloud_catalog_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A catalog of Google Cloud Platform services and SKUs.
/// Provides pricing information and metadata on Google Cloud Platform services
/// and SKUs.
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
class CloudCatalogClient {
 public:
  explicit CloudCatalogClient(
      std::shared_ptr<CloudCatalogConnection> connection, Options opts = {});
  ~CloudCatalogClient();

  ///@{
  /// @name Copy and move support
  CloudCatalogClient(CloudCatalogClient const&) = default;
  CloudCatalogClient& operator=(CloudCatalogClient const&) = default;
  CloudCatalogClient(CloudCatalogClient&&) = default;
  CloudCatalogClient& operator=(CloudCatalogClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudCatalogClient const& a,
                         CloudCatalogClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudCatalogClient const& a,
                         CloudCatalogClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists all public cloud services.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::Service,google/cloud/billing/v1/cloud_catalog.proto#L61}
  ///
  /// [google.cloud.billing.v1.ListServicesRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L292}
  /// [google.cloud.billing.v1.Service]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L61}
  ///
  StreamRange<google::cloud::billing::v1::Service> ListServices(
      Options opts = {});

  ///
  /// Lists all public cloud services.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::ListServicesRequest,google/cloud/billing/v1/cloud_catalog.proto#L292}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::Service,google/cloud/billing/v1/cloud_catalog.proto#L61}
  ///
  /// [google.cloud.billing.v1.ListServicesRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L292}
  /// [google.cloud.billing.v1.Service]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L61}
  ///
  StreamRange<google::cloud::billing::v1::Service> ListServices(
      google::cloud::billing::v1::ListServicesRequest request,
      Options opts = {});

  ///
  /// Lists all publicly available SKUs for a given cloud service.
  ///
  /// @param parent  Required. The name of the service.
  ///  Example: "services/DA34-426B-A397"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::Sku,google/cloud/billing/v1/cloud_catalog.proto#L84}
  ///
  /// [google.cloud.billing.v1.ListSkusRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L314}
  /// [google.cloud.billing.v1.Sku]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L84}
  ///
  StreamRange<google::cloud::billing::v1::Sku> ListSkus(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all publicly available SKUs for a given cloud service.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::v1::ListSkusRequest,google/cloud/billing/v1/cloud_catalog.proto#L314}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::v1::Sku,google/cloud/billing/v1/cloud_catalog.proto#L84}
  ///
  /// [google.cloud.billing.v1.ListSkusRequest]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L314}
  /// [google.cloud.billing.v1.Sku]:
  /// @googleapis_reference_link{google/cloud/billing/v1/cloud_catalog.proto#L84}
  ///
  StreamRange<google::cloud::billing::v1::Sku> ListSkus(
      google::cloud::billing::v1::ListSkusRequest request, Options opts = {});

 private:
  std::shared_ptr<CloudCatalogConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_CLOUD_CATALOG_CLIENT_H
