#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__type_info_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__type_info_t;
typedef std__type_info_t std_type_info_t;


USD_CPPMM_API unsigned int std__type_info__eq(
    std_type_info_t const * this_
    , _Bool * return_
    , std_type_info_t const * rhs);
#define std_type_info__eq std__type_info__eq


#ifdef __cplusplus
}
#endif
