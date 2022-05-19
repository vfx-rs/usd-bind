#include "pxr/usd/ar/ar_asset_private.h"


#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArAsset_dtor(
    pxr_ArAsset_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArAsset_GetSize(
    pxr_ArAsset_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArAsset_Read(
    pxr_ArAsset_t const * this_
    , size_t * return_
    , void * buffer
    , size_t count
    , size_t offset)
{
    try {
        *(return_) = (to_cpp(this_)) -> Read(buffer, count, offset);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

