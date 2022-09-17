/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "bat/ads/internal/catalog/campaign/creative_set/creative/promoted_content_ad/catalog_creative_promoted_content_ad_info.h"

namespace ads {

CatalogCreativePromotedContentAdInfo::CatalogCreativePromotedContentAdInfo() =
    default;

CatalogCreativePromotedContentAdInfo::CatalogCreativePromotedContentAdInfo(
    const CatalogCreativePromotedContentAdInfo& info) = default;

CatalogCreativePromotedContentAdInfo&
CatalogCreativePromotedContentAdInfo::operator=(
    const CatalogCreativePromotedContentAdInfo& info) = default;

CatalogCreativePromotedContentAdInfo::CatalogCreativePromotedContentAdInfo(
    CatalogCreativePromotedContentAdInfo&& other) noexcept = default;

CatalogCreativePromotedContentAdInfo&
CatalogCreativePromotedContentAdInfo::operator=(
    CatalogCreativePromotedContentAdInfo&& other) noexcept = default;

CatalogCreativePromotedContentAdInfo::~CatalogCreativePromotedContentAdInfo() =
    default;

bool CatalogCreativePromotedContentAdInfo::operator==(
    const CatalogCreativePromotedContentAdInfo& other) const {
  return CatalogCreativeInfo::operator==(other) && payload == other.payload;
}

bool CatalogCreativePromotedContentAdInfo::operator!=(
    const CatalogCreativePromotedContentAdInfo& other) const {
  return !(*this == other);
}

}  // namespace ads
