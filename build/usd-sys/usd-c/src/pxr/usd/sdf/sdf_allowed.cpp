#include "pxr/usd/sdf/sdf_allowed_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor(
    pxr_SdfAllowed_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_1(
    pxr_SdfAllowed_t * * this_
    , _Bool x)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_2(
    pxr_SdfAllowed_t * * this_
    , char const * whyNot)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed(whyNot));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_3(
    pxr_SdfAllowed_t * * this_
    , std_string_t const * whyNot)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed(to_cpp_ref(whyNot)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_4(
    pxr_SdfAllowed_t * * this_
    , _Bool condition
    , char const * whyNot)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed(condition, whyNot));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_5(
    pxr_SdfAllowed_t * * this_
    , _Bool condition
    , std_string_t const * whyNot)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed(condition, to_cpp_ref(whyNot)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_dtor(
    pxr_SdfAllowed_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed__neg(
    pxr_SdfAllowed_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_GetWhyNot(
    pxr_SdfAllowed_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetWhyNot());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_IsAllowed(
    pxr_SdfAllowed_t const * this_
    , _Bool * return_
    , std_string_t * whyNot)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAllowed(to_cpp(whyNot));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed__eq(
    pxr_SdfAllowed_t const * this_
    , _Bool * return_
    , pxr_SdfAllowed_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_copy(
    pxr_SdfAllowed_t * * this_
    , pxr_SdfAllowed_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAllowed(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed__assign(
    pxr_SdfAllowed_t * this_
    , pxr_SdfAllowed_t * * return_
    , pxr_SdfAllowed_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

