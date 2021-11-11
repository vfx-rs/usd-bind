#include "std_type_info_private.h"


#include <stdexcept>

USD_CPPMM_API unsigned int std__type_info__eq(
    std_type_info_t const * this_
    , _Bool * return_
    , std_type_info_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
}

