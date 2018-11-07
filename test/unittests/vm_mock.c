/* EVMC: Ethereum Client-VM Connector API.
 * Copyright 2018 Pawel Bylica.
 * Licensed under the MIT License. See the LICENSE file.
 */

#include <evmc/evmc.h>
#include <evmc/utils.h>

EVMC_EXPORT void* evmc_create_aaa()
{
    return (void*)0xaaa;
}

EVMC_EXPORT void* evmc_create_eee_bbb()
{
    return (void*)0xeeebbb;
}

EVMC_EXPORT void* evmc_create_failure()
{
    return NULL;
}

EVMC_EXPORT struct evmc_instance* evmc_create_abi42()
{
    static struct evmc_instance instance = {
        .abi_version = 42,
    };
    return &instance;
}
