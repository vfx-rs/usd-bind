#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____NdrProperty_t_s pxrInternal_v0_21__pxrReserved____NdrProperty_t;
typedef pxrInternal_v0_21__pxrReserved____NdrProperty_t pxr_NdrProperty_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** \class NdrNode

Represents an abstract node. Describes information like the name of the
node, what its inputs and outputs are, and any associated metadata.

In almost all cases, this class will not be used directly. More specialized
nodes can be created that derive from `NdrNode`; those specialized nodes can
add their own domain-specific data and methods. */
typedef struct pxrInternal_v0_21__pxrReserved____NdrNode_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrNode_t;
typedef pxrInternal_v0_21__pxrReserved____NdrNode_t pxr_NdrNode_t;


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_dtor(
    pxr_NdrNode_t * this_);
#define pxr_NdrNode_dtor pxrInternal_v0_21__pxrReserved____NdrNode_dtor


/** Return the identifier of the node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetIdentifier(
    pxr_NdrNode_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrNode_GetIdentifier pxrInternal_v0_21__pxrReserved____NdrNode_GetIdentifier


/** Gets the name of the node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetName(
    pxr_NdrNode_t const * this_
    , std_string_t const * * return_);
#define pxr_NdrNode_GetName pxrInternal_v0_21__pxrReserved____NdrNode_GetName


/** Gets the name of the family that the node belongs to. An empty token
will be returned if the node does not belong to a family. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetFamily(
    pxr_NdrNode_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrNode_GetFamily pxrInternal_v0_21__pxrReserved____NdrNode_GetFamily


/** Gets the context of the node.

The context is the context that the node declares itself as having (or,
if a particular node does not declare a context, it will be assigned a
default context by the parser).

As a concrete example from the `Sdr` library, a shader with a specific
source type may perform different duties vs. another shader with the
same source type. For example, one shader with a source type of
`SdrArgsParser::SourceType` may declare itself as having a context of
'pattern', while another shader of the same source type may say it is
used for lighting, and thus has a context of 'light'. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetContext(
    pxr_NdrNode_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrNode_GetContext pxrInternal_v0_21__pxrReserved____NdrNode_GetContext


/** Gets the type of source that this node originated from.

Note that this is distinct from `GetContext()`, which is the type that
the node declares itself as having.

As a concrete example from the `Sdr` library, several shader parsers
exist and operate on different types of shaders. In this scenario, each
distinct type of shader (OSL, Args, etc) is considered a different
_source_, even though they are all shaders. In addition, the shaders
under each source type may declare themselves as having a specific
context (shaders can serve different roles). See `GetContext()` for
more information on this. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetSourceType(
    pxr_NdrNode_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrNode_GetSourceType pxrInternal_v0_21__pxrReserved____NdrNode_GetSourceType


/** Gets the URI to the resource that provided this node's
definition. Could be a path to a file, or some other resource
identifier. This URI should be fully resolved.

\sa NdrNode::GetResolvedImplementationURI() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetResolvedDefinitionURI(
    pxr_NdrNode_t const * this_
    , std_string_t const * * return_);
#define pxr_NdrNode_GetResolvedDefinitionURI pxrInternal_v0_21__pxrReserved____NdrNode_GetResolvedDefinitionURI


/** Gets the URI to the resource that provides this node's
implementation. Could be a path to a file, or some other resource
identifier. This URI should be fully resolved.

\sa NdrNode::GetResolvedDefinitionURI() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetResolvedImplementationURI(
    pxr_NdrNode_t const * this_
    , std_string_t const * * return_);
#define pxr_NdrNode_GetResolvedImplementationURI pxrInternal_v0_21__pxrReserved____NdrNode_GetResolvedImplementationURI


/** Returns  the source code for this node. This will be empty for most 
nodes. It will be non-empty only for the nodes that are constructed 
using \ref NdrRegistry::GetNodeFromSourceCode(), in which case, the 
source code has not been parsed (or even compiled) yet. 

An unparsed node with non-empty source-code but no properties is 
considered to be invalid. Once the node is parsed and the relevant 
properties and metadata are extracted from the source code, the node 
becomes valid.

\sa NdrNode::IsValid */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetSourceCode(
    pxr_NdrNode_t const * this_
    , std_string_t const * * return_);
#define pxr_NdrNode_GetSourceCode pxrInternal_v0_21__pxrReserved____NdrNode_GetSourceCode


/** Whether or not this node is valid. A node that is valid indicates that
the parser plugin was able to successfully parse the contents of this
node.

Note that if a node is not valid, some data like its name, URI, source 
code etc. could still be available (data that was obtained during the 
discovery process). However, other data that must be gathered from the 
parsing process will NOT be available (eg, inputs and outputs). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_IsValid(
    pxr_NdrNode_t const * this_
    , _Bool * return_);
#define pxr_NdrNode_IsValid pxrInternal_v0_21__pxrReserved____NdrNode_IsValid


/** Gets a string with basic information about this node. Helpful for
things like adding this node to a log. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetInfoString(
    pxr_NdrNode_t const * this_
    , std_string_t * * return_);
#define pxr_NdrNode_GetInfoString pxrInternal_v0_21__pxrReserved____NdrNode_GetInfoString


/** Get an input property by name. `nullptr` is returned if an input with
the given name does not exist. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetInput(
    pxr_NdrNode_t const * this_
    , pxr_NdrProperty_t const * * return_
    , pxr_TfToken_t const * inputName);
#define pxr_NdrNode_GetInput pxrInternal_v0_21__pxrReserved____NdrNode_GetInput


/** Get an output property by name. `nullptr` is returned if an output with
the given name does not exist. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrNode_GetOutput(
    pxr_NdrNode_t const * this_
    , pxr_NdrProperty_t const * * return_
    , pxr_TfToken_t const * outputName);
#define pxr_NdrNode_GetOutput pxrInternal_v0_21__pxrReserved____NdrNode_GetOutput


#ifdef __cplusplus
}
#endif
