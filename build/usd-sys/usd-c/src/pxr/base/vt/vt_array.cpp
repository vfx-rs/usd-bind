#include "pxr/base/vt/vt_array_private.h"

#include "pxr/base/gf/gf_matrix_private.h"
#include "pxr/base/gf/gf_quat_private.h"
#include "pxr/base/gf/gf_vec_private.h"
#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_asset_path_private.h"
#include "pxr/usd/sdf/sdf_time_code_private.h"
#include "std_string_private.h"
#include <new>

#include <iostream>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__ctor(
    pxr_VtArrayBool_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<_Bool>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__dtor(
    pxr_VtArrayBool_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_mut(
    pxr_VtArrayBool_t * this_
    , _Bool * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_const(
    pxr_VtArrayBool_t const * this_
    , _Bool const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__push_back(
    pxr_VtArrayBool_t * this_
    , _Bool const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__size(
    pxr_VtArrayBool_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__reserve(
    pxr_VtArrayBool_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__index_mut(
    pxr_VtArrayBool_t * this_
    , _Bool * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__index(
    pxr_VtArrayBool_t const * this_
    , _Bool const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__ctor(
    pxr_VtArrayU8_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__dtor(
    pxr_VtArrayU8_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_mut(
    pxr_VtArrayU8_t * this_
    , unsigned char * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_const(
    pxr_VtArrayU8_t const * this_
    , unsigned char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__push_back(
    pxr_VtArrayU8_t * this_
    , unsigned char const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__size(
    pxr_VtArrayU8_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__reserve(
    pxr_VtArrayU8_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index_mut(
    pxr_VtArrayU8_t * this_
    , unsigned char * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index(
    pxr_VtArrayU8_t const * this_
    , unsigned char const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__ctor(
    pxr_VtArrayU32_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__dtor(
    pxr_VtArrayU32_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_mut(
    pxr_VtArrayU32_t * this_
    , unsigned int * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_const(
    pxr_VtArrayU32_t const * this_
    , unsigned int const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__push_back(
    pxr_VtArrayU32_t * this_
    , unsigned int const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__size(
    pxr_VtArrayU32_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__reserve(
    pxr_VtArrayU32_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index_mut(
    pxr_VtArrayU32_t * this_
    , unsigned int * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index(
    pxr_VtArrayU32_t const * this_
    , unsigned int const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__ctor(
    pxr_VtArrayU64_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__dtor(
    pxr_VtArrayU64_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_mut(
    pxr_VtArrayU64_t * this_
    , unsigned long * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_const(
    pxr_VtArrayU64_t const * this_
    , unsigned long const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__push_back(
    pxr_VtArrayU64_t * this_
    , unsigned long const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__size(
    pxr_VtArrayU64_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__reserve(
    pxr_VtArrayU64_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index_mut(
    pxr_VtArrayU64_t * this_
    , unsigned long * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index(
    pxr_VtArrayU64_t const * this_
    , unsigned long const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__ctor(
    pxr_VtArrayI32_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<int32_t>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__dtor(
    pxr_VtArrayI32_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_mut(
    pxr_VtArrayI32_t * this_
    , int * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_const(
    pxr_VtArrayI32_t const * this_
    , int const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__push_back(
    pxr_VtArrayI32_t * this_
    , int const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__size(
    pxr_VtArrayI32_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__reserve(
    pxr_VtArrayI32_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index_mut(
    pxr_VtArrayI32_t * this_
    , int * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index(
    pxr_VtArrayI32_t const * this_
    , int const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__ctor(
    pxr_VtArrayI64_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<int64_t>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__dtor(
    pxr_VtArrayI64_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_mut(
    pxr_VtArrayI64_t * this_
    , long * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_const(
    pxr_VtArrayI64_t const * this_
    , long const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__push_back(
    pxr_VtArrayI64_t * this_
    , long const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__size(
    pxr_VtArrayI64_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__reserve(
    pxr_VtArrayI64_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index_mut(
    pxr_VtArrayI64_t * this_
    , long * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index(
    pxr_VtArrayI64_t const * this_
    , long const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__ctor(
    pxr_VtArrayF32_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__dtor(
    pxr_VtArrayF32_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__data_mut(
    pxr_VtArrayF32_t * this_
    , float * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__data_const(
    pxr_VtArrayF32_t const * this_
    , float const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__push_back(
    pxr_VtArrayF32_t * this_
    , float const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__size(
    pxr_VtArrayF32_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__reserve(
    pxr_VtArrayF32_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__index_mut(
    pxr_VtArrayF32_t * this_
    , float * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__index(
    pxr_VtArrayF32_t const * this_
    , float const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__ctor(
    pxr_VtArrayF64_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<double>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__dtor(
    pxr_VtArrayF64_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__data_mut(
    pxr_VtArrayF64_t * this_
    , double * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__data_const(
    pxr_VtArrayF64_t const * this_
    , double const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__push_back(
    pxr_VtArrayF64_t * this_
    , double const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(*(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__size(
    pxr_VtArrayF64_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__reserve(
    pxr_VtArrayF64_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__index_mut(
    pxr_VtArrayF64_t * this_
    , double * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__index(
    pxr_VtArrayF64_t const * this_
    , double const * * return_
    , size_t index)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__ctor(
    pxr_VtArraySdfAssetPath_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__dtor(
    pxr_VtArraySdfAssetPath_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__data_mut(
    pxr_VtArraySdfAssetPath_t * this_
    , pxr_SdfAssetPath_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__data_const(
    pxr_VtArraySdfAssetPath_t const * this_
    , pxr_SdfAssetPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__push_back(
    pxr_VtArraySdfAssetPath_t * this_
    , pxr_SdfAssetPath_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        std::cerr << TLG_EXCEPTION_STRING << std::endl;
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__size(
    pxr_VtArraySdfAssetPath_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__reserve(
    pxr_VtArraySdfAssetPath_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__index_mut(
    pxr_VtArraySdfAssetPath_t * this_
    , pxr_SdfAssetPath_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__index(
    pxr_VtArraySdfAssetPath_t const * this_
    , pxr_SdfAssetPath_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__ctor(
    pxr_VtArraySdfTimeCode_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__dtor(
    pxr_VtArraySdfTimeCode_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__data_mut(
    pxr_VtArraySdfTimeCode_t * this_
    , pxr_SdfTimeCode_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__data_const(
    pxr_VtArraySdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__push_back(
    pxr_VtArraySdfTimeCode_t * this_
    , pxr_SdfTimeCode_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__size(
    pxr_VtArraySdfTimeCode_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__reserve(
    pxr_VtArraySdfTimeCode_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__index_mut(
    pxr_VtArraySdfTimeCode_t * this_
    , pxr_SdfTimeCode_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__index(
    pxr_VtArraySdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__ctor(
    pxr_VtArrayTfToken_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__dtor(
    pxr_VtArrayTfToken_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_mut(
    pxr_VtArrayTfToken_t * this_
    , pxr_TfToken_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_const(
    pxr_VtArrayTfToken_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__push_back(
    pxr_VtArrayTfToken_t * this_
    , pxr_TfToken_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__size(
    pxr_VtArrayTfToken_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__reserve(
    pxr_VtArrayTfToken_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index_mut(
    pxr_VtArrayTfToken_t * this_
    , pxr_TfToken_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index(
    pxr_VtArrayTfToken_t const * this_
    , pxr_TfToken_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__ctor(
    pxr_VtArraystring_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__dtor(
    pxr_VtArraystring_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__data_mut(
    pxr_VtArraystring_t * this_
    , std_string_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__data_const(
    pxr_VtArraystring_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__push_back(
    pxr_VtArraystring_t * this_
    , std_string_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__size(
    pxr_VtArraystring_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__reserve(
    pxr_VtArraystring_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__index_mut(
    pxr_VtArraystring_t * this_
    , std_string_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__index(
    pxr_VtArraystring_t const * this_
    , std_string_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__ctor(
    pxr_VtArrayGfVec2i_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__dtor(
    pxr_VtArrayGfVec2i_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_mut(
    pxr_VtArrayGfVec2i_t * this_
    , pxr_GfVec2i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_const(
    pxr_VtArrayGfVec2i_t const * this_
    , pxr_GfVec2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__push_back(
    pxr_VtArrayGfVec2i_t * this_
    , pxr_GfVec2i_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__size(
    pxr_VtArrayGfVec2i_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__reserve(
    pxr_VtArrayGfVec2i_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index_mut(
    pxr_VtArrayGfVec2i_t * this_
    , pxr_GfVec2i_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index(
    pxr_VtArrayGfVec2i_t const * this_
    , pxr_GfVec2i_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__ctor(
    pxr_VtArrayGfVec3i_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__dtor(
    pxr_VtArrayGfVec3i_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_mut(
    pxr_VtArrayGfVec3i_t * this_
    , pxr_GfVec3i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_const(
    pxr_VtArrayGfVec3i_t const * this_
    , pxr_GfVec3i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__push_back(
    pxr_VtArrayGfVec3i_t * this_
    , pxr_GfVec3i_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__size(
    pxr_VtArrayGfVec3i_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__reserve(
    pxr_VtArrayGfVec3i_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index_mut(
    pxr_VtArrayGfVec3i_t * this_
    , pxr_GfVec3i_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index(
    pxr_VtArrayGfVec3i_t const * this_
    , pxr_GfVec3i_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__ctor(
    pxr_VtArrayGfVec4i_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__dtor(
    pxr_VtArrayGfVec4i_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_mut(
    pxr_VtArrayGfVec4i_t * this_
    , pxr_GfVec4i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_const(
    pxr_VtArrayGfVec4i_t const * this_
    , pxr_GfVec4i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__push_back(
    pxr_VtArrayGfVec4i_t * this_
    , pxr_GfVec4i_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__size(
    pxr_VtArrayGfVec4i_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__reserve(
    pxr_VtArrayGfVec4i_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index_mut(
    pxr_VtArrayGfVec4i_t * this_
    , pxr_GfVec4i_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index(
    pxr_VtArrayGfVec4i_t const * this_
    , pxr_GfVec4i_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__ctor(
    pxr_VtArrayGfVec2f_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__dtor(
    pxr_VtArrayGfVec2f_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_mut(
    pxr_VtArrayGfVec2f_t * this_
    , pxr_GfVec2f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_const(
    pxr_VtArrayGfVec2f_t const * this_
    , pxr_GfVec2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__push_back(
    pxr_VtArrayGfVec2f_t * this_
    , pxr_GfVec2f_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__size(
    pxr_VtArrayGfVec2f_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__reserve(
    pxr_VtArrayGfVec2f_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index_mut(
    pxr_VtArrayGfVec2f_t * this_
    , pxr_GfVec2f_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index(
    pxr_VtArrayGfVec2f_t const * this_
    , pxr_GfVec2f_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__ctor(
    pxr_VtArrayGfVec3f_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__dtor(
    pxr_VtArrayGfVec3f_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_mut(
    pxr_VtArrayGfVec3f_t * this_
    , pxr_GfVec3f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_const(
    pxr_VtArrayGfVec3f_t const * this_
    , pxr_GfVec3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__push_back(
    pxr_VtArrayGfVec3f_t * this_
    , pxr_GfVec3f_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__size(
    pxr_VtArrayGfVec3f_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__reserve(
    pxr_VtArrayGfVec3f_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index_mut(
    pxr_VtArrayGfVec3f_t * this_
    , pxr_GfVec3f_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index(
    pxr_VtArrayGfVec3f_t const * this_
    , pxr_GfVec3f_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__ctor(
    pxr_VtArrayGfVec4f_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__dtor(
    pxr_VtArrayGfVec4f_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_mut(
    pxr_VtArrayGfVec4f_t * this_
    , pxr_GfVec4f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_const(
    pxr_VtArrayGfVec4f_t const * this_
    , pxr_GfVec4f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__push_back(
    pxr_VtArrayGfVec4f_t * this_
    , pxr_GfVec4f_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__size(
    pxr_VtArrayGfVec4f_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__reserve(
    pxr_VtArrayGfVec4f_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index_mut(
    pxr_VtArrayGfVec4f_t * this_
    , pxr_GfVec4f_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index(
    pxr_VtArrayGfVec4f_t const * this_
    , pxr_GfVec4f_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__ctor(
    pxr_VtArrayGfVec2d_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__dtor(
    pxr_VtArrayGfVec2d_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_mut(
    pxr_VtArrayGfVec2d_t * this_
    , pxr_GfVec2d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_const(
    pxr_VtArrayGfVec2d_t const * this_
    , pxr_GfVec2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__push_back(
    pxr_VtArrayGfVec2d_t * this_
    , pxr_GfVec2d_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__size(
    pxr_VtArrayGfVec2d_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__reserve(
    pxr_VtArrayGfVec2d_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index_mut(
    pxr_VtArrayGfVec2d_t * this_
    , pxr_GfVec2d_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index(
    pxr_VtArrayGfVec2d_t const * this_
    , pxr_GfVec2d_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__ctor(
    pxr_VtArrayGfVec3d_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__dtor(
    pxr_VtArrayGfVec3d_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_mut(
    pxr_VtArrayGfVec3d_t * this_
    , pxr_GfVec3d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_const(
    pxr_VtArrayGfVec3d_t const * this_
    , pxr_GfVec3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__push_back(
    pxr_VtArrayGfVec3d_t * this_
    , pxr_GfVec3d_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__size(
    pxr_VtArrayGfVec3d_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__reserve(
    pxr_VtArrayGfVec3d_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index_mut(
    pxr_VtArrayGfVec3d_t * this_
    , pxr_GfVec3d_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index(
    pxr_VtArrayGfVec3d_t const * this_
    , pxr_GfVec3d_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__ctor(
    pxr_VtArrayGfVec4d_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__dtor(
    pxr_VtArrayGfVec4d_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_mut(
    pxr_VtArrayGfVec4d_t * this_
    , pxr_GfVec4d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_const(
    pxr_VtArrayGfVec4d_t const * this_
    , pxr_GfVec4d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__push_back(
    pxr_VtArrayGfVec4d_t * this_
    , pxr_GfVec4d_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__size(
    pxr_VtArrayGfVec4d_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__reserve(
    pxr_VtArrayGfVec4d_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index_mut(
    pxr_VtArrayGfVec4d_t * this_
    , pxr_GfVec4d_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index(
    pxr_VtArrayGfVec4d_t const * this_
    , pxr_GfVec4d_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__ctor(
    pxr_VtArrayGfQuatf_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__dtor(
    pxr_VtArrayGfQuatf_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_mut(
    pxr_VtArrayGfQuatf_t * this_
    , pxr_GfQuatf_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_const(
    pxr_VtArrayGfQuatf_t const * this_
    , pxr_GfQuatf_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__push_back(
    pxr_VtArrayGfQuatf_t * this_
    , pxr_GfQuatf_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__size(
    pxr_VtArrayGfQuatf_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__reserve(
    pxr_VtArrayGfQuatf_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index_mut(
    pxr_VtArrayGfQuatf_t * this_
    , pxr_GfQuatf_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index(
    pxr_VtArrayGfQuatf_t const * this_
    , pxr_GfQuatf_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__ctor(
    pxr_VtArrayGfQuatd_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__dtor(
    pxr_VtArrayGfQuatd_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_mut(
    pxr_VtArrayGfQuatd_t * this_
    , pxr_GfQuatd_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_const(
    pxr_VtArrayGfQuatd_t const * this_
    , pxr_GfQuatd_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__push_back(
    pxr_VtArrayGfQuatd_t * this_
    , pxr_GfQuatd_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__size(
    pxr_VtArrayGfQuatd_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__reserve(
    pxr_VtArrayGfQuatd_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index_mut(
    pxr_VtArrayGfQuatd_t * this_
    , pxr_GfQuatd_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index(
    pxr_VtArrayGfQuatd_t const * this_
    , pxr_GfQuatd_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__ctor(
    pxr_VtArrayGfMatrix2f_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__dtor(
    pxr_VtArrayGfMatrix2f_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_mut(
    pxr_VtArrayGfMatrix2f_t * this_
    , pxr_GfMatrix2f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_const(
    pxr_VtArrayGfMatrix2f_t const * this_
    , pxr_GfMatrix2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__push_back(
    pxr_VtArrayGfMatrix2f_t * this_
    , pxr_GfMatrix2f_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__size(
    pxr_VtArrayGfMatrix2f_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__reserve(
    pxr_VtArrayGfMatrix2f_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index_mut(
    pxr_VtArrayGfMatrix2f_t * this_
    , pxr_GfMatrix2f_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index(
    pxr_VtArrayGfMatrix2f_t const * this_
    , pxr_GfMatrix2f_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__ctor(
    pxr_VtArrayGfMatrix3f_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__dtor(
    pxr_VtArrayGfMatrix3f_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_mut(
    pxr_VtArrayGfMatrix3f_t * this_
    , pxr_GfMatrix3f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_const(
    pxr_VtArrayGfMatrix3f_t const * this_
    , pxr_GfMatrix3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__push_back(
    pxr_VtArrayGfMatrix3f_t * this_
    , pxr_GfMatrix3f_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__size(
    pxr_VtArrayGfMatrix3f_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__reserve(
    pxr_VtArrayGfMatrix3f_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index_mut(
    pxr_VtArrayGfMatrix3f_t * this_
    , pxr_GfMatrix3f_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index(
    pxr_VtArrayGfMatrix3f_t const * this_
    , pxr_GfMatrix3f_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__ctor(
    pxr_VtArrayGfMatrix4f_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__dtor(
    pxr_VtArrayGfMatrix4f_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_mut(
    pxr_VtArrayGfMatrix4f_t * this_
    , pxr_GfMatrix4f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_const(
    pxr_VtArrayGfMatrix4f_t const * this_
    , pxr_GfMatrix4f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__push_back(
    pxr_VtArrayGfMatrix4f_t * this_
    , pxr_GfMatrix4f_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__size(
    pxr_VtArrayGfMatrix4f_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__reserve(
    pxr_VtArrayGfMatrix4f_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index_mut(
    pxr_VtArrayGfMatrix4f_t * this_
    , pxr_GfMatrix4f_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index(
    pxr_VtArrayGfMatrix4f_t const * this_
    , pxr_GfMatrix4f_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__ctor(
    pxr_VtArrayGfMatrix2d_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__dtor(
    pxr_VtArrayGfMatrix2d_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_mut(
    pxr_VtArrayGfMatrix2d_t * this_
    , pxr_GfMatrix2d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_const(
    pxr_VtArrayGfMatrix2d_t const * this_
    , pxr_GfMatrix2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__push_back(
    pxr_VtArrayGfMatrix2d_t * this_
    , pxr_GfMatrix2d_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__size(
    pxr_VtArrayGfMatrix2d_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__reserve(
    pxr_VtArrayGfMatrix2d_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index_mut(
    pxr_VtArrayGfMatrix2d_t * this_
    , pxr_GfMatrix2d_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index(
    pxr_VtArrayGfMatrix2d_t const * this_
    , pxr_GfMatrix2d_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__ctor(
    pxr_VtArrayGfMatrix3d_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__dtor(
    pxr_VtArrayGfMatrix3d_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_mut(
    pxr_VtArrayGfMatrix3d_t * this_
    , pxr_GfMatrix3d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_const(
    pxr_VtArrayGfMatrix3d_t const * this_
    , pxr_GfMatrix3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__push_back(
    pxr_VtArrayGfMatrix3d_t * this_
    , pxr_GfMatrix3d_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__size(
    pxr_VtArrayGfMatrix3d_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__reserve(
    pxr_VtArrayGfMatrix3d_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index_mut(
    pxr_VtArrayGfMatrix3d_t * this_
    , pxr_GfMatrix3d_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index(
    pxr_VtArrayGfMatrix3d_t const * this_
    , pxr_GfMatrix3d_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__ctor(
    pxr_VtArrayGfMatrix4d_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__dtor(
    pxr_VtArrayGfMatrix4d_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_mut(
    pxr_VtArrayGfMatrix4d_t * this_
    , pxr_GfMatrix4d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_const(
    pxr_VtArrayGfMatrix4d_t const * this_
    , pxr_GfMatrix4d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__push_back(
    pxr_VtArrayGfMatrix4d_t * this_
    , pxr_GfMatrix4d_t const * elem)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(elem));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__size(
    pxr_VtArrayGfMatrix4d_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__reserve(
    pxr_VtArrayGfMatrix4d_t * this_
    , size_t num)
{
    try {
        (to_cpp(this_)) -> reserve(num);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index_mut(
    pxr_VtArrayGfMatrix4d_t * this_
    , pxr_GfMatrix4d_t * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index(
    pxr_VtArrayGfMatrix4d_t const * this_
    , pxr_GfMatrix4d_t const * * return_
    , size_t index)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

