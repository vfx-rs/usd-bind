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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__eq(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__ne(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator>(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator>=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__eq_1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__ne_1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__2(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__3(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator>(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_2(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_3(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator>=(to_cpp_ref(rhs));
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operatorbool(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator bool();
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operatorconststd____cxx11__basic_string_char_&(
    pxr_ArResolvedPath_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator const std::__cxx11::basic_string<char> &());
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

