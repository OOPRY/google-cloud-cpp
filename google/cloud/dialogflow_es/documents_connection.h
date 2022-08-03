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
// source: google/cloud/dialogflow/v2/document.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CONNECTION_H

#include "google/cloud/dialogflow_es/documents_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/internal/documents_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/documents_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using DocumentsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_es_internal::DocumentsRetryTraits>;

using DocumentsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_es_internal::DocumentsRetryTraits>;

using DocumentsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_es_internal::DocumentsRetryTraits>;

/**
 * The `DocumentsConnection` object for `DocumentsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DocumentsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DocumentsClient`.
 *
 * To create a concrete instance, see `MakeDocumentsConnection()`.
 *
 * For mocking, see `dialogflow_es_mocks::MockDocumentsConnection`.
 */
class DocumentsConnection {
 public:
  virtual ~DocumentsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::v2::Document> ListDocuments(
      google::cloud::dialogflow::v2::ListDocumentsRequest request);

  virtual StatusOr<google::cloud::dialogflow::v2::Document> GetDocument(
      google::cloud::dialogflow::v2::GetDocumentRequest const& request);

  virtual future<StatusOr<google::cloud::dialogflow::v2::Document>>
  CreateDocument(
      google::cloud::dialogflow::v2::CreateDocumentRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::v2::ImportDocumentsResponse>>
  ImportDocuments(
      google::cloud::dialogflow::v2::ImportDocumentsRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::v2::KnowledgeOperationMetadata>>
  DeleteDocument(
      google::cloud::dialogflow::v2::DeleteDocumentRequest const& request);

  virtual future<StatusOr<google::cloud::dialogflow::v2::Document>>
  UpdateDocument(
      google::cloud::dialogflow::v2::UpdateDocumentRequest const& request);

  virtual future<StatusOr<google::cloud::dialogflow::v2::Document>>
  ReloadDocument(
      google::cloud::dialogflow::v2::ReloadDocumentRequest const& request);

  virtual future<StatusOr<google::cloud::dialogflow::v2::Document>>
  ExportDocument(
      google::cloud::dialogflow::v2::ExportDocumentRequest const& request);
};

/**
 * A factory function to construct an object of type `DocumentsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DocumentsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DocumentsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::dialogflow_es::DocumentsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `DocumentsConnection` created by
 * this function.
 */
std::shared_ptr<DocumentsConnection> MakeDocumentsConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<DocumentsConnection> MakeDocumentsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_DOCUMENTS_CONNECTION_H
