#pragma once
#include <std_string.h>


#include "usd-errors-private.h"

#include <cstring>
#include <string>

inline std::string const & to_cpp_ref(
    std_string_t const * rhs)
{
        return *(reinterpret_cast<std::string const * >(rhs));
}

inline std::string & to_cpp_ref(
    std_string_t * rhs)
{
        return *(reinterpret_cast<std::string * >(rhs));
}

inline std::string const * to_cpp(
    std_string_t const * rhs)
{
        return reinterpret_cast<std::string const * >(rhs);
}

inline std::string * to_cpp(
    std_string_t * rhs)
{
        return reinterpret_cast<std::string * >(rhs);
}

inline void to_c(
    std_string_t const * * lhs
    , std::string const & rhs)
{
        *(lhs) = reinterpret_cast<std_string_t const * >(&(rhs));
}

inline void to_c(
    std_string_t const * * lhs
    , std::string const * rhs)
{
        *(lhs) = reinterpret_cast<std_string_t const * >(rhs);
}

inline void to_c(
    std_string_t * * lhs
    , std::string & rhs)
{
        *(lhs) = reinterpret_cast<std_string_t * >(&(rhs));
}

inline void to_c(
    std_string_t * * lhs
    , std::string * rhs)
{
        *(lhs) = reinterpret_cast<std_string_t * >(rhs);
}

inline void to_c_copy(
    std_string_t * * lhs
    , std::string const & rhs)
{
        std__string_copy(lhs, reinterpret_cast<std_string_t const * >(&(rhs)));
}

