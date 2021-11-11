#include "std_map_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int std__map_std__string_std__string__ctor(
    std_map_string_string_t * * this_)
{
    try {
        to_c(this_, new std::map<std::string, std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__map_std__string_std__string__copy(
    std_map_string_string_t * * this_
    , std_map_string_string_t const * rhs)
{
    try {
        to_c(this_, new std::map<std::string, std::string>(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__map_std__string_std__string__dtor(
    std_map_string_string_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int std__map_std__string_std__string__size(
    std_map_string_string_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

USD_CPPMM_API unsigned int std__map_std__string_std__string__index_mut(
    std_map_string_string_t * this_
    , std_string_t * * return_
    , std_string_t const * key)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

