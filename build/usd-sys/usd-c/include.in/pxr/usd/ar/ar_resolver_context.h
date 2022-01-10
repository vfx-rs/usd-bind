#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class ArResolverContext

An asset resolver context allows clients to provide additional data
to the resolver for use during resolution. Clients may provide this
data via context objects of their own (subject to restrictions below).
An ArResolverContext is simply a wrapper around these objects that
allows it to be treated as a single type. Note that an ArResolverContext
may not hold multiple context objects with the same type.

A client-defined context object must provide the following:
  - Default and copy constructors
  - operator<
  - operator==
  - An overload for size_t hash_value(const T&)

Note that the user may define a free function:

std::string ArGetDebugString(const Context& ctx);
(Where Context is the type of the user's path resolver context.)

This is optional; a default generic implementation has been predefined.
This function should return a string representation of the context
to be utilized for debugging purposes(such as in TF_DEBUG statements).

The ArIsContextObject template must also be specialized for this
object to declare that it can be used as a context object. This is to 
avoid accidental use of an unexpected object as a context object.
The AR_DECLARE_RESOLVER_CONTEXT macro can be used to do this
as a convenience.

\sa AR_DECLARE_RESOLVER_CONTEXT
\sa ArResolver::BindContext
\sa ArResolver::UnbindContext
\sa ArResolverContextBinder */
typedef struct pxrInternal_v0_21__pxrReserved____ArResolverContext_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArResolverContext_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverContext_t pxr_ArResolverContext_t;


#ifdef __cplusplus
}
#endif
