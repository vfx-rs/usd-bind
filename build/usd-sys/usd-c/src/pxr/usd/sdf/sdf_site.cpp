#include "pxr/usd/sdf/sdf_site_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_ctor(
    pxr_SdfSite_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSite());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_ctor_1(
    pxr_SdfSite_t * * this_
    , pxr_SdfLayerHandle_t const * layer_
    , pxr_SdfPath_t const * path_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSite(to_cpp_ref(layer_), to_cpp_ref(path_)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite__eq(
    pxr_SdfSite_t const * this_
    , _Bool * return_
    , pxr_SdfSite_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_operator_(
    pxr_SdfSite_t const * this_
    , _Bool * return_
    , pxr_SdfSite_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_operatorbool(
    pxr_SdfSite_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator bool();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_copy(
    pxr_SdfSite_t * * this_
    , pxr_SdfSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSite(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite__assign(
    pxr_SdfSite_t * this_
    , pxr_SdfSite_t * * return_
    , pxr_SdfSite_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

