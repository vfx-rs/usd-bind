#include "pxr/usd/ar/ar_resolved_path_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor(
    pxr_ArResolvedPath_t * * this_
    , std_string_t const * resolvedPath)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolvedPath(to_cpp_ref(resolvedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_1(
    pxr_ArResolvedPath_t * * this_
    , std_string_t * resolvedPath)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolvedPath(to_cpp_ref(resolvedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_2(
    pxr_ArResolvedPath_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolvedPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_copy(
    pxr_ArResolvedPath_t * * this_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolvedPath(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_move(
    pxr_ArResolvedPath_t * * this_
    , pxr_ArResolvedPath_t * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArResolvedPath(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetHash(
    pxr_ArResolvedPath_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetHash();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_IsEmpty(
    pxr_ArResolvedPath_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_empty(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> empty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetPathString(
    pxr_ArResolvedPath_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPathString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

