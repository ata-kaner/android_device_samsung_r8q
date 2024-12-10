/*
 * Copyright (C) 2021-2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t r8qxx_info = {
    .device = "r8q",
    .model = "SM-G780G",
    .build_fingerprint = "samsung/r8qxx/r8q:11/RP1A.200720.012/G780GXXSDEXJ3:user/release-keys",
    .build_desc = "r8qxx-user 13 TP1A.220624.014 G780GXXSDEXJ3 release-keys"
};

static const variant_info_t r8qxxx_info = {
    .device = "r8q",
    .model = "SM-G781B",
    .build_fingerprint = "samsung/r8qxxx/r8q:11/RP1A.200720.012/G781BXXSEHXJ4:user/release-keys",
    .build_desc = "r8qxxx-user 13 TP1A.220624.014 G781BXXSEHXJ4 release-keys"
};

static const variant_info_t r8qksx_info = {
    .device = "r8q",
    .model = "SM-G781N",
    .build_fingerprint = "samsung/r8qksx/r8q:11/RP1A.200720.012/G781NKSS9GXJ1:user/release-keys",
    .build_desc = "r8qksx-user 13 TP1A.220624.014 G781NKSS9GXJ1 release-keys"
};

static const variant_info_t r8qzcx_info = {
    .device = "r8q",
    .model = "SM-G7810",
    .build_fingerprint = "samsung/r8qzcx/r8q:11/RP1A.200720.012/ G7810ZHSDHXJ3:user/release-keys",
    .build_desc = "r8qzcx-user 13 TP1A.220624.014  G7810ZHSDHXJ3 release-keys"
};

static const std::vector<variant_info_t> variants = {
    r8qxx_info,
    r8qxxx_info,
    r8qksx_info,
    r8qzcx_info,
};

void vendor_load_properties() {
    search_variant(variants);
}