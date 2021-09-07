#pragma once
#include "usd-api-export.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__string_t;
typedef std__string_t std_string_t;


USD_CPPMM_API unsigned int std__string_ctor(
    std_string_t * * this_);
#define std_string_ctor std__string_ctor


USD_CPPMM_API unsigned int std__string_copy(
    std_string_t * * this_
    , std_string_t const * rhs);
#define std_string_copy std__string_copy


USD_CPPMM_API unsigned int std__string_dtor(
    std_string_t * this_);
#define std_string_dtor std__string_dtor


USD_CPPMM_API unsigned int std__string_assign(
    std_string_t * this_
    , std_string_t * * return_
    , char const * s
    , size_t count);
#define std_string_assign std__string_assign


USD_CPPMM_API unsigned int std__string_c_str(
    std_string_t const * this_
    , char const * * return_);
#define std_string_c_str std__string_c_str


#ifdef __cplusplus
}
#endif
