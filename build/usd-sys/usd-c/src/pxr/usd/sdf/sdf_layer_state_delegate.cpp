#include "pxr/usd/sdf/sdf_layer_state_delegate_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetCurrentCount(
    pxr_SdfLayerStateDelegateBase_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetCurrentCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsUnique(
    pxr_SdfLayerStateDelegateBase_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsUnique();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetShouldInvokeUniqueChangedListener(
    pxr_SdfLayerStateDelegateBase_t * this_
    , _Bool shouldCall)
{
    try {
        (to_cpp(this_)) -> SetShouldInvokeUniqueChangedListener(shouldCall);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_EnableNotification2(
    pxr_SdfLayerStateDelegateBase_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetUniqueIdentifier(
    pxr_SdfLayerStateDelegateBase_t const * this_
    , void const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_dtor(
    pxr_SdfLayerStateDelegateBase_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsDirty(
    pxr_SdfLayerStateDelegateBase_t * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDirty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetField(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> SetField(to_cpp_ref(path), to_cpp_ref(field), to_cpp_ref(value), to_cpp(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetFieldDictValueByKey(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> SetFieldDictValueByKey(to_cpp_ref(path), to_cpp_ref(field), to_cpp_ref(keyPath), to_cpp_ref(value), to_cpp(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetTimeSample(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetTimeSample(to_cpp_ref(path), time, to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_DeleteSpec(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , _Bool inert)
{
    try {
        (to_cpp(this_)) -> DeleteSpec(to_cpp_ref(path), inert);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_MoveSpec(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> MoveSpec(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * value)
{
    try {
        (to_cpp(this_)) -> PushChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild_1(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * value)
{
    try {
        (to_cpp(this_)) -> PushChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> PopChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild_1(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> PopChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase__assign(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfLayerStateDelegateBase_t * * return_
    , pxr_SdfLayerStateDelegateBase_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetCurrentCount(
    pxr_SdfSimpleLayerStateDelegate_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetCurrentCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsUnique(
    pxr_SdfSimpleLayerStateDelegate_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsUnique();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetShouldInvokeUniqueChangedListener(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , _Bool shouldCall)
{
    try {
        (to_cpp(this_)) -> SetShouldInvokeUniqueChangedListener(shouldCall);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_EnableNotification2(
    pxr_SdfSimpleLayerStateDelegate_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetUniqueIdentifier(
    pxr_SdfSimpleLayerStateDelegate_t const * this_
    , void const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsDirty(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDirty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetField(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> SetField(to_cpp_ref(path), to_cpp_ref(field), to_cpp_ref(value), to_cpp(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetFieldDictValueByKey(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> SetFieldDictValueByKey(to_cpp_ref(path), to_cpp_ref(field), to_cpp_ref(keyPath), to_cpp_ref(value), to_cpp(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetTimeSample(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetTimeSample(to_cpp_ref(path), time, to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_DeleteSpec(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , _Bool inert)
{
    try {
        (to_cpp(this_)) -> DeleteSpec(to_cpp_ref(path), inert);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_MoveSpec(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> MoveSpec(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * value)
{
    try {
        (to_cpp(this_)) -> PushChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild_1(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * value)
{
    try {
        (to_cpp(this_)) -> PushChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> PopChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild_1(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * oldValue)
{
    try {
        (to_cpp(this_)) -> PopChild(to_cpp_ref(parentPath), to_cpp_ref(field), to_cpp_ref(oldValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_copy(
    pxr_SdfSimpleLayerStateDelegate_t * * this_
    , pxr_SdfSimpleLayerStateDelegate_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate__assign(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfSimpleLayerStateDelegate_t * * return_
    , pxr_SdfSimpleLayerStateDelegate_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_dtor(
    pxr_SdfSimpleLayerStateDelegate_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

