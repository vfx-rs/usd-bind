#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** A context for discovery.  Discovery plugins can use this to get
a limited set of non-local information without direct coupling
between plugins. */
typedef struct pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_t;
typedef pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_t pxr_NdrDiscoveryPluginContext_t;

/** \class NdrDiscoveryPlugin

Interface for discovery plugins.

Discovery plugins, like the name implies, find nodes. Where the plugin
searches is up to the plugin that implements this interface. Examples
of discovery plugins could include plugins that look for nodes on the
filesystem, another that finds nodes in a cloud service, and another that
searches a local database. Multiple discovery plugins that search the
filesystem in specific locations/ways could also be created. All discovery
plugins are executed as soon as the registry is instantiated.

These plugins simply report back to the registry what nodes they found in
a generic way. The registry doesn't know much about the innards of the
nodes yet, just that the nodes exist. Understanding the nodes is the
responsibility of another set of plugins defined by the `NdrParserPlugin`
interface.

Discovery plugins report back to the registry via `NdrNodeDiscoveryResult`s.
These are small, lightweight classes that contain the information for a
single node that was found during discovery. The discovery result only
includes node information that can be gleaned pre-parse, so the data is
fairly limited; to see exactly what's included, and what is expected to
be populated, see the documentation for `NdrNodeDiscoveryResult`.

\section create How to Create a Discovery Plugin
There are three steps to creating a discovery plugin:
<ul>
    <li>
        Implement the discovery plugin interface, `NdrDiscoveryPlugin`
    </li>
    <li>
        Register your new plugin with the registry. The registration macro
        must be called in your plugin's implementation file:
        \code{.cpp}
        NDR_REGISTER_DISCOVERY_PLUGIN(YOUR_DISCOVERY_PLUGIN_CLASS_NAME)
        \endcode
        This macro is available in discoveryPlugin.h.
    </li>
    <li>
        In the same folder as your plugin, create a `plugInfo.json` file.
        This file must be formatted like so, substituting
        `YOUR_LIBRARY_NAME`, `YOUR_CLASS_NAME`, and `YOUR_DISPLAY_NAME`:
        \code{.json}
        {
            "Plugins": [{
                "Type": "library",
                "Name": "YOUR_LIBRARY_NAME",
                "Root": "@PLUG_INFO_ROOT@",
                "LibraryPath": "@PLUG_INFO_LIBRARY_PATH@",
                "ResourcePath": "@PLUG_INFO_RESOURCE_PATH@",
                "Info": {
                    "Types": {
                        "YOUR_CLASS_NAME" : {
                            "bases": ["NdrDiscoveryPlugin"],
                            "displayName": "YOUR_DISPLAY_NAME"
                        }
                    }
                }
            }]
        }
        \endcode

        The NDR ships with one discovery plugin, the
        `_NdrFilesystemDiscoveryPlugin`. Take a look at NDR's plugInfo.json
        file for example values for `YOUR_LIBRARY_NAME`, `YOUR_CLASS_NAME`,
        and `YOUR_DISPLAY_NAME`. If multiple discovery plugins exist in the
        same folder, you can continue adding additional plugins under the
        `Types` key in the JSON. More detailed information about the
        plugInfo.json format can be found in the documentation for the
        `plug` library (in pxr/base).
    </li>
</ul> */
typedef struct pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_t;
typedef pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_t pxr_NdrDiscoveryPlugin_t;


/** Returns the source type associated with the discovery type.
This may return an empty token if there is no such association. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_GetSourceType(
    pxr_NdrDiscoveryPluginContext_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * discoveryType);
#define pxr_NdrDiscoveryPluginContext_GetSourceType pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_GetSourceType


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_dtor(
    pxr_NdrDiscoveryPlugin_t * this_);
#define pxr_NdrDiscoveryPlugin_dtor pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_dtor


/** Gets the URIs that this plugin is searching for nodes in. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_GetSearchURIs(
    pxr_NdrDiscoveryPlugin_t const * this_
    , std_vector_string_t const * * return_);
#define pxr_NdrDiscoveryPlugin_GetSearchURIs pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_GetSearchURIs


#ifdef __cplusplus
}
#endif
