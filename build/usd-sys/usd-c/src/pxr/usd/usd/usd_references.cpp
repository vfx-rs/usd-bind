#include "pxr/usd/usd/usd_references_private.h"

#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_reference_private.h"
#include "pxr/usd/usd/usd_common_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdReferences_AddReference(
    pxr_UsdReferences_t * this_
    , _Bool * return_
    , std_string_t const * identifier
    , pxr_SdfPath_t const * primPath
    , pxr_SdfLayerOffset_t const * layerOffset
    , pxr_UsdListPosition position)
{
    try {
        *(return_) = (to_cpp(this_)) -> AddReference(to_cpp_ref(identifier), to_cpp_ref(primPath), to_cpp_ref(layerOffset), pxr_UsdListPosition_to_cpp_ref(&(position)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdReferences_RemoveReference(
    pxr_UsdReferences_t * this_
    , _Bool * return_
    , pxr_SdfReference_t const * ref)
{
    try {
        *(return_) = (to_cpp(this_)) -> RemoveReference(to_cpp_ref(ref));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdReferences_ClearReferences(
    pxr_UsdReferences_t * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearReferences();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdReferences_copy(
    pxr_UsdReferences_t * * this_
    , pxr_UsdReferences_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::UsdReferences(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

