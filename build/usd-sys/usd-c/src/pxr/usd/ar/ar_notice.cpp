#include "pxr/usd/ar/ar_notice_private.h"

#include "pxr/usd/ar/ar_resolver_context_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_dtor(
    pxr_ArNotice_ResolverNotice_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_ctor(
    pxr_ArNotice_ResolverChanged_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_dtor(
    pxr_ArNotice_ResolverChanged_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_AffectsContext(
    pxr_ArNotice_ResolverChanged_t const * this_
    , _Bool * return_
    , pxr_ArResolverContext_t const * ctx)
{
    try {
        *(return_) = (to_cpp(this_)) -> AffectsContext(to_cpp_ref(ctx));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

