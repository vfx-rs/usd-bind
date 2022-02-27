#include "pxr/usd/sdf/sdf_copy_utils_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__eq(
    pxr_SdfCopySpecsValueEdit_t const * this_
    , _Bool * return_
    , pxr_SdfCopySpecsValueEdit_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__ne(
    pxr_SdfCopySpecsValueEdit_t const * this_
    , _Bool * return_
    , pxr_SdfCopySpecsValueEdit_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_copy(
    pxr_SdfCopySpecsValueEdit_t * * this_
    , pxr_SdfCopySpecsValueEdit_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__assign(
    pxr_SdfCopySpecsValueEdit_t * this_
    , pxr_SdfCopySpecsValueEdit_t * * return_
    , pxr_SdfCopySpecsValueEdit_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfCopySpec(
    _Bool * return_
    , pxr_SdfLayerHandle_t const * srcLayer
    , pxr_SdfPath_t const * srcPath
    , pxr_SdfLayerHandle_t const * dstLayer
    , pxr_SdfPath_t const * dstPath)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfCopySpec(to_cpp_ref(srcLayer), to_cpp_ref(srcPath), to_cpp_ref(dstLayer), to_cpp_ref(dstPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

