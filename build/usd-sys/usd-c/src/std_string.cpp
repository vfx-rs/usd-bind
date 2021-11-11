#include "std_string_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int std__string_ctor(
    std_string_t * * this_)
{
        to_c(this_, new std::string());
        return 0;
}

USD_CPPMM_API unsigned int std__string_copy(
    std_string_t * * this_
    , std_string_t const * rhs)
{
    try {
        to_c(this_, new std::string(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__string_dtor(
    std_string_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__string_assign(
    std_string_t * this_
    , std_string_t * * return_
    , char const * s
    , size_t count)
{
    try {
        to_c(return_, (to_cpp(this_)) -> assign(s, count));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__string_c_str(
    std_string_t const * this_
    , char const * * return_)
{
        *(return_) = (to_cpp(this_)) -> c_str();
        return 0;
}

