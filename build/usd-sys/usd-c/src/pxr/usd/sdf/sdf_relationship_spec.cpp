#include "pxr/usd/sdf/sdf_relationship_spec_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDormant();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> PermissionToEdit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetMetaDataDisplayGroup(to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

