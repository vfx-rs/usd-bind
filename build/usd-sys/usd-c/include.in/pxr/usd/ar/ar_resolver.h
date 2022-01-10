#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class ArResolver

Interface for the asset resolution system. An asset resolver is 
responsible for resolving asset information (including the asset's
physical path) from a logical path.

See \ref ar_implementing_resolver for information on how to customize
asset resolution behavior by implementing a subclass of ArResolver.
Clients may use #ArGetResolver to access the configured asset resolver. */
typedef struct pxrInternal_v0_21__pxrReserved____ArResolver_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArResolver_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolver_t pxr_ArResolver_t;


#ifdef __cplusplus
}
#endif
