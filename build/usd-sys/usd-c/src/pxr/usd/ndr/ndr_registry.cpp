#include "pxr/usd/ndr/ndr_registry_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/ndr/ndr_node_private.h"
#include "pxr/usd/sdf/sdf_asset_path_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrRegistry_GetSearchURIs(
    pxr_NdrRegistry_t const * this_
    , std_vector_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSearchURIs());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeNames(
    pxr_NdrRegistry_t const * this_
    , std_vector_string_t * * return_
    , pxr_TfToken_t const * family)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetNodeNames(to_cpp_ref(family)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeByIdentifierAndType(
    pxr_NdrRegistry_t * this_
    , pxr_NdrNode_t const * * return_
    , pxr_TfToken_t const * identifier
    , pxr_TfToken_t const * sourceType)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetNodeByIdentifierAndType(to_cpp_ref(identifier), to_cpp_ref(sourceType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

