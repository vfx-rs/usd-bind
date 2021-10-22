#pragma once
#include "usd-api-export.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

typedef struct std__map_std__string_std__string__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;


USD_CPPMM_API unsigned int std__map_std__string_std__string__ctor(
    std_map_string_string_t * * this_);
#define std_map_string_string_ctor std__map_std__string_std__string__ctor


USD_CPPMM_API unsigned int std__map_std__string_std__string__copy(
    std_map_string_string_t * * this_
    , std_map_string_string_t const * rhs);
#define std_map_string_string_copy std__map_std__string_std__string__copy


USD_CPPMM_API unsigned int std__map_std__string_std__string__dtor(
    std_map_string_string_t * this_);
#define std_map_string_string_dtor std__map_std__string_std__string__dtor


USD_CPPMM_API unsigned int std__map_std__string_std__string__size(
    std_map_string_string_t const * this_
    , size_t * return_);
#define std_map_string_string_size std__map_std__string_std__string__size


USD_CPPMM_API unsigned int std__map_std__string_std__string__index_mut(
    std_map_string_string_t * this_
    , std_string_t * * return_
    , std_string_t const * key);
#define std_map_string_string_index_mut std__map_std__string_std__string__index_mut


#ifdef __cplusplus
}
#endif
