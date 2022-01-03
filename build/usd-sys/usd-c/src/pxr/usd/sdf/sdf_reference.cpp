#include "pxr/usd/sdf/sdf_reference_private.h"

#include "pxr/base/vt/vt_dictionary_private.h"
#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_ctor(
    pxr_SdfReference_t * * this_
    , std_string_t const * assetPath
    , pxr_SdfPath_t const * primPath
    , pxr_SdfLayerOffset_t const * layerOffset
    , pxr_VtDictionary_t const * customData)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfReference(to_cpp_ref(assetPath), to_cpp_ref(primPath), to_cpp_ref(layerOffset), to_cpp_ref(customData)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_dtor(
    pxr_SdfReference_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

