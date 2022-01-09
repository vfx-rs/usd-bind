#include "pxr/usd/ar/ar_filesystem_writable_asset_private.h"


#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_Close(
    pxr_ArFilesystemWritableAsset_t * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Close();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_Write(
    pxr_ArFilesystemWritableAsset_t * this_
    , size_t * return_
    , void const * buffer
    , size_t count
    , size_t offset)
{
    try {
        *(return_) = (to_cpp(this_)) -> Write(buffer, count, offset);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_dtor(
    pxr_ArFilesystemWritableAsset_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

