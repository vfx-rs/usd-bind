#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfSite_t_s pxrInternal_v0_21__pxrReserved____SdfSite_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSite_t pxr_SdfSite_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfHasField(
    _Bool * return_
    , pxr_SdfSite_t const * site
    , pxr_TfToken_t const * field);
#define pxr_SdfHasField pxrInternal_v0_21__pxrReserved___SdfHasField


#ifdef __cplusplus
}
#endif
