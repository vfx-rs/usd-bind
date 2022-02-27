#include "pxr/usd/sdf/sdf_declare_handles_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_layer_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfCreateHandle(
    pxr_SdfLayerHandle_t * * return_
    , pxr_SdfLayer_t * p)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfCreateHandle(to_cpp(p)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

