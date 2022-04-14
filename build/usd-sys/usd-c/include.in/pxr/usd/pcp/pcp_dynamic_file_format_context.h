#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;

/** \class PcpDynamicFileFormatContext

Context object for the current state of a prim index that is being built
that allows implementations of PcpDynamicFileFormatInterface to compose
field values when generating dynamic file format arguments. The context 
allows us to iterate over all nodes that have already been composed looking
for the strongest opinion for a relevant field.  */
typedef struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t;
typedef pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t pxr_PcpDynamicFileFormatContext_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_dtor(
    pxr_PcpDynamicFileFormatContext_t * this_);
#define pxr_PcpDynamicFileFormatContext_dtor pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_dtor


/** Compose the \p value of the given \p field and return its current 
strongest opinion. For dictionary valued fields this will be a 
dictionary containing the strongest value for each individual key. 
Returns true if a value for the field was found.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_ComposeValue(
    pxr_PcpDynamicFileFormatContext_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * field
    , pxr_VtValue_t * value);
#define pxr_PcpDynamicFileFormatContext_ComposeValue pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_ComposeValue


#ifdef __cplusplus
}
#endif
