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
// source: google/cloud/dataproc/v1/jobs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_JOB_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_JOB_CONTROLLER_CONNECTION_H

#include "google/cloud/dataproc/internal/job_controller_retry_traits.h"
#include "google/cloud/dataproc/internal/job_controller_stub.h"
#include "google/cloud/dataproc/job_controller_connection_idempotency_policy.h"
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
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using JobControllerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dataproc_internal::JobControllerRetryTraits>;

using JobControllerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dataproc_internal::JobControllerRetryTraits>;

using JobControllerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dataproc_internal::JobControllerRetryTraits>;

/**
 * The `JobControllerConnection` object for `JobControllerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `JobControllerClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `JobControllerClient`.
 *
 * To create a concrete instance, see `MakeJobControllerConnection()`.
 *
 * For mocking, see `dataproc_mocks::MockJobControllerConnection`.
 */
class JobControllerConnection {
 public:
  virtual ~JobControllerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dataproc::v1::Job> SubmitJob(
      google::cloud::dataproc::v1::SubmitJobRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Job>>
  SubmitJobAsOperation(
      google::cloud::dataproc::v1::SubmitJobRequest const& request);

  virtual StatusOr<google::cloud::dataproc::v1::Job> GetJob(
      google::cloud::dataproc::v1::GetJobRequest const& request);

  virtual StreamRange<google::cloud::dataproc::v1::Job> ListJobs(
      google::cloud::dataproc::v1::ListJobsRequest request);

  virtual StatusOr<google::cloud::dataproc::v1::Job> UpdateJob(
      google::cloud::dataproc::v1::UpdateJobRequest const& request);

  virtual StatusOr<google::cloud::dataproc::v1::Job> CancelJob(
      google::cloud::dataproc::v1::CancelJobRequest const& request);

  virtual Status DeleteJob(
      google::cloud::dataproc::v1::DeleteJobRequest const& request);
};

/**
 * A factory function to construct an object of type `JobControllerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of JobControllerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `JobControllerConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::dataproc::JobControllerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `JobControllerConnection` created by
 * this function.
 */
std::shared_ptr<JobControllerConnection> MakeJobControllerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_JOB_CONTROLLER_CONNECTION_H
