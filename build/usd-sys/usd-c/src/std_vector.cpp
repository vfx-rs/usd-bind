#include "std_vector_private.h"

#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/usd/usd_attribute_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int std__vector_std__string__ctor(
    std_vector_string_t * * this_)
{
    try {
        to_c(this_, new std::vector<std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_std__string__copy(
    std_vector_string_t * * this_
    , std_vector_string_t const * rhs)
{
    try {
        to_c(this_, new std::vector<std::string>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_std__string__dtor(
    std_vector_string_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_std__string__size(
    std_vector_string_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_std__string__resize(
    std_vector_string_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_std__string__reserve(
    std_vector_string_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_std__string__index_mut(
    std_vector_string_t * this_
    , std_string_t * * return_
    , size_t pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_std__string__index(
    std_vector_string_t const * this_
    , std_string_t const * * return_
    , size_t pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_std__string__data(
    std_vector_string_t * this_
    , std_string_t * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

USD_CPPMM_API unsigned int std__vector_std__string__data_const(
    std_vector_string_t const * this_
    , std_string_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

USD_CPPMM_API unsigned int std__vector_std__string__push_back(
    std_vector_string_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_char__ctor(
    std_vector_char_t * * this_)
{
    try {
        to_c(this_, new std::vector<char>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_char__copy(
    std_vector_char_t * * this_
    , std_vector_char_t const * rhs)
{
    try {
        to_c(this_, new std::vector<char>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_char__dtor(
    std_vector_char_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_char__size(
    std_vector_char_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_char__resize(
    std_vector_char_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_char__reserve(
    std_vector_char_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_char__index_mut(
    std_vector_char_t * this_
    , char * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_char__index(
    std_vector_char_t const * this_
    , char const * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_char__data(
    std_vector_char_t * this_
    , char * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_char__data_const(
    std_vector_char_t const * this_
    , char const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_char__push_back(
    std_vector_char_t * this_
    , char const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__ctor(
    std_vector_uchar_t * * this_)
{
    try {
        to_c(this_, new std::vector<unsigned char>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__copy(
    std_vector_uchar_t * * this_
    , std_vector_uchar_t const * rhs)
{
    try {
        to_c(this_, new std::vector<unsigned char>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__dtor(
    std_vector_uchar_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__size(
    std_vector_uchar_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__resize(
    std_vector_uchar_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__reserve(
    std_vector_uchar_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__index_mut(
    std_vector_uchar_t * this_
    , unsigned char * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__index(
    std_vector_uchar_t const * this_
    , unsigned char const * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__data(
    std_vector_uchar_t * this_
    , unsigned char * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__data_const(
    std_vector_uchar_t const * this_
    , unsigned char const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_unsignedchar__push_back(
    std_vector_uchar_t * this_
    , unsigned char const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_float__ctor(
    std_vector_float_t * * this_)
{
    try {
        to_c(this_, new std::vector<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_float__copy(
    std_vector_float_t * * this_
    , std_vector_float_t const * rhs)
{
    try {
        to_c(this_, new std::vector<float>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_float__dtor(
    std_vector_float_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_float__size(
    std_vector_float_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_float__resize(
    std_vector_float_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_float__reserve(
    std_vector_float_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_float__index_mut(
    std_vector_float_t * this_
    , float * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_float__index(
    std_vector_float_t const * this_
    , float const * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_float__data(
    std_vector_float_t * this_
    , float * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_float__data_const(
    std_vector_float_t const * this_
    , float const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_float__push_back(
    std_vector_float_t * this_
    , float const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_double__ctor(
    std_vector_double_t * * this_)
{
    try {
        to_c(this_, new std::vector<double>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_double__copy(
    std_vector_double_t * * this_
    , std_vector_double_t const * rhs)
{
    try {
        to_c(this_, new std::vector<double>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_double__dtor(
    std_vector_double_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_double__size(
    std_vector_double_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_double__resize(
    std_vector_double_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_double__reserve(
    std_vector_double_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_double__index_mut(
    std_vector_double_t * this_
    , double * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_double__index(
    std_vector_double_t const * this_
    , double const * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_double__data(
    std_vector_double_t * this_
    , double * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_double__data_const(
    std_vector_double_t const * this_
    , double const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_double__push_back(
    std_vector_double_t * this_
    , double const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_int__ctor(
    std_vector_int_t * * this_)
{
    try {
        to_c(this_, new std::vector<int>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_int__copy(
    std_vector_int_t * * this_
    , std_vector_int_t const * rhs)
{
    try {
        to_c(this_, new std::vector<int>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_int__dtor(
    std_vector_int_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_int__size(
    std_vector_int_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_int__resize(
    std_vector_int_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_int__reserve(
    std_vector_int_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_int__index_mut(
    std_vector_int_t * this_
    , int * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_int__index(
    std_vector_int_t const * this_
    , int const * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_int__data(
    std_vector_int_t * this_
    , int * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_int__data_const(
    std_vector_int_t const * this_
    , int const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_int__push_back(
    std_vector_int_t * this_
    , int const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_size_t__ctor(
    std_vector_size_t_t * * this_)
{
    try {
        to_c(this_, new std::vector<size_t>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_size_t__copy(
    std_vector_size_t_t * * this_
    , std_vector_size_t_t const * rhs)
{
    try {
        to_c(this_, new std::vector<size_t>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_size_t__dtor(
    std_vector_size_t_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_size_t__size(
    std_vector_size_t_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_size_t__resize(
    std_vector_size_t_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_size_t__reserve(
    std_vector_size_t_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_size_t__index_mut(
    std_vector_size_t_t * this_
    , unsigned long * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_size_t__index(
    std_vector_size_t_t const * this_
    , unsigned long const * * return_
    , size_t pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_size_t__data(
    std_vector_size_t_t * this_
    , unsigned long * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_size_t__data_const(
    std_vector_size_t_t const * this_
    , unsigned long const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_size_t__push_back(
    std_vector_size_t_t * this_
    , unsigned long const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__ctor(
    std_UsdAttributeVector_t * * this_)
{
    try {
        to_c(this_, new std::vector<pxr::UsdAttribute>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__copy(
    std_UsdAttributeVector_t * * this_
    , std_UsdAttributeVector_t const * rhs)
{
    try {
        to_c(this_, new std::vector<pxr::UsdAttribute>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__dtor(
    std_UsdAttributeVector_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__size(
    std_UsdAttributeVector_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__resize(
    std_UsdAttributeVector_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__reserve(
    std_UsdAttributeVector_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__index_mut(
    std_UsdAttributeVector_t * this_
    , pxr_UsdAttribute_t * * return_
    , size_t pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__index(
    std_UsdAttributeVector_t const * this_
    , pxr_UsdAttribute_t const * * return_
    , size_t pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__data(
    std_UsdAttributeVector_t * this_
    , pxr_UsdAttribute_t * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__data_const(
    std_UsdAttributeVector_t const * this_
    , pxr_UsdAttribute_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__push_back(
    std_UsdAttributeVector_t * this_
    , pxr_UsdAttribute_t const * value)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__ctor(
    std_SdfPathVector_t * * this_)
{
    try {
        to_c(this_, new std::vector<pxr::SdfPath>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__copy(
    std_SdfPathVector_t * * this_
    , std_SdfPathVector_t const * rhs)
{
    try {
        to_c(this_, new std::vector<pxr::SdfPath>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__dtor(
    std_SdfPathVector_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__size(
    std_SdfPathVector_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__resize(
    std_SdfPathVector_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> resize(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__reserve(
    std_SdfPathVector_t * this_
    , size_t count)
{
    try {
        (to_cpp(this_)) -> reserve(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__index_mut(
    std_SdfPathVector_t * this_
    , pxr_SdfPath_t * * return_
    , size_t pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__index(
    std_SdfPathVector_t const * this_
    , pxr_SdfPath_t const * * return_
    , size_t pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__data(
    std_SdfPathVector_t * this_
    , pxr_SdfPath_t * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__data_const(
    std_SdfPathVector_t const * this_
    , pxr_SdfPath_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__push_back(
    std_SdfPathVector_t * this_
    , pxr_SdfPath_t const * value)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

