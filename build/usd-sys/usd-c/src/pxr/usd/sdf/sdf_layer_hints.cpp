#include "pxr/usd/sdf/sdf_layer_hints_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerHints_ctor(
    pxr_SdfLayerHints_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfLayerHints());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerHints_ctor_1(
    pxr_SdfLayerHints_t * * this_
    , _Bool mightHaveRelocates)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfLayerHints(mightHaveRelocates));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

