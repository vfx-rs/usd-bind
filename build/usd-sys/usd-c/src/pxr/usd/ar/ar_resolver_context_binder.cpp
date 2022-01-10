#include "pxr/usd/ar/ar_resolver_context_binder_private.h"

#include "pxr/usd/ar/ar_resolver_context_private.h"
#include "pxr/usd/ar/ar_resolver_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor(
    pxr_ArResolverContextBinder_t * * this_
    , pxr_ArResolverContext_t const * context)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder(to_cpp_ref(context)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor_1(
    pxr_ArResolverContextBinder_t * * this_
    , pxr_ArResolver_t * assetResolver
    , pxr_ArResolverContext_t const * context)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder(to_cpp(assetResolver), to_cpp_ref(context)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_dtor(
    pxr_ArResolverContextBinder_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

