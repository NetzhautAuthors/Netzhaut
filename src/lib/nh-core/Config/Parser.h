#ifndef NH_CORE_CONFIG_PARSER_H
#define NH_CORE_CONFIG_PARSER_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * Netzhaut - Web Browser Engine
 * Copyright (C) 2022  Dajo Frey
 * Published under GNU LGPL. See Netzhaut/LICENSE.LGPL file.
 */

#include "Config.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/** @addtogroup lib_nh-core_functions
 *  @{
 */

    NH_API_RESULT nh_core_parseRawConfig(
        nh_core_RawConfig *Config_p, char *data_p, int length, nh_core_RawConfig *GlobalConfig_p
    );

    NH_API_RESULT nh_core_freeRawConfig(
        nh_core_RawConfig *Config_p
    );

/** @} */

#endif // NH_DOCS_CORE_CONFIG_PARSER_H
