#include "pxr/usd/ar/ar_default_resolver_context_private.h"

#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor(
    pxr_ArDefaultResolverContext_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor_1(
    pxr_ArDefaultResolverContext_t * * this_
    , std_vector_string_t const * searchPath)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext(to_cpp_ref(searchPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_operator_(
    pxr_ArDefaultResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArDefaultResolverContext_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__eq(
    pxr_ArDefaultResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArDefaultResolverContext_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__ne(
    pxr_ArDefaultResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArDefaultResolverContext_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetSearchPath(
    pxr_ArDefaultResolverContext_t const * this_
    , std_vector_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetSearchPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetAsString(
    pxr_ArDefaultResolverContext_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAsString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

