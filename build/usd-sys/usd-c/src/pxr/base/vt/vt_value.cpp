#include "pxr/base/vt/vt_value_private.h"

#include "pxr/base/gf/gf_ilmbase_half_private.h"
#include "pxr/base/gf/gf_matrix_private.h"
#include "pxr/base/gf/gf_quat_private.h"
#include "pxr/base/gf/gf_vec_private.h"
#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/vt/vt_array_private.h"
#include "pxr/usd/sdf/sdf_asset_path_private.h"
#include "pxr/usd/sdf/sdf_time_code_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor(
    pxr_VtValue_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_bool(
    pxr_VtValue_t * * this_
    , _Bool const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint8_t(
    pxr_VtValue_t * * this_
    , unsigned char const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint32_t(
    pxr_VtValue_t * * this_
    , unsigned int const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint64_t(
    pxr_VtValue_t * * this_
    , unsigned long const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_int32_t(
    pxr_VtValue_t * * this_
    , int const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_int64_t(
    pxr_VtValue_t * * this_
    , long const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_float(
    pxr_VtValue_t * * this_
    , float const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_double(
    pxr_VtValue_t * * this_
    , double const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(*(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_half(
    pxr_VtValue_t * * this_
    , pxr_pxr_half_half_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfTimeCode(
    pxr_VtValue_t * * this_
    , pxr_SdfTimeCode_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfAssetPath(
    pxr_VtValue_t * * this_
    , pxr_SdfAssetPath_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_TfToken(
    pxr_VtValue_t * * this_
    , pxr_TfToken_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_string(
    pxr_VtValue_t * * this_
    , std_string_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2h(
    pxr_VtValue_t * * this_
    , pxr_GfVec2h_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3h(
    pxr_VtValue_t * * this_
    , pxr_GfVec3h_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4h(
    pxr_VtValue_t * * this_
    , pxr_GfVec4h_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2d(
    pxr_VtValue_t * * this_
    , pxr_GfVec2d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3d(
    pxr_VtValue_t * * this_
    , pxr_GfVec3d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4d(
    pxr_VtValue_t * * this_
    , pxr_GfVec4d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2f(
    pxr_VtValue_t * * this_
    , pxr_GfVec2f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3f(
    pxr_VtValue_t * * this_
    , pxr_GfVec3f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4f(
    pxr_VtValue_t * * this_
    , pxr_GfVec4f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2i(
    pxr_VtValue_t * * this_
    , pxr_GfVec2i_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3i(
    pxr_VtValue_t * * this_
    , pxr_GfVec3i_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4i(
    pxr_VtValue_t * * this_
    , pxr_GfVec4i_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatf(
    pxr_VtValue_t * * this_
    , pxr_GfQuatf_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatd(
    pxr_VtValue_t * * this_
    , pxr_GfQuatd_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2f(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix2f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2d(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix2d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3f(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix3f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3d(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix3d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4f(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix4f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4d(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix4d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayBool(
    pxr_VtValue_t * * this_
    , pxr_VtArrayBool_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU32(
    pxr_VtValue_t * * this_
    , pxr_VtArrayU32_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI32(
    pxr_VtValue_t * * this_
    , pxr_VtArrayI32_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI64(
    pxr_VtValue_t * * this_
    , pxr_VtArrayI64_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU64(
    pxr_VtValue_t * * this_
    , pxr_VtArrayU64_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF32(
    pxr_VtValue_t * * this_
    , pxr_VtArrayF32_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF64(
    pxr_VtValue_t * * this_
    , pxr_VtArrayF64_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayTfToken(
    pxr_VtValue_t * * this_
    , pxr_VtArrayTfToken_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec2f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec3f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec4f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec2d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec3d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec4d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2i(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec2i_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3i(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec3i_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4i(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec4i_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatf(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfQuatf_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatd(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfQuatd_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix2f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix3f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix4f_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix2d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix3d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix4d_t const * obj)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtValue(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_dtor(
    pxr_VtValue_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_bool(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , _Bool obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<_Bool>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_uint8_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , unsigned char obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<unsigned char>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_uint32_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , unsigned int obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<unsigned int>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_uint64_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , unsigned long obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<unsigned long>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_int32_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , int obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<int>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_int64_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , long obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<long>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_float(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , float obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<float>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_double(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , double obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<double>(obj));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_half(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_pxr_half_half_t obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::pxr_half::half>(to_cpp_ref(&(obj))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2h(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2h_t obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec2h>(to_cpp_ref(&(obj))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3h(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3h_t obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec3h>(to_cpp_ref(&(obj))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4h(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4h_t obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec4h>(to_cpp_ref(&(obj))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2f_t obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec2f>(to_cpp_ref(&(obj))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2i_t obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec2i>(to_cpp_ref(&(obj))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfTimeCode(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_SdfTimeCode_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::SdfTimeCode>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfAssetPath(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_SdfAssetPath_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::SdfAssetPath>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_TfToken(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_TfToken_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::TfToken>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_string(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , std_string_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<std::__cxx11::basic_string<char>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec2d>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec3d>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec4d>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec3f>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec4f>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3i_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec3i>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4i_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfVec4i>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatf(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfQuatf_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfQuatf>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatd(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfQuatd_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfQuatd>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix2f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfMatrix2f>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix2d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfMatrix2d>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix3f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfMatrix3f>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix3d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfMatrix3d>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix4f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfMatrix4f>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix4d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::GfMatrix4d>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayBool(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayBool_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<_Bool>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU32(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayU32_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<unsigned int>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI32(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayI32_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<int>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI64(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayI64_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<long>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU64(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayU64_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<unsigned long>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF32(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayF32_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<float>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF64(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayF64_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<double>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayTfToken(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayTfToken_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::TfToken>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec2f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec2f>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec3f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec3f>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec4f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec4f>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec2d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec2d>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec3d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec3d>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec4d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec4d>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec2i_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec2i>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec3i_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec3i>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec4i_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec4i>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatf(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfQuatf_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfQuatf>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatd(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfQuatd_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfQuatd>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix2f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix2f>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix3f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix3f>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix4f_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix4f>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix2d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix2d>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix3d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix3d>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix4d_t const * obj)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix4d>>(to_cpp_ref(obj)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_GetType(
    pxr_VtValue_t const * this_
    , pxr_TfType_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_GetTypeName(
    pxr_VtValue_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetTypeName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_bool(
    pxr_VtValue_t const * this_
    , _Bool const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<_Bool>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_uint8_t(
    pxr_VtValue_t const * this_
    , unsigned char const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<unsigned char>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_uint32_t(
    pxr_VtValue_t const * this_
    , unsigned int const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<unsigned int>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_uint64_t(
    pxr_VtValue_t const * this_
    , unsigned long const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<unsigned long>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_int32_t(
    pxr_VtValue_t const * this_
    , int const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<int>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_int64_t(
    pxr_VtValue_t const * this_
    , long const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<long>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_float(
    pxr_VtValue_t const * this_
    , float const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_double(
    pxr_VtValue_t const * this_
    , double const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> Get<double>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_half(
    pxr_VtValue_t const * this_
    , pxr_pxr_half_half_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::pxr_half::half>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfTimeCode(
    pxr_VtValue_t const * this_
    , pxr_SdfTimeCode_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::SdfTimeCode>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfAssetPath(
    pxr_VtValue_t const * this_
    , pxr_SdfAssetPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::SdfAssetPath>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_TfToken(
    pxr_VtValue_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::TfToken>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_string(
    pxr_VtValue_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<std::__cxx11::basic_string<char>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2h(
    pxr_VtValue_t const * this_
    , pxr_GfVec2h_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec2h>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3h(
    pxr_VtValue_t const * this_
    , pxr_GfVec3h_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec3h>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4h(
    pxr_VtValue_t const * this_
    , pxr_GfVec4h_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec4h>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2d(
    pxr_VtValue_t const * this_
    , pxr_GfVec2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec2d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3d(
    pxr_VtValue_t const * this_
    , pxr_GfVec3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec3d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4d(
    pxr_VtValue_t const * this_
    , pxr_GfVec4d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec4d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2f(
    pxr_VtValue_t const * this_
    , pxr_GfVec2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec2f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3f(
    pxr_VtValue_t const * this_
    , pxr_GfVec3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec3f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4f(
    pxr_VtValue_t const * this_
    , pxr_GfVec4f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec4f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2i(
    pxr_VtValue_t const * this_
    , pxr_GfVec2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec2i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3i(
    pxr_VtValue_t const * this_
    , pxr_GfVec3i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec3i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4i(
    pxr_VtValue_t const * this_
    , pxr_GfVec4i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfVec4i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatf(
    pxr_VtValue_t const * this_
    , pxr_GfQuatf_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfQuatf>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatd(
    pxr_VtValue_t const * this_
    , pxr_GfQuatd_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfQuatd>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2f(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfMatrix2f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2d(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfMatrix2d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3f(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfMatrix3f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3d(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfMatrix3d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4f(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix4f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfMatrix4f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4d(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix4d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::GfMatrix4d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayBool(
    pxr_VtValue_t const * this_
    , pxr_VtArrayBool_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<_Bool>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU32(
    pxr_VtValue_t const * this_
    , pxr_VtArrayU32_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<unsigned int>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI32(
    pxr_VtValue_t const * this_
    , pxr_VtArrayI32_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<int>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI64(
    pxr_VtValue_t const * this_
    , pxr_VtArrayI64_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<long>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU64(
    pxr_VtValue_t const * this_
    , pxr_VtArrayU64_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<unsigned long>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF32(
    pxr_VtValue_t const * this_
    , pxr_VtArrayF32_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<float>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF64(
    pxr_VtValue_t const * this_
    , pxr_VtArrayF64_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<double>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayTfToken(
    pxr_VtValue_t const * this_
    , pxr_VtArrayTfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::TfToken>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec2f>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec3f>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec4f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec4f>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec2d>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec3d>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec4d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec4d>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2i(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec2i>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3i(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec3i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec3i>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4i(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec4i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfVec4i>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatf(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfQuatf_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfQuatf>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatd(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfQuatd_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfQuatd>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix2f>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix3f>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix4f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix4f>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix2d>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix3d>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix4d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Get<pxrInternal_v0_21__pxrReserved__::VtArray<pxrInternal_v0_21__pxrReserved__::GfMatrix4d>>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_bool_impl(const pxr::VtValue &v)  {
    return v.IsHolding<bool>();
}


USD_CPPMM_API unsigned int value_is_holding_bool(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_bool_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_uint8_t_impl(const pxr::VtValue &v)  {
    return v.IsHolding<uint8_t>();
}


USD_CPPMM_API unsigned int value_is_holding_uint8_t(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_uint8_t_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_uint32_t_impl(const pxr::VtValue &v)  {
    return v.IsHolding<uint32_t>();
}


USD_CPPMM_API unsigned int value_is_holding_uint32_t(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_uint32_t_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_uint64_t_impl(const pxr::VtValue &v)  {
    return v.IsHolding<uint64_t>();
}


USD_CPPMM_API unsigned int value_is_holding_uint64_t(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_uint64_t_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_int32_t_impl(const pxr::VtValue &v)  {
    return v.IsHolding<int32_t>();
}


USD_CPPMM_API unsigned int value_is_holding_int32_t(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_int32_t_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_int64_t_impl(const pxr::VtValue &v)  {
    return v.IsHolding<int64_t>();
}


USD_CPPMM_API unsigned int value_is_holding_int64_t(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_int64_t_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_float_impl(const pxr::VtValue &v)  {
    return v.IsHolding<float>();
}


USD_CPPMM_API unsigned int value_is_holding_float(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_float_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_double_impl(const pxr::VtValue &v)  {
    return v.IsHolding<double>();
}


USD_CPPMM_API unsigned int value_is_holding_double(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_double_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_half_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfHalf>();
}


USD_CPPMM_API unsigned int value_is_holding_half(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_half_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_SdfTimeCode_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::SdfTimeCode>();
}


USD_CPPMM_API unsigned int value_is_holding_SdfTimeCode(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_SdfTimeCode_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_SdfAssetPath_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::SdfAssetPath>();
}


USD_CPPMM_API unsigned int value_is_holding_SdfAssetPath(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_SdfAssetPath_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_TfToken_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::TfToken>();
}


USD_CPPMM_API unsigned int value_is_holding_TfToken(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_TfToken_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_string_impl(const pxr::VtValue &v)  {
    return v.IsHolding<std::string>();
}


USD_CPPMM_API unsigned int value_is_holding_string(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_string_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec2h_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec2h>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec2h(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec2h_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec3h_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec3h>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec3h(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec3h_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec4h_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec4h>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec4h(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec4h_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec2d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec2d>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec2d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec2d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec3d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec3d>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec3d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec3d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec4d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec4d>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec4d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec4d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec2f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec2f>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec2f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec2f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec3f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec3f>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec3f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec3f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec4f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec4f>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec4f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec4f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec2i_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec2i>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec2i(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec2i_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec3i_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec3i>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec3i(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec3i_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfVec4i_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfVec4i>();
}


USD_CPPMM_API unsigned int value_is_holding_GfVec4i(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfVec4i_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfQuatf_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfQuatf>();
}


USD_CPPMM_API unsigned int value_is_holding_GfQuatf(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfQuatf_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfQuatd_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfQuatd>();
}


USD_CPPMM_API unsigned int value_is_holding_GfQuatd(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfQuatd_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfMatrix2f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfMatrix2f>();
}


USD_CPPMM_API unsigned int value_is_holding_GfMatrix2f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfMatrix2f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfMatrix2d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfMatrix2d>();
}


USD_CPPMM_API unsigned int value_is_holding_GfMatrix2d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfMatrix2d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfMatrix3f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfMatrix3f>();
}


USD_CPPMM_API unsigned int value_is_holding_GfMatrix3f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfMatrix3f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfMatrix3d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfMatrix3d>();
}


USD_CPPMM_API unsigned int value_is_holding_GfMatrix3d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfMatrix3d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfMatrix4f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfMatrix4f>();
}


USD_CPPMM_API unsigned int value_is_holding_GfMatrix4f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfMatrix4f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_GfMatrix4d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::GfMatrix4d>();
}


USD_CPPMM_API unsigned int value_is_holding_GfMatrix4d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_GfMatrix4d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayBool_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtBoolArray>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayBool(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayBool_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayU32_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtUIntArray>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayU32(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayU32_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayI32_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtIntArray>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayI32(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayI32_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayI64_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<long>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayI64(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayI64_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayU64_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<unsigned long>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayU64(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayU64_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayF32_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtFloatArray>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayF32(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayF32_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayF64_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtDoubleArray>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayF64(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayF64_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayTfToken_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtTokenArray>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayTfToken(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayTfToken_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec2f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec2f>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec2f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec2f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec3f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec3f>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec3f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec3f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec4f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec4f>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec4f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec4f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec2d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec2d>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec2d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec2d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec3d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec3d>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec3d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec3d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec4d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec4d>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec4d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec4d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec2i_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec2i>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec2i(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec2i_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec3i_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec3i>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec3i(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec3i_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfVec4i_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfVec4i>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec4i(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfVec4i_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfQuatf_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfQuatf>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfQuatf(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfQuatf_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfQuatd_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfQuatd>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfQuatd(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfQuatd_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfMatrix2f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfMatrix2f>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix2f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfMatrix2f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfMatrix3f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfMatrix3f>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix3f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfMatrix3f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfMatrix4f_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfMatrix4f>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix4f(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfMatrix4f_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfMatrix2d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfMatrix2d>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix2d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfMatrix2d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfMatrix3d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfMatrix3d>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix3d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfMatrix3d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool value_is_holding_VtArrayGfMatrix4d_impl(const pxr::VtValue &v)  {
    return v.IsHolding<pxr::VtArray<pxr::GfMatrix4d>>();
}


USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix4d(
    _Bool * return_
    , pxr_VtValue_t const * v)
{
    try {
        *(return_) = value_is_holding_VtArrayGfMatrix4d_impl(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

