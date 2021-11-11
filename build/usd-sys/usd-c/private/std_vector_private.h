#pragma once
#include <std_vector.h>


#include "usd-errors-private.h"

#include <cstddef>
#include <cstring>
#include <pxr/usd/sdf/path.h>
#include <pxr/usd/usd/attribute.h>
#include <string>
#include <vector>

inline std::vector<std::string> const & to_cpp_ref(
    std_vector_string_t const * rhs)
{
        return *(reinterpret_cast<std::vector<std::string> const * >(rhs));
}

inline std::vector<std::string> & to_cpp_ref(
    std_vector_string_t * rhs)
{
        return *(reinterpret_cast<std::vector<std::string> * >(rhs));
}

inline std::vector<std::string> const * to_cpp(
    std_vector_string_t const * rhs)
{
        return reinterpret_cast<std::vector<std::string> const * >(rhs);
}

inline std::vector<std::string> * to_cpp(
    std_vector_string_t * rhs)
{
        return reinterpret_cast<std::vector<std::string> * >(rhs);
}

inline void to_c(
    std_vector_string_t const * * lhs
    , std::vector<std::string> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t const * >(&(rhs));
}

inline void to_c(
    std_vector_string_t const * * lhs
    , std::vector<std::string> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t const * >(rhs);
}

inline void to_c(
    std_vector_string_t * * lhs
    , std::vector<std::string> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t * >(&(rhs));
}

inline void to_c(
    std_vector_string_t * * lhs
    , std::vector<std::string> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t * >(rhs);
}

inline void to_c_copy(
    std_vector_string_t * * lhs
    , std::vector<std::string> const & rhs)
{
        std__vector_std__string__copy(lhs, reinterpret_cast<std_vector_string_t const * >(&(rhs)));
}

inline std::vector<char> const & to_cpp_ref(
    std_vector_char_t const * rhs)
{
        return *(reinterpret_cast<std::vector<char> const * >(rhs));
}

inline std::vector<char> & to_cpp_ref(
    std_vector_char_t * rhs)
{
        return *(reinterpret_cast<std::vector<char> * >(rhs));
}

inline std::vector<char> const * to_cpp(
    std_vector_char_t const * rhs)
{
        return reinterpret_cast<std::vector<char> const * >(rhs);
}

inline std::vector<char> * to_cpp(
    std_vector_char_t * rhs)
{
        return reinterpret_cast<std::vector<char> * >(rhs);
}

inline void to_c(
    std_vector_char_t const * * lhs
    , std::vector<char> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_char_t const * >(&(rhs));
}

inline void to_c(
    std_vector_char_t const * * lhs
    , std::vector<char> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_char_t const * >(rhs);
}

inline void to_c(
    std_vector_char_t * * lhs
    , std::vector<char> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_char_t * >(&(rhs));
}

inline void to_c(
    std_vector_char_t * * lhs
    , std::vector<char> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_char_t * >(rhs);
}

inline void to_c_copy(
    std_vector_char_t * * lhs
    , std::vector<char> const & rhs)
{
        std__vector_char__copy(lhs, reinterpret_cast<std_vector_char_t const * >(&(rhs)));
}

inline std::vector<unsigned char> const & to_cpp_ref(
    std_vector_uchar_t const * rhs)
{
        return *(reinterpret_cast<std::vector<unsigned char> const * >(rhs));
}

inline std::vector<unsigned char> & to_cpp_ref(
    std_vector_uchar_t * rhs)
{
        return *(reinterpret_cast<std::vector<unsigned char> * >(rhs));
}

inline std::vector<unsigned char> const * to_cpp(
    std_vector_uchar_t const * rhs)
{
        return reinterpret_cast<std::vector<unsigned char> const * >(rhs);
}

inline std::vector<unsigned char> * to_cpp(
    std_vector_uchar_t * rhs)
{
        return reinterpret_cast<std::vector<unsigned char> * >(rhs);
}

inline void to_c(
    std_vector_uchar_t const * * lhs
    , std::vector<unsigned char> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_uchar_t const * >(&(rhs));
}

inline void to_c(
    std_vector_uchar_t const * * lhs
    , std::vector<unsigned char> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_uchar_t const * >(rhs);
}

inline void to_c(
    std_vector_uchar_t * * lhs
    , std::vector<unsigned char> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_uchar_t * >(&(rhs));
}

inline void to_c(
    std_vector_uchar_t * * lhs
    , std::vector<unsigned char> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_uchar_t * >(rhs);
}

inline void to_c_copy(
    std_vector_uchar_t * * lhs
    , std::vector<unsigned char> const & rhs)
{
        std__vector_unsignedchar__copy(lhs, reinterpret_cast<std_vector_uchar_t const * >(&(rhs)));
}

inline std::vector<float> const & to_cpp_ref(
    std_vector_float_t const * rhs)
{
        return *(reinterpret_cast<std::vector<float> const * >(rhs));
}

inline std::vector<float> & to_cpp_ref(
    std_vector_float_t * rhs)
{
        return *(reinterpret_cast<std::vector<float> * >(rhs));
}

inline std::vector<float> const * to_cpp(
    std_vector_float_t const * rhs)
{
        return reinterpret_cast<std::vector<float> const * >(rhs);
}

inline std::vector<float> * to_cpp(
    std_vector_float_t * rhs)
{
        return reinterpret_cast<std::vector<float> * >(rhs);
}

inline void to_c(
    std_vector_float_t const * * lhs
    , std::vector<float> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t const * >(&(rhs));
}

inline void to_c(
    std_vector_float_t const * * lhs
    , std::vector<float> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t const * >(rhs);
}

inline void to_c(
    std_vector_float_t * * lhs
    , std::vector<float> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t * >(&(rhs));
}

inline void to_c(
    std_vector_float_t * * lhs
    , std::vector<float> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t * >(rhs);
}

inline void to_c_copy(
    std_vector_float_t * * lhs
    , std::vector<float> const & rhs)
{
        std__vector_float__copy(lhs, reinterpret_cast<std_vector_float_t const * >(&(rhs)));
}

inline std::vector<double> const & to_cpp_ref(
    std_vector_double_t const * rhs)
{
        return *(reinterpret_cast<std::vector<double> const * >(rhs));
}

inline std::vector<double> & to_cpp_ref(
    std_vector_double_t * rhs)
{
        return *(reinterpret_cast<std::vector<double> * >(rhs));
}

inline std::vector<double> const * to_cpp(
    std_vector_double_t const * rhs)
{
        return reinterpret_cast<std::vector<double> const * >(rhs);
}

inline std::vector<double> * to_cpp(
    std_vector_double_t * rhs)
{
        return reinterpret_cast<std::vector<double> * >(rhs);
}

inline void to_c(
    std_vector_double_t const * * lhs
    , std::vector<double> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_double_t const * >(&(rhs));
}

inline void to_c(
    std_vector_double_t const * * lhs
    , std::vector<double> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_double_t const * >(rhs);
}

inline void to_c(
    std_vector_double_t * * lhs
    , std::vector<double> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_double_t * >(&(rhs));
}

inline void to_c(
    std_vector_double_t * * lhs
    , std::vector<double> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_double_t * >(rhs);
}

inline void to_c_copy(
    std_vector_double_t * * lhs
    , std::vector<double> const & rhs)
{
        std__vector_double__copy(lhs, reinterpret_cast<std_vector_double_t const * >(&(rhs)));
}

inline std::vector<int> const & to_cpp_ref(
    std_vector_int_t const * rhs)
{
        return *(reinterpret_cast<std::vector<int> const * >(rhs));
}

inline std::vector<int> & to_cpp_ref(
    std_vector_int_t * rhs)
{
        return *(reinterpret_cast<std::vector<int> * >(rhs));
}

inline std::vector<int> const * to_cpp(
    std_vector_int_t const * rhs)
{
        return reinterpret_cast<std::vector<int> const * >(rhs);
}

inline std::vector<int> * to_cpp(
    std_vector_int_t * rhs)
{
        return reinterpret_cast<std::vector<int> * >(rhs);
}

inline void to_c(
    std_vector_int_t const * * lhs
    , std::vector<int> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_int_t const * >(&(rhs));
}

inline void to_c(
    std_vector_int_t const * * lhs
    , std::vector<int> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_int_t const * >(rhs);
}

inline void to_c(
    std_vector_int_t * * lhs
    , std::vector<int> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_int_t * >(&(rhs));
}

inline void to_c(
    std_vector_int_t * * lhs
    , std::vector<int> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_int_t * >(rhs);
}

inline void to_c_copy(
    std_vector_int_t * * lhs
    , std::vector<int> const & rhs)
{
        std__vector_int__copy(lhs, reinterpret_cast<std_vector_int_t const * >(&(rhs)));
}

inline std::vector<size_t> const & to_cpp_ref(
    std_vector_size_t_t const * rhs)
{
        return *(reinterpret_cast<std::vector<size_t> const * >(rhs));
}

inline std::vector<size_t> & to_cpp_ref(
    std_vector_size_t_t * rhs)
{
        return *(reinterpret_cast<std::vector<size_t> * >(rhs));
}

inline std::vector<size_t> const * to_cpp(
    std_vector_size_t_t const * rhs)
{
        return reinterpret_cast<std::vector<size_t> const * >(rhs);
}

inline std::vector<size_t> * to_cpp(
    std_vector_size_t_t * rhs)
{
        return reinterpret_cast<std::vector<size_t> * >(rhs);
}

inline void to_c(
    std_vector_size_t_t const * * lhs
    , std::vector<size_t> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_size_t_t const * >(&(rhs));
}

inline void to_c(
    std_vector_size_t_t const * * lhs
    , std::vector<size_t> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_size_t_t const * >(rhs);
}

inline void to_c(
    std_vector_size_t_t * * lhs
    , std::vector<size_t> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_size_t_t * >(&(rhs));
}

inline void to_c(
    std_vector_size_t_t * * lhs
    , std::vector<size_t> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_size_t_t * >(rhs);
}

inline void to_c_copy(
    std_vector_size_t_t * * lhs
    , std::vector<size_t> const & rhs)
{
        std__vector_size_t__copy(lhs, reinterpret_cast<std_vector_size_t_t const * >(&(rhs)));
}

inline std::vector<pxr::UsdAttribute> const & to_cpp_ref(
    std_UsdAttributeVector_t const * rhs)
{
        return *(reinterpret_cast<std::vector<pxr::UsdAttribute> const * >(rhs));
}

inline std::vector<pxr::UsdAttribute> & to_cpp_ref(
    std_UsdAttributeVector_t * rhs)
{
        return *(reinterpret_cast<std::vector<pxr::UsdAttribute> * >(rhs));
}

inline std::vector<pxr::UsdAttribute> const * to_cpp(
    std_UsdAttributeVector_t const * rhs)
{
        return reinterpret_cast<std::vector<pxr::UsdAttribute> const * >(rhs);
}

inline std::vector<pxr::UsdAttribute> * to_cpp(
    std_UsdAttributeVector_t * rhs)
{
        return reinterpret_cast<std::vector<pxr::UsdAttribute> * >(rhs);
}

inline void to_c(
    std_UsdAttributeVector_t const * * lhs
    , std::vector<pxr::UsdAttribute> const & rhs)
{
        *(lhs) = reinterpret_cast<std_UsdAttributeVector_t const * >(&(rhs));
}

inline void to_c(
    std_UsdAttributeVector_t const * * lhs
    , std::vector<pxr::UsdAttribute> const * rhs)
{
        *(lhs) = reinterpret_cast<std_UsdAttributeVector_t const * >(rhs);
}

inline void to_c(
    std_UsdAttributeVector_t * * lhs
    , std::vector<pxr::UsdAttribute> & rhs)
{
        *(lhs) = reinterpret_cast<std_UsdAttributeVector_t * >(&(rhs));
}

inline void to_c(
    std_UsdAttributeVector_t * * lhs
    , std::vector<pxr::UsdAttribute> * rhs)
{
        *(lhs) = reinterpret_cast<std_UsdAttributeVector_t * >(rhs);
}

inline void to_c_copy(
    std_UsdAttributeVector_t * * lhs
    , std::vector<pxr::UsdAttribute> const & rhs)
{
        std__vector_pxr__UsdAttribute__copy(lhs, reinterpret_cast<std_UsdAttributeVector_t const * >(&(rhs)));
}

inline std::vector<pxr::SdfPath> const & to_cpp_ref(
    std_SdfPathVector_t const * rhs)
{
        return *(reinterpret_cast<std::vector<pxr::SdfPath> const * >(rhs));
}

inline std::vector<pxr::SdfPath> & to_cpp_ref(
    std_SdfPathVector_t * rhs)
{
        return *(reinterpret_cast<std::vector<pxr::SdfPath> * >(rhs));
}

inline std::vector<pxr::SdfPath> const * to_cpp(
    std_SdfPathVector_t const * rhs)
{
        return reinterpret_cast<std::vector<pxr::SdfPath> const * >(rhs);
}

inline std::vector<pxr::SdfPath> * to_cpp(
    std_SdfPathVector_t * rhs)
{
        return reinterpret_cast<std::vector<pxr::SdfPath> * >(rhs);
}

inline void to_c(
    std_SdfPathVector_t const * * lhs
    , std::vector<pxr::SdfPath> const & rhs)
{
        *(lhs) = reinterpret_cast<std_SdfPathVector_t const * >(&(rhs));
}

inline void to_c(
    std_SdfPathVector_t const * * lhs
    , std::vector<pxr::SdfPath> const * rhs)
{
        *(lhs) = reinterpret_cast<std_SdfPathVector_t const * >(rhs);
}

inline void to_c(
    std_SdfPathVector_t * * lhs
    , std::vector<pxr::SdfPath> & rhs)
{
        *(lhs) = reinterpret_cast<std_SdfPathVector_t * >(&(rhs));
}

inline void to_c(
    std_SdfPathVector_t * * lhs
    , std::vector<pxr::SdfPath> * rhs)
{
        *(lhs) = reinterpret_cast<std_SdfPathVector_t * >(rhs);
}

inline void to_c_copy(
    std_SdfPathVector_t * * lhs
    , std::vector<pxr::SdfPath> const & rhs)
{
        std__vector_pxr__SdfPath__copy(lhs, reinterpret_cast<std_SdfPathVector_t const * >(&(rhs)));
}

