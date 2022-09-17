/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_NEW_TAB_PAGE_AD_CATALOG_CREATIVE_NEW_TAB_PAGE_AD_INFO_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_NEW_TAB_PAGE_AD_CATALOG_CREATIVE_NEW_TAB_PAGE_AD_INFO_H_

#include <vector>

#include "bat/ads/internal/catalog/campaign/creative_set/creative/catalog_creative_info.h"
#include "bat/ads/internal/catalog/campaign/creative_set/creative/new_tab_page_ad/catalog_new_tab_page_ad_payload_info.h"

namespace ads {

struct CatalogCreativeNewTabPageAdInfo final : CatalogCreativeInfo {
  CatalogCreativeNewTabPageAdInfo();

  CatalogCreativeNewTabPageAdInfo(const CatalogCreativeNewTabPageAdInfo& other);
  CatalogCreativeNewTabPageAdInfo& operator=(
      const CatalogCreativeNewTabPageAdInfo& other);

  CatalogCreativeNewTabPageAdInfo(
      CatalogCreativeNewTabPageAdInfo&& other) noexcept;
  CatalogCreativeNewTabPageAdInfo& operator=(
      CatalogCreativeNewTabPageAdInfo&& other) noexcept;

  ~CatalogCreativeNewTabPageAdInfo();

  bool operator==(const CatalogCreativeNewTabPageAdInfo& other) const;
  bool operator!=(const CatalogCreativeNewTabPageAdInfo& other) const;

  CatalogNewTabPageAdPayloadInfo payload;
};

using CatalogCreativeNewTabPageAdList =
    std::vector<CatalogCreativeNewTabPageAdInfo>;

}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_NEW_TAB_PAGE_AD_CATALOG_CREATIVE_NEW_TAB_PAGE_AD_INFO_H_
