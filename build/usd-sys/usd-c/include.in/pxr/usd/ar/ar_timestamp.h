#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class ArTimestamp
Represents a timestamp for an asset. Timestamps are represented by
Unix time, the number of seconds elapsed since 00:00:00 UTC 1/1/1970. */
typedef struct pxrInternal_v0_21__pxrReserved____ArTimestamp_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArTimestamp_t;
typedef pxrInternal_v0_21__pxrReserved____ArTimestamp_t pxr_ArTimestamp_t;


/** Create an invalid timestamp. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor(
    pxr_ArTimestamp_t * * this_);
#define pxr_ArTimestamp_ctor pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor


/** Create a timestamp at \p time, which must be a Unix time value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor_1(
    pxr_ArTimestamp_t * * this_
    , double time);
#define pxr_ArTimestamp_ctor_1 pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor_1


/** Return true if this timestamp is valid, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_IsValid(
    pxr_ArTimestamp_t const * this_
    , _Bool * return_);
#define pxr_ArTimestamp_IsValid pxrInternal_v0_21__pxrReserved____ArTimestamp_IsValid


/** Return the time represented by this timestamp as a double.
If this timestamp is invalid, issue a coding error and
return a quiet NaN value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArTimestamp_GetTime(
    pxr_ArTimestamp_t const * this_
    , double * return_);
#define pxr_ArTimestamp_GetTime pxrInternal_v0_21__pxrReserved____ArTimestamp_GetTime


#ifdef __cplusplus
}
#endif
