#include "pxr/usd/ar/ar_timestamp_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor(
    pxr_ArTimestamp_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArTimestamp());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor_1(
    pxr_ArTimestamp_t * * this_
    , double time)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArTimestamp(time));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_IsValid(
    pxr_ArTimestamp_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsValid();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_GetTime(
    pxr_ArTimestamp_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetTime();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

