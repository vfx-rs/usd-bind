#pragma once
#include <pxr/usd/ndr/ndr_discovery_plugin.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ndr/discoveryPlugin.h>

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext const & to_cpp_ref(
    pxr_NdrDiscoveryPluginContext_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext & to_cpp_ref(
    pxr_NdrDiscoveryPluginContext_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext const * to_cpp(
    pxr_NdrDiscoveryPluginContext_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext * to_cpp(
    pxr_NdrDiscoveryPluginContext_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext * >(rhs);
}

inline void to_c(
    pxr_NdrDiscoveryPluginContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPluginContext_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrDiscoveryPluginContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPluginContext_t const * >(rhs);
}

inline void to_c(
    pxr_NdrDiscoveryPluginContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPluginContext_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrDiscoveryPluginContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPluginContext * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPluginContext_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin const & to_cpp_ref(
    pxr_NdrDiscoveryPlugin_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin & to_cpp_ref(
    pxr_NdrDiscoveryPlugin_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin const * to_cpp(
    pxr_NdrDiscoveryPlugin_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin * to_cpp(
    pxr_NdrDiscoveryPlugin_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin * >(rhs);
}

inline void to_c(
    pxr_NdrDiscoveryPlugin_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPlugin_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrDiscoveryPlugin_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPlugin_t const * >(rhs);
}

inline void to_c(
    pxr_NdrDiscoveryPlugin_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPlugin_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrDiscoveryPlugin_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrDiscoveryPlugin * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrDiscoveryPlugin_t * >(rhs);
}

