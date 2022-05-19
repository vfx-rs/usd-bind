#include "pxr/usd/ar/ar_asset_info_private.h"

#include "std_string_private.h"

#include <stdexcept>

inline std::string &ArAssetInfo_get_version_impl(::pxrInternal_v0_21__pxrReserved__::ArAssetInfo &self)  {
    return self.version;
}


USD_CPPMM_API unsigned int ArAssetInfo_get_version(
    std_string_t * * return_
    , pxr_ArAssetInfo_t * self)
{
    try {
        to_c(return_, ArAssetInfo_get_version_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline std::string &ArAssetInfo_get_assetName_impl(::pxrInternal_v0_21__pxrReserved__::ArAssetInfo &self)  {
    return self.assetName;
}


USD_CPPMM_API unsigned int ArAssetInfo_get_assetName(
    std_string_t * * return_
    , pxr_ArAssetInfo_t * self)
{
    try {
        to_c(return_, ArAssetInfo_get_assetName_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline std::string &ArAssetInfo_get_repoPath_impl(::pxrInternal_v0_21__pxrReserved__::ArAssetInfo &self)  {
    return self.repoPath;
}


USD_CPPMM_API unsigned int ArAssetInfo_get_repoPath(
    std_string_t * * return_
    , pxr_ArAssetInfo_t * self)
{
    try {
        to_c(return_, ArAssetInfo_get_repoPath_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

