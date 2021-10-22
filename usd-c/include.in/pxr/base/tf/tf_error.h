#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class TfError
\ingroup group_tf_Diagnostic

Represents an object that contains error information.

See \ref page_tf_Diagnostic in the C++ API reference for a detailed
description of the error issuing API.  For a example of how to post an
error, see \c TF_ERROR(), also in the C++ API reference.

In the Python API, you can raise several different types of errors,
including coding errors (Tf.RaiseCodingError), run time errors
(Tf.RaiseRuntimeError), fatal errors (Tf.Fatal). */
typedef struct pxrInternal_v0_20__pxrReserved____TfError_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_20__pxrReserved____TfError_t;
typedef pxrInternal_v0_20__pxrReserved____TfError_t pxr_TfError_t;


/** Return the diagnostic code posted as a string. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfError_GetErrorCodeAsString(
    pxr_TfError_t const * this_
    , std_string_t const * * return_);
#define pxr_TfError_GetErrorCodeAsString pxrInternal_v0_20__pxrReserved____TfError_GetErrorCodeAsString


#ifdef __cplusplus
}
#endif
