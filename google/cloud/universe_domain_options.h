// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_UNIVERSE_DOMAIN_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_UNIVERSE_DOMAIN_OPTIONS_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/retry_policy.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
// TODO(#13115): Remove internal namespace.
namespace internal {

/**
 * Use with `google::cloud::Options` to configure the universe domain used in
 * determining service endpoints.
 */
struct UniverseDomainOption {
  using Type = std::string;
};

/**
 * The retry policy used in querying the universe domain from some credentials.
 */
class UniverseDomainRetryPolicy : public RetryPolicy {
 public:
  virtual std::unique_ptr<UniverseDomainRetryPolicy> clone() const = 0;
};

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 */
struct UniverseDomainRetryPolicyOption {
  using Type = std::shared_ptr<UniverseDomainRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 */
struct UniverseDomainBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_UNIVERSE_DOMAIN_OPTIONS_H
