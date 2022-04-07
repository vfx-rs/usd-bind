#include "pxr/usd/sdf/sdf_layer_utils_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfComputeAssetPathRelativeToLayer(
    std_string_t * * return_
    , pxr_SdfLayerHandle_t const * anchor
    , std_string_t const * assetPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfComputeAssetPathRelativeToLayer(to_cpp_ref(anchor), to_cpp_ref(assetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

