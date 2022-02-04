#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** \class NdrParserPlugin

Interface for parser plugins.

Parser plugins take a `NdrNodeDiscoveryResult` from the discovery process
and creates a full `NdrNode` instance (or, in the case of a real-world
scenario, a specialized node that derives from `NdrNode`). The parser that
is selected to run is ultimately decided by the registry, and depends on the
`NdrNodeDiscoveryResult`'s `discoveryType` member. A parser plugin's
`GetDiscoveryTypes()` method is how this link is made. If a discovery result
has a `discoveryType` of 'foo', and `SomeParserPlugin` has 'foo' included
in its `GetDiscoveryTypes()` return value, `SomeParserPlugin` will parse
that discovery result.

Another kind of 'type' within the parser plugin is the 'source type'. The
discovery type simply acts as a way to link a discovery result to a parser
plugin. On the other hand, a 'source type' acts as an umbrella type that
groups all of the discovery types together. For example, if a plugin handled
discovery types 'foo', 'bar', and 'baz' (which are all related because they
are all handled by the same parser), they may all be grouped under one
unifying source type. This type is available on the node via
`NdrNode::GetSourceType()`.

\section create How to Create a Parser Plugin
There are three steps to creating a parser plugin:
<ul>
    <li>
        Implement the parser plugin interface. An example parser plugin is
        available in the plugin folder under `sdrOsl`. The `Parse()` method
        should return the specialized node that derives from `NdrNode` (and
        this node should also be constructed with its specialized
        properties). Examples of a specialized node and property class are
        `SdrShaderNode` and `SdrShaderProperty`.
    </li>
    <li>
        Register your new plugin with the registry. The registration macro
        must be called in your plugin's implementation file:
        \code{.cpp}
        NDR_REGISTER_PARSER_PLUGIN(<YOUR_PARSER_PLUGIN_CLASS_NAME>)
        \endcode
        This macro is available in parserPlugin.h.
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
                            "bases": ["NdrParserPlugin"],
                            "displayName": "YOUR_DISPLAY_NAME"
                        }
                    }
                }
            }]
        }
        \endcode

        The SDR ships with one parser plugin, the `SdrOslParserPlugin`. Take
        a look at its plugInfo.json file for example values for
        `YOUR_LIBRARY_NAME`, `YOUR_CLASS_NAME`, and `YOUR_DISPLAY_NAME`. If
        multiple parser plugins exist in the same folder, you can continue
        adding additional plugins under the `Types` key in the JSON. More
        detailed information about the plugInfo.json format can be found in
        the documentation for the `plug` library (in pxr/base).
    </li>
</ul> */
typedef struct pxrInternal_v0_21__pxrReserved____NdrParserPlugin_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrParserPlugin_t;
typedef pxrInternal_v0_21__pxrReserved____NdrParserPlugin_t pxr_NdrParserPlugin_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrParserPlugin_dtor(
    pxr_NdrParserPlugin_t * this_);
#define pxr_NdrParserPlugin_dtor pxrInternal_v0_21__pxrReserved____NdrParserPlugin_dtor


/** Returns the source type that this parser operates on.

A source type is the most general type for a node. The parser plugin is
responsible for parsing all discovery results that have the types
declared under `GetDiscoveryTypes()`, and those types are collectively
identified as one "source type". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrParserPlugin_GetSourceType(
    pxr_NdrParserPlugin_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrParserPlugin_GetSourceType pxrInternal_v0_21__pxrReserved____NdrParserPlugin_GetSourceType


#ifdef __cplusplus
}
#endif
