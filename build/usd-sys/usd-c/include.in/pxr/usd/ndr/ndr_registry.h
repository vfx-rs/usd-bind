#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

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


#ifdef __cplusplus
}
#endif
