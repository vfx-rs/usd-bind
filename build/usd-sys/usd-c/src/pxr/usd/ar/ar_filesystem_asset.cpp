#include "pxr/usd/ar/ar_filesystem_asset_private.h"

#include "pxr/usd/ar/ar_resolved_path_private.h"
#include "pxr/usd/ar/ar_timestamp_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetSize(
    pxr_ArFilesystemAsset_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_Read(
    pxr_ArFilesystemAsset_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetModificationTimestamp(
    pxr_ArTimestamp_t * * return_
    , pxr_ArResolvedPath_t const * resolvedPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset::GetModificationTimestamp(to_cpp_ref(resolvedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_dtor(
    pxr_ArFilesystemAsset_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

