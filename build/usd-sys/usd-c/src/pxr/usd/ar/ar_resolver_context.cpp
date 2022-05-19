#include "pxr/usd/ar/ar_resolver_context_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext_ctor(
    pxr_ArResolverContext_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolverContext());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext_IsEmpty(
    pxr_ArResolverContext_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEmpty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext_GetDebugString(
    pxr_ArResolverContext_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDebugString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext__eq(
    pxr_ArResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArResolverContext_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext__ne(
    pxr_ArResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArResolverContext_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext_lt(
    pxr_ArResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArResolverContext_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContext_copy(
    pxr_ArResolverContext_t * * this_
    , pxr_ArResolverContext_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolverContext(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

