#pragma once
#include <pxr/usd/sdf/sdf_notice.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/notice.h>

inline pxrInternal_v0_21__pxrReserved__::SdfNotice const & to_cpp_ref(
    pxr_SdfNotice_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice & to_cpp_ref(
    pxr_SdfNotice_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice const * to_cpp(
    pxr_SdfNotice_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice * to_cpp(
    pxr_SdfNotice_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & to_cpp_ref(
    pxr_SdfNotice_Base_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base & to_cpp_ref(
    pxr_SdfNotice_Base_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * to_cpp(
    pxr_SdfNotice_Base_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * to_cpp(
    pxr_SdfNotice_Base_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_Base_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_Base_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(lhs, reinterpret_cast<pxr_SdfNotice_Base_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const & to_cpp_ref(
    pxr_SdfNotice_BaseLayersDidChange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange & to_cpp_ref(
    pxr_SdfNotice_BaseLayersDidChange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * to_cpp(
    pxr_SdfNotice_BaseLayersDidChange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * to_cpp(
    pxr_SdfNotice_BaseLayersDidChange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_BaseLayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_copy(lhs, reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const & to_cpp_ref(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer & to_cpp_ref(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * to_cpp(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * to_cpp(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const & to_cpp_ref(
    pxr_SdfNotice_LayersDidChange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange & to_cpp_ref(
    pxr_SdfNotice_LayersDidChange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * to_cpp(
    pxr_SdfNotice_LayersDidChange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * to_cpp(
    pxr_SdfNotice_LayersDidChange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayersDidChange_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const & to_cpp_ref(
    pxr_SdfNotice_LayerInfoDidChange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange & to_cpp_ref(
    pxr_SdfNotice_LayerInfoDidChange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const * to_cpp(
    pxr_SdfNotice_LayerInfoDidChange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange * to_cpp(
    pxr_SdfNotice_LayerInfoDidChange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerInfoDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerInfoDidChange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerInfoDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerInfoDidChange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerInfoDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerInfoDidChange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerInfoDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerInfoDidChange_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerInfoDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerInfoDidChange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerInfoDidChange_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const & to_cpp_ref(
    pxr_SdfNotice_LayerIdentifierDidChange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange & to_cpp_ref(
    pxr_SdfNotice_LayerIdentifierDidChange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const * to_cpp(
    pxr_SdfNotice_LayerIdentifierDidChange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange * to_cpp(
    pxr_SdfNotice_LayerIdentifierDidChange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerIdentifierDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerIdentifierDidChange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerIdentifierDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerIdentifierDidChange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerIdentifierDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerIdentifierDidChange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerIdentifierDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerIdentifierDidChange_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerIdentifierDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerIdentifierDidChange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerIdentifierDidChange_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const & to_cpp_ref(
    pxr_SdfNotice_LayerDidReplaceContent_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent & to_cpp_ref(
    pxr_SdfNotice_LayerDidReplaceContent_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const * to_cpp(
    pxr_SdfNotice_LayerDidReplaceContent_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent * to_cpp(
    pxr_SdfNotice_LayerDidReplaceContent_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDidReplaceContent_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReplaceContent_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDidReplaceContent_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReplaceContent_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDidReplaceContent_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReplaceContent_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDidReplaceContent_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReplaceContent_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerDidReplaceContent_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReplaceContent const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReplaceContent_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerDidReplaceContent_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const & to_cpp_ref(
    pxr_SdfNotice_LayerDidReloadContent_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent & to_cpp_ref(
    pxr_SdfNotice_LayerDidReloadContent_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const * to_cpp(
    pxr_SdfNotice_LayerDidReloadContent_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent * to_cpp(
    pxr_SdfNotice_LayerDidReloadContent_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDidReloadContent_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReloadContent_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDidReloadContent_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReloadContent_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDidReloadContent_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReloadContent_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDidReloadContent_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidReloadContent_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerDidReloadContent_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidReloadContent const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReloadContent_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerDidReloadContent_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const & to_cpp_ref(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile & to_cpp_ref(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const * to_cpp(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile * to_cpp(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidSaveLayerToFile_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidSaveLayerToFile_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidSaveLayerToFile_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDidSaveLayerToFile_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerDidSaveLayerToFile_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDidSaveLayerToFile const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidSaveLayerToFile_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerDidSaveLayerToFile_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const & to_cpp_ref(
    pxr_SdfNotice_LayerDirtinessChanged_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged & to_cpp_ref(
    pxr_SdfNotice_LayerDirtinessChanged_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const * to_cpp(
    pxr_SdfNotice_LayerDirtinessChanged_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged * to_cpp(
    pxr_SdfNotice_LayerDirtinessChanged_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDirtinessChanged_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDirtinessChanged_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDirtinessChanged_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDirtinessChanged_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerDirtinessChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDirtinessChanged_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerDirtinessChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerDirtinessChanged_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerDirtinessChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerDirtinessChanged const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDirtinessChanged_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerDirtinessChanged_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const & to_cpp_ref(
    pxr_SdfNotice_LayerMutenessChanged_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged & to_cpp_ref(
    pxr_SdfNotice_LayerMutenessChanged_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const * to_cpp(
    pxr_SdfNotice_LayerMutenessChanged_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged * to_cpp(
    pxr_SdfNotice_LayerMutenessChanged_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerMutenessChanged_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerMutenessChanged_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerMutenessChanged_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerMutenessChanged_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayerMutenessChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerMutenessChanged_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayerMutenessChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayerMutenessChanged_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayerMutenessChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayerMutenessChanged const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayerMutenessChanged_t const * >(&(rhs)));
}

