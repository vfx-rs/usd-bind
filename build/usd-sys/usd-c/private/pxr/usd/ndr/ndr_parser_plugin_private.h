#pragma once
#include <pxr/usd/ndr/ndr_parser_plugin.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ndr/parserPlugin.h>

inline pxrInternal_v0_21__pxrReserved__::NdrParserPlugin const & to_cpp_ref(
    pxr_NdrParserPlugin_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrParserPlugin const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrParserPlugin & to_cpp_ref(
    pxr_NdrParserPlugin_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrParserPlugin * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrParserPlugin const * to_cpp(
    pxr_NdrParserPlugin_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrParserPlugin const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrParserPlugin * to_cpp(
    pxr_NdrParserPlugin_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrParserPlugin * >(rhs);
}

inline void to_c(
    pxr_NdrParserPlugin_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrParserPlugin const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrParserPlugin_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrParserPlugin_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrParserPlugin const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrParserPlugin_t const * >(rhs);
}

inline void to_c(
    pxr_NdrParserPlugin_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrParserPlugin & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrParserPlugin_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrParserPlugin_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrParserPlugin * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrParserPlugin_t * >(rhs);
}

