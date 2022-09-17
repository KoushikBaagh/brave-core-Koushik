/* Copyright (c) 2021 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_NEW_TAB_PAGE_AD_CATALOG_NEW_TAB_PAGE_AD_WALLPAPER_INFO_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_NEW_TAB_PAGE_AD_CATALOG_NEW_TAB_PAGE_AD_WALLPAPER_INFO_H_

#include <vector>

#include "bat/ads/internal/catalog/campaign/creative_set/creative/new_tab_page_ad/catalog_new_tab_page_ad_wallpaper_focal_point_info.h"
#include "url/gurl.h"

namespace ads {

struct CatalogNewTabPageAdWallpaperInfo final {
  CatalogNewTabPageAdWallpaperInfo();

  CatalogNewTabPageAdWallpaperInfo(
      const CatalogNewTabPageAdWallpaperInfo& other);
  CatalogNewTabPageAdWallpaperInfo& operator=(
      const CatalogNewTabPageAdWallpaperInfo& other);

  CatalogNewTabPageAdWallpaperInfo(
      CatalogNewTabPageAdWallpaperInfo&& other) noexcept;
  CatalogNewTabPageAdWallpaperInfo& operator=(
      CatalogNewTabPageAdWallpaperInfo&& other) noexcept;

  ~CatalogNewTabPageAdWallpaperInfo();

  bool operator==(const CatalogNewTabPageAdWallpaperInfo& other) const;
  bool operator!=(const CatalogNewTabPageAdWallpaperInfo& other) const;

  GURL image_url;
  CatalogNewTabPageAdWallpaperFocalPointInfo focal_point;
};

using CatalogNewTabPageAdWallpaperList =
    std::vector<CatalogNewTabPageAdWallpaperInfo>;

}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_NEW_TAB_PAGE_AD_CATALOG_NEW_TAB_PAGE_AD_WALLPAPER_INFO_H_
