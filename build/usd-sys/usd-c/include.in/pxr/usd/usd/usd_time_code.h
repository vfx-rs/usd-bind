#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfTimeCode_t_s pxrInternal_v0_21__pxrReserved____SdfTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTimeCode_t pxr_SdfTimeCode_t;

/** \class UsdTimeCode

Represent a time value, which may be either numeric, holding a double
value, or a sentinel value UsdTimeCode::Default().

A UsdTimeCode does \em not represent an 
<a href="https://en.wikipedia.org/wiki/SMPTE_timecode">SMPTE timecode</a>,
although we may, in future, support conversion functions between the two.
Instead, UsdTimeCode is an abstraction that acknowledges that in the 
principal domains of use for USD, there are many different ways of encoding 
time, and USD must be able to capture and translate between all of them for
interchange, retaining as much intent of the authoring application as 
possible.

A UsdTimeCode is therefore a unitless, generic time measurement that serves 
as the ordinate for time-sampled data in USD files.  A client of USD relies 
on the UsdStage (which in turn consults metadata authored in its root layer)
to define the mapping of TimeCodes to units like seconds and frames. 

\sa UsdStage::GetStartTimeCode()
\sa UsdStage::GetEndTimeCode()
\sa UsdStage::GetTimeCodesPerSecond()
\sa UsdStage::GetFramesPerSecond()

As described in \ref Usd_ValueResolution , USD optionally provides an
unvarying, 'default' value for every attribute.  UsdTimeCode embodies a time
value that can either be a floating-point sample time, or the default.

All UsdAttribute and derived API that requires a time parameter defaults
to UsdTimeCode::Default() if the parameter is left unspecified, and 
auto-constructs from a floating-point argument.

UsdTimeCode::EarliestTime() is provided to aid clients who wish
to retrieve the first authored timesample for any attribute. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdTimeCode_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::UsdTimeCode%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::UsdTimeCode%) pxrInternal_v0_21__pxrReserved____UsdTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____UsdTimeCode_t pxr_UsdTimeCode_t;


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_sizeof();
#define pxr_UsdTimeCode_sizeof pxrInternal_v0_21__pxrReserved____UsdTimeCode_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_alignof();
#define pxr_UsdTimeCode_alignof pxrInternal_v0_21__pxrReserved____UsdTimeCode_alignof


/** Construct with optional time value.  Impilicitly convert from double. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_ctor(
    pxr_UsdTimeCode_t * this_
    , double t);
#define pxr_UsdTimeCode_ctor pxrInternal_v0_21__pxrReserved____UsdTimeCode_ctor


/** Construct and implicitly cast from SdfTimeCode. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_from_SdfTimeCode(
    pxr_UsdTimeCode_t * this_
    , pxr_SdfTimeCode_t const * timeCode);
#define pxr_UsdTimeCode_from_SdfTimeCode pxrInternal_v0_21__pxrReserved____UsdTimeCode_from_SdfTimeCode


/** Produce a UsdTimeCode representing the lowest/earliest possible
timeCode.  Thus, for any given timeSample \em s, its time ordinate 
\em t will obey: t >= UsdTimeCode::EarliestTime()

This is useful for clients that wish to retrieve the first authored 
timeSample for an attribute, as they can use UsdTimeCode::EarliestTime()
as the \em time argument to UsdAttribute::Get() and 
UsdAttribute::GetBracketingTimeSamples() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_EarliestTime(
    pxr_UsdTimeCode_t * return_);
#define pxr_UsdTimeCode_EarliestTime pxrInternal_v0_21__pxrReserved____UsdTimeCode_EarliestTime


/** Produce a UsdTimeCode representing the sentinel value for 'default'.

\note In inequality comparisons, Default() is considered less than any
numeric TimeCode, including EarliestTime(), indicative of the fact that
in UsdAttribute value resolution, the sample at Default() (if any) is
always weaker than any numeric timeSample in the same layer.  For
more information, see \ref Usd_ValueResolution */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_Default(
    pxr_UsdTimeCode_t * return_);
#define pxr_UsdTimeCode_Default pxrInternal_v0_21__pxrReserved____UsdTimeCode_Default


/** Produce a safe step value such that for any numeric UsdTimeCode t in
[-maxValue, maxValue], t +/- (step / maxCompression) != t with a safety
factor of 2.  This is shorthand for
std::numeric_limits<double>::epsilon() * maxValue * maxCompression *
2.0.  Such a step value is recommended for simulating jump
discontinuities in time samples.  For example, author value x at time t,
and value y at time t + SafeStep().  This ensures that as the sample
times are shifted and scaled, t and t + SafeStep() remain distinct so
long as they adhere to the \p maxValue and \p maxCompression limits. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_SafeStep(
    double * return_
    , double maxValue
    , double maxCompression);
#define pxr_UsdTimeCode_SafeStep pxrInternal_v0_21__pxrReserved____UsdTimeCode_SafeStep


/** Return true if this time represents the lowest/earliest possible
timeCode, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsEarliestTime(
    pxr_UsdTimeCode_t const * this_
    , _Bool * return_);
#define pxr_UsdTimeCode_IsEarliestTime pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsEarliestTime


/** Return true if this time represents the 'default' sentinel value, false
otherwise.  This is equivalent to !IsNumeric(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsDefault(
    pxr_UsdTimeCode_t const * this_
    , _Bool * return_);
#define pxr_UsdTimeCode_IsDefault pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsDefault


/** Return true if this time represents a numeric value, false otherwise.
This is equivalent to !IsDefault(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsNumeric(
    pxr_UsdTimeCode_t const * this_
    , _Bool * return_);
#define pxr_UsdTimeCode_IsNumeric pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsNumeric


/** Return the numeric value for this time.  If this time \a IsDefault(),
return a quiet NaN value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_GetValue(
    pxr_UsdTimeCode_t const * this_
    , double * return_);
#define pxr_UsdTimeCode_GetValue pxrInternal_v0_21__pxrReserved____UsdTimeCode_GetValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_copy(
    pxr_UsdTimeCode_t * this_
    , pxr_UsdTimeCode_t const * rhs);
#define pxr_UsdTimeCode_copy pxrInternal_v0_21__pxrReserved____UsdTimeCode_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdTimeCode_dtor(
    pxr_UsdTimeCode_t * this_);
#define pxr_UsdTimeCode_dtor pxrInternal_v0_21__pxrReserved____UsdTimeCode_dtor


#ifdef __cplusplus
}
#endif
