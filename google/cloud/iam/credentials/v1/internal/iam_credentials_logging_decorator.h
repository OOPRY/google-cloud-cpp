// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_CREDENTIALS_V1_INTERNAL_IAM_CREDENTIALS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_CREDENTIALS_V1_INTERNAL_IAM_CREDENTIALS_LOGGING_DECORATOR_H

#include "google/cloud/iam/credentials/v1/internal/iam_credentials_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace iam_credentials_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IAMCredentialsLogging : public IAMCredentialsStub {
 public:
  ~IAMCredentialsLogging() override = default;
  IAMCredentialsLogging(std::shared_ptr<IAMCredentialsStub> child,
                        TracingOptions tracing_options,
                        std::set<std::string> const& components);

  StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      grpc::ClientContext& context, Options const& options,
      google::iam::credentials::v1::GenerateAccessTokenRequest const& request)
      override;

  StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
  GenerateIdToken(grpc::ClientContext& context, Options const& options,
                  google::iam::credentials::v1::GenerateIdTokenRequest const&
                      request) override;

  StatusOr<google::iam::credentials::v1::SignBlobResponse> SignBlob(
      grpc::ClientContext& context, Options const& options,
      google::iam::credentials::v1::SignBlobRequest const& request) override;

  StatusOr<google::iam::credentials::v1::SignJwtResponse> SignJwt(
      grpc::ClientContext& context, Options const& options,
      google::iam::credentials::v1::SignJwtRequest const& request) override;

 private:
  std::shared_ptr<IAMCredentialsStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // IAMCredentialsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_credentials_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_CREDENTIALS_V1_INTERNAL_IAM_CREDENTIALS_LOGGING_DECORATOR_H
