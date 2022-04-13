#include "pxr/usd/sdf/sdf_notice_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_Send(
    pxr_SdfNotice_Base_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Send();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_dtor(
    pxr_SdfNotice_Base_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(
    pxr_SdfNotice_Base_t * * this_
    , pxr_SdfNotice_Base_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::Base(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base__assign(
    pxr_SdfNotice_Base_t * this_
    , pxr_SdfNotice_Base_t * * return_
    , pxr_SdfNotice_Base_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_ctor(
    pxr_SdfNotice_Base_t * * this_)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::Base());
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_count(
    pxr_SdfNotice_BaseLayersDidChange_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer)
{
    try {
        *(return_) = (to_cpp(this_)) -> count(to_cpp_ref(layer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_GetSerialNumber(
    pxr_SdfNotice_BaseLayersDidChange_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetSerialNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_copy(
    pxr_SdfNotice_BaseLayersDidChange_t * * this_
    , pxr_SdfNotice_BaseLayersDidChange_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_dtor(
    pxr_SdfNotice_BaseLayersDidChange_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_Send(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Send();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_count(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer)
{
    try {
        *(return_) = (to_cpp(this_)) -> count(to_cpp_ref(layer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_GetSerialNumber(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetSerialNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_dtor(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_copy(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * this_
    , pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_Send(
    pxr_SdfNotice_LayersDidChange_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Send();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_count(
    pxr_SdfNotice_LayersDidChange_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer)
{
    try {
        *(return_) = (to_cpp(this_)) -> count(to_cpp_ref(layer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_GetSerialNumber(
    pxr_SdfNotice_LayersDidChange_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetSerialNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_dtor(
    pxr_SdfNotice_LayersDidChange_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_copy(
    pxr_SdfNotice_LayersDidChange_t * * this_
    , pxr_SdfNotice_LayersDidChange_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_Send(
    pxr_SdfNotice_LayerInfoDidChange_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Send();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_ctor(
    pxr_SdfNotice_LayerInfoDidChange_t * * this_
    , pxr_TfToken_t const * key)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange(to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_dtor(
    pxr_SdfNotice_LayerInfoDidChange_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_key(
    pxr_SdfNotice_LayerInfoDidChange_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> key());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_copy(
    pxr_SdfNotice_LayerInfoDidChange_t * * this_
    , pxr_SdfNotice_LayerInfoDidChange_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange__assign(
    pxr_SdfNotice_LayerInfoDidChange_t * this_
    , pxr_SdfNotice_LayerInfoDidChange_t * * return_
    , pxr_SdfNotice_LayerInfoDidChange_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

