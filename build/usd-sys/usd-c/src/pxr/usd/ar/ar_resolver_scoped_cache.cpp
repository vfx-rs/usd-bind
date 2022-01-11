#include "pxr/usd/ar/ar_resolver_scoped_cache_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_ctor(
    pxr_ArResolverScopedCache_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_ctor_1(
    pxr_ArResolverScopedCache_t * * this_
    , pxr_ArResolverScopedCache_t const * parent)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache(to_cpp(parent)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_dtor(
    pxr_ArResolverScopedCache_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

