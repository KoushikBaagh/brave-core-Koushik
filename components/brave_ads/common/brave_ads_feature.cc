/* Copyright (c) 2023 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_ads/common/brave_ads_feature.h"

namespace brave_ads {

BASE_FEATURE(kShouldLaunchBraveAdsAsInProcessServiceFeature,
             "ShouldLaunchBraveAdsAsInProcessService",
             base::FEATURE_DISABLED_BY_DEFAULT);

bool ShouldLaunchAsInProcessService() {
  return base::FeatureList::IsEnabled(
      kShouldLaunchBraveAdsAsInProcessServiceFeature);
}

BASE_FEATURE(kShouldAlwaysRunBraveAdsServiceFeature,
             "ShouldAlwaysRunBraveAdsService",
             base::FEATURE_DISABLED_BY_DEFAULT);

bool ShouldAlwaysRunService() {
  return base::FeatureList::IsEnabled(kShouldAlwaysRunBraveAdsServiceFeature);
}

BASE_FEATURE(kShouldAlwaysTriggerBraveNewTabPageAdEventsFeature,
             "ShouldAlwaysTriggerBraveNewTabPageAdEvents",
             base::FEATURE_DISABLED_BY_DEFAULT);

bool ShouldAlwaysTriggerNewTabPageAdEvents() {
  return base::FeatureList::IsEnabled(
      kShouldAlwaysTriggerBraveNewTabPageAdEventsFeature);
}

BASE_FEATURE(kShouldAlwaysTriggerBraveSearchResultAdEventsFeature,
             "ShouldAlwaysTriggerBraveSearchResultAdEvents",
             base::FEATURE_DISABLED_BY_DEFAULT);

bool ShouldAlwaysTriggerSearchResultAdEvents() {
  return base::FeatureList::IsEnabled(
      kShouldAlwaysTriggerBraveSearchResultAdEventsFeature);
}

}  // namespace brave_ads
