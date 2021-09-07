#include "pxr/base/tf/c-token_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_sizeof()
{
        return sizeof(pxrInternal_v0_20__pxrReserved__::TfToken);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_alignof()
{
        return alignof(pxrInternal_v0_20__pxrReserved__::TfToken);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_ctor(
    pxr_TfToken_t * this_)
{
        new (this_) pxrInternal_v0_20__pxrReserved__::TfToken();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_copy(
    pxr_TfToken_t * this_
    , pxr_TfToken_t const * rhs)
{
        new (this_) pxrInternal_v0_20__pxrReserved__::TfToken(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_dtor(
    pxr_TfToken_t * this_)
{
    try {
        (to_cpp(this_)) -> pxrInternal_v0_20__pxrReserved__::TfToken::~TfToken();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_from_string(
    pxr_TfToken_t * this_
    , std_string_t const * s)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::TfToken(to_cpp_ref(s));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_string(
    pxr_TfToken_t * this_
    , std_string_t const * s
    , pxr_TfToken__ImmortalTag _param1)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::TfToken(to_cpp_ref(s), pxr_TfToken__ImmortalTag_to_cpp_ref(&(_param1)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_from_char_ptr(
    pxr_TfToken_t * this_
    , char const * s)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::TfToken(s);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_char_ptr(
    pxr_TfToken_t * this_
    , char const * s
    , pxr_TfToken__ImmortalTag _param1)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::TfToken(s, pxr_TfToken__ImmortalTag_to_cpp_ref(&(_param1)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_Find(
    pxr_TfToken_t * return_
    , std_string_t const * s)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::TfToken::Find(to_cpp_ref(s)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_Hash(
    pxr_TfToken_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Hash();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_size(
    pxr_TfToken_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_GetText(
    pxr_TfToken_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetText();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_data(
    pxr_TfToken_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_GetString(
    pxr_TfToken_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_Swap(
    pxr_TfToken_t * this_
    , pxr_TfToken_t * other)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken__eq(
    pxr_TfToken_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * o)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(o));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_eq_c_str(
    pxr_TfToken_t const * this_
    , _Bool * return_
    , char const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(rhs);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_IsEmpty(
    pxr_TfToken_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_IsImmortal(
    pxr_TfToken_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsImmortal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

