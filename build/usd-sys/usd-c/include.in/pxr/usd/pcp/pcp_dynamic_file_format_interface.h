#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t_s pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t;
typedef pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t pxr_PcpDynamicFileFormatContext_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class PcpDynamicFileFormatInterface

Interface mixin that can be included by SdfFileFormat subclasses to enable
dynamic file format argument generation for a file format plugin.
When prim index composition encounters a payload to an asset of a file 
format that implements this interface, it will call 
ComposeFieldsForFileFormatArguments to generate arguments from the current
composition context at which the payload is being added. The derived file
format is on the hook for using the provided context to compute any prim
field values it needs and generate the relevant file format arguments for
its content. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_t;
typedef pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_t pxr_PcpDynamicFileFormatInterface_t;


/** Empty virtual destructor to prevent build errors with some compilers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_dtor(
    pxr_PcpDynamicFileFormatInterface_t * this_);
#define pxr_PcpDynamicFileFormatInterface_dtor pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_dtor


/** Derived classes must implement this function to compose prim fields 
using the given \p context and use them to generate file format 
arguments for the layer at \p assetPath. The context provides methods 
to compose field values at the current point in prim index composition
which can be used to generate the relevant file format arguments. These
arguments need to be added to the set of file format arguments provided 
by \p args. 

Additionally, implementations can output \p dependencyContextData of
any value type that will then be passed back in to calls to 
CanFieldChangeAffectFileFormatArguments during change processing.
This can be used to provide more that context that is specific to the
file format when determining whether a field change really does affect 
the arguments generated by a particular call to this function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_ComposeFieldsForFileFormatArguments(
    pxr_PcpDynamicFileFormatInterface_t const * this_
    , std_string_t const * assetPath
    , pxr_PcpDynamicFileFormatContext_t const * context
    , std_map_string_string_t * args
    , pxr_VtValue_t * dependencyContextData);
#define pxr_PcpDynamicFileFormatInterface_ComposeFieldsForFileFormatArguments pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_ComposeFieldsForFileFormatArguments


/** Derived classes must implement this function to return true if the 
change to scene description of the field named \p field can affect the 
dynamic file format arguments generated by 
ComposeFieldsForFileFormatArguments. This function will be called during 
change processing to determine whether a change to a field affects 
the dynamic file format arguments of a payload that a prim index depends
on.

\p oldValue and \p newValue contain the old and new values of the field.
\p dependencyContextData is the arbitrary typed data that was generated
by the call to ComposeFieldsForFileFormatArguments when the payload arc
was computed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_CanFieldChangeAffectFileFormatArguments(
    pxr_PcpDynamicFileFormatInterface_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * field
    , pxr_VtValue_t const * oldValue
    , pxr_VtValue_t const * newValue
    , pxr_VtValue_t const * dependencyContextData);
#define pxr_PcpDynamicFileFormatInterface_CanFieldChangeAffectFileFormatArguments pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_CanFieldChangeAffectFileFormatArguments


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface__assign(
    pxr_PcpDynamicFileFormatInterface_t * this_
    , pxr_PcpDynamicFileFormatInterface_t * * return_
    , pxr_PcpDynamicFileFormatInterface_t const * rhs);
#define pxr_PcpDynamicFileFormatInterface__assign pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface__assign


#ifdef __cplusplus
}
#endif
