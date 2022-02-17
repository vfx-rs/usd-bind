#include "pxr/usd/sdf/sdf_layer_offset_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_sizeof()
{
        return sizeof(pxrInternal_v0_21__pxrReserved__::SdfLayerOffset);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_alignof()
{
        return alignof(pxrInternal_v0_21__pxrReserved__::SdfLayerOffset);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor(
    pxr_SdfLayerOffset_t * this_
    , double offset
    , double scale)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::SdfLayerOffset(offset, scale);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_copy(
    pxr_SdfLayerOffset_t * this_
    , pxr_SdfLayerOffset_t const * rhs)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::SdfLayerOffset(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

