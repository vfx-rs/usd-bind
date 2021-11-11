#pragma once
#include <std_type_info.h>


#include "usd-errors-private.h"

#include <cstring>
#include <typeinfo>

inline std::type_info const & to_cpp_ref(
    std_type_info_t const * rhs)
{
        return *(reinterpret_cast<std::type_info const * >(rhs));
}

inline std::type_info & to_cpp_ref(
    std_type_info_t * rhs)
{
        return *(reinterpret_cast<std::type_info * >(rhs));
}

inline std::type_info const * to_cpp(
    std_type_info_t const * rhs)
{
        return reinterpret_cast<std::type_info const * >(rhs);
}

inline std::type_info * to_cpp(
    std_type_info_t * rhs)
{
        return reinterpret_cast<std::type_info * >(rhs);
}

inline void to_c(
    std_type_info_t const * * lhs
    , std::type_info const & rhs)
{
        *(lhs) = reinterpret_cast<std_type_info_t const * >(&(rhs));
}

inline void to_c(
    std_type_info_t const * * lhs
    , std::type_info const * rhs)
{
        *(lhs) = reinterpret_cast<std_type_info_t const * >(rhs);
}

inline void to_c(
    std_type_info_t * * lhs
    , std::type_info & rhs)
{
        *(lhs) = reinterpret_cast<std_type_info_t * >(&(rhs));
}

inline void to_c(
    std_type_info_t * * lhs
    , std::type_info * rhs)
{
        *(lhs) = reinterpret_cast<std_type_info_t * >(rhs);
}

