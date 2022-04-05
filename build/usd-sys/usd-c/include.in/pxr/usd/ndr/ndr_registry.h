#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfAssetPath_t_s pxrInternal_v0_21__pxrReserved____SdfAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAssetPath_t pxr_SdfAssetPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____NdrNode_t_s pxrInternal_v0_21__pxrReserved____NdrNode_t;
typedef pxrInternal_v0_21__pxrReserved____NdrNode_t pxr_NdrNode_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

/** \class NdrRegistry

The registry provides access to node information. "Discovery Plugins" are
responsible for finding the nodes that should be included in the registry.

Discovery plugins are found through the plugin system. If additional
discovery plugins need to be specified, a client can pass them to
`SetExtraDiscoveryPlugins()`.

When the registry is first told about the discovery plugins, the plugins
will be asked to discover nodes. These plugins will generate
`NdrNodeDiscoveryResult` instances, which only contain basic metadata. Once
the client asks for information that would require the node's contents to
be parsed (eg, what its inputs and outputs are), the registry will begin the
parsing process on an as-needed basis. See `NdrNodeDiscoveryResult` for the
information that can be retrieved without triggering a parse.

Some methods in this library may allow for a "family" to be provided. A
family is simply a generic grouping which is optional. */
typedef struct pxrInternal_v0_21__pxrReserved____NdrRegistry_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrRegistry_t;
typedef pxrInternal_v0_21__pxrReserved____NdrRegistry_t pxr_NdrRegistry_t;


/** Get the locations where the registry is searching for nodes.

Depending on which discovery plugins were used, this may include
non-filesystem paths. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrRegistry_GetSearchURIs(
    pxr_NdrRegistry_t const * this_
    , std_vector_string_t * * return_);
#define pxr_NdrRegistry_GetSearchURIs pxrInternal_v0_21__pxrReserved____NdrRegistry_GetSearchURIs


/** Get the names of all the nodes that the registry is aware of.

This will not run the parsing plugins on the nodes that have been
discovered, so this method is relatively quick. Optionally, a "family"
name can be specified to only get the names of nodes that belong to
that family. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeNames(
    pxr_NdrRegistry_t const * this_
    , std_vector_string_t * * return_
    , pxr_TfToken_t const * family);
#define pxr_NdrRegistry_GetNodeNames pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeNames


/** Get the node with the specified \p identifier and \p sourceType. If,
for the given sourceType, there is no node with the given identifier,
this will instead search for a node which has an alias that matches the 
identifier and return it if it exists. Otherwise there is no matching 
node for the sourceType and nullptr is returned.

\sa NdrNodeDiscoveryResult::aliases */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeByIdentifierAndType(
    pxr_NdrRegistry_t * this_
    , pxr_NdrNode_t const * * return_
    , pxr_TfToken_t const * identifier
    , pxr_TfToken_t const * sourceType);
#define pxr_NdrRegistry_GetNodeByIdentifierAndType pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeByIdentifierAndType


#ifdef __cplusplus
}
#endif
