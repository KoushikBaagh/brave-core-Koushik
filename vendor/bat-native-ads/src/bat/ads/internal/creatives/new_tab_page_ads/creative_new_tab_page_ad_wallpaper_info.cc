/* Copyright (c) 2021 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "bat/ads/internal/creatives/new_tab_page_ads/creative_new_tab_page_ad_wallpaper_info.h"

namespace ads {

CreativeNewTabPageAdWallpaperInfo::CreativeNewTabPageAdWallpaperInfo() =
    default;

CreativeNewTabPageAdWallpaperInfo::CreativeNewTabPageAdWallpaperInfo(
    const CreativeNewTabPageAdWallpaperInfo& info) = default;

CreativeNewTabPageAdWallpaperInfo& CreativeNewTabPageAdWallpaperInfo::operator=(
    const CreativeNewTabPageAdWallpaperInfo& info) = default;

CreativeNewTabPageAdWallpaperInfo::CreativeNewTabPageAdWallpaperInfo(
    CreativeNewTabPageAdWallpaperInfo&& other) noexcept = default;

CreativeNewTabPageAdWallpaperInfo& CreativeNewTabPageAdWallpaperInfo::operator=(
    CreativeNewTabPageAdWallpaperInfo&& other) noexcept = default;

CreativeNewTabPageAdWallpaperInfo::~CreativeNewTabPageAdWallpaperInfo() =
    default;

bool CreativeNewTabPageAdWallpaperInfo::operator==(
    const CreativeNewTabPageAdWallpaperInfo& other) const {
  return image_url == other.image_url && focal_point == other.focal_point;
}

bool CreativeNewTabPageAdWallpaperInfo::operator!=(
    const CreativeNewTabPageAdWallpaperInfo& other) const {
  return !(*this == other);
}

}  // namespace ads
