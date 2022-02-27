#include "pxr/usd/sdf/sdf_identity_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetLayer(
    pxr_Sdf_Identity_t const * this_
    , pxr_SdfLayerHandle_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetPath(
    pxr_Sdf_Identity_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_ctor(
    pxr_Sdf_IdentityRegistry_t * * this_
    , pxr_SdfLayerHandle_t const * layer)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry(to_cpp_ref(layer)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_dtor(
    pxr_Sdf_IdentityRegistry_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_GetLayer(
    pxr_Sdf_IdentityRegistry_t const * this_
    , pxr_SdfLayerHandle_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_MoveIdentity(
    pxr_Sdf_IdentityRegistry_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> MoveIdentity(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___intrusive_ptr_add_ref(
    pxr_Sdf_Identity_t * rhs)
{
    try {
        pxrInternal_v0_21__pxrReserved__::intrusive_ptr_add_ref(to_cpp(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___intrusive_ptr_release(
    pxr_Sdf_Identity_t * rhs)
{
    try {
        pxrInternal_v0_21__pxrReserved__::intrusive_ptr_release(to_cpp(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

