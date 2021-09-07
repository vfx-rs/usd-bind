#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_20__pxrReserved____TfToken_t_s pxrInternal_v0_20__pxrReserved____TfToken_t;
typedef pxrInternal_v0_20__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class SdfPath 

A path value used to locate objects in layers or scenegraphs.

\section sec_SdfPath_Overview Overview

SdfPath is used in several ways:
\li As a storage key for addressing and accessing values held in a SdfLayer
\li As a namespace identity for scenegraph objects
\li As a way to refer to other scenegraph objects through relative paths

The paths represented by an SdfPath class may be either relative or
absolute.  Relative paths are relative to the prim object that contains them
(that is, if an SdfRelationshipSpec target is relative, it is relative to
the SdfPrimSpec object that owns the SdfRelationshipSpec object).

SdfPath objects can be readily created from and converted back to strings,
but as SdfPath objects, they have behaviors that make it easy and efficient
to work with them. The SdfPath class provides a full range of methods for
manipulating scene paths by appending a namespace child, appending a
relationship target, getting the parent path,
and so on.  Since the SdfPath class uses a node-based representation
internally, you should use the editing functions rather than converting to
and from strings if possible.

\section sec_SdfPath_Syntax Path Syntax

Like a filesystem path, an SdfPath is conceptually just a sequence of
path components.  Unlike a filesystem path, each component has a type,
and the type is indicated by the syntax.

Two separators are used between parts of a path. A slash ("/") following an
identifier is used to introduce a namespace child. A period (".") following
an identifier is used to introduce a property.  A property may also have
several non-sequential colons (':') in its name to provide a rudimentary
namespace within properties but may not end or begin with a colon.

A leading slash in the string representation of an SdfPath object indicates
an absolute path.  Two adjacent periods indicate the parent namespace.

Brackets ("[" and "]") are used to indicate relationship target paths for
relational attributes.

The first part in a path is assumed to be a namespace child unless
it is preceded by a period.  That means:
\li <c>/Foo</c> is an absolute path specifying the root prim Foo.
\li <c>/Foo/Bar</c> is an absolute path specifying namespace child Bar
    of root prim Foo.
\li <c>/Foo/Bar.baz</c> is an absolute path specifying property \c baz of
    namespace child Bar of root prim Foo.
\li <c>Foo</c> is a relative path specifying namespace child Foo of
    the current prim.
\li <c>Foo/Bar</c> is a relative path specifying namespace child Bar of
    namespace child Foo of the current prim.
\li <c>Foo/Bar.baz</c> is a relative path specifying property \c baz of
    namespace child Bar of namespace child Foo of the current prim.
\li <c>.foo</c> is a relative path specifying the property \c foo of the
    current prim.
\li <c>/Foo.bar[/Foo.baz].attrib</c> is a relational attribute path. The
    relationship <c>/Foo.bar</c> has a target <c>/Foo.baz</c>. There is a
    relational attribute \c attrib on that relationship-&gt;target pair.

\section sec_SdfPath_ThreadSafety A Note on Thread-Safety

SdfPath is strongly thread-safe, in the sense that zero additional
synchronization is required between threads creating or using SdfPath
values. Just like TfToken, SdfPath values are immutable. Internally,
SdfPath uses a global prefix tree to efficiently share representations
of paths, and provide fast equality/hashing operations, but
modifications to this table are internally synchronized. Consequently,
as with TfToken, for best performance it is important to minimize
the number of values created (since it requires synchronized access to
this table) or copied (since it requires atomic ref-counting operations). */
typedef struct pxrInternal_v0_20__pxrReserved____SdfPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(4) pxrInternal_v0_20__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_20__pxrReserved____SdfPath_t pxr_SdfPath_t;


/** The empty path value, equivalent to SdfPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_EmptyPath(
    pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_EmptyPath pxrInternal_v0_20__pxrReserved____SdfPath_EmptyPath


/** The absolute path representing the top of the
namespace hierarchy. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_AbsoluteRootPath(
    pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_AbsoluteRootPath pxrInternal_v0_20__pxrReserved____SdfPath_AbsoluteRootPath


/** The relative path representing "self". */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ReflexiveRelativePath(
    pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_ReflexiveRelativePath pxrInternal_v0_20__pxrReserved____SdfPath_ReflexiveRelativePath


/** Constructs the default, empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ctor(
    pxr_SdfPath_t * * this_);
#define pxr_SdfPath_ctor pxrInternal_v0_20__pxrReserved____SdfPath_ctor


/** Creates a path from the given string.

If the given string is not a well-formed path, this will raise
a Tf error.  Note that passing an empty std::string() will also
raise an error; the correct way to get the empty path is SdfPath().

Internal dot-dots will be resolved by removing the first dot-dot,
the element preceding it, and repeating until no internal dot-dots
remain.

Note that most often new paths are expected to be created by
asking existing paths to return modified versions of themselves. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_from_string(
    pxr_SdfPath_t * * this_
    , std_string_t const * path);
#define pxr_SdfPath_from_string pxrInternal_v0_20__pxrReserved____SdfPath_from_string


/** Returns the number of path elements in this path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_GetPathElementCount(
    pxr_SdfPath_t const * this_
    , size_t * return_);
#define pxr_SdfPath_GetPathElementCount pxrInternal_v0_20__pxrReserved____SdfPath_GetPathElementCount


/** Returns whether the path is absolute. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsolutePath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsAbsolutePath pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsolutePath


/** Return true if this path is the AbsoluteRootPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsAbsoluteRootPath pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootPath


/** Returns whether the path identifies a prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimPath pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPath


/** Returns whether the path identifies a prim or the absolute root. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsAbsoluteRootOrPrimPath pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath


/** Returns whether the path identifies a root prim.

the path must be absolute and have a single element
(for example <c>/foo</c>). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsRootPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsRootPrimPath pxrInternal_v0_20__pxrReserved____SdfPath_IsRootPrimPath


/** Returns whether the path identifies a property.

A relational attribute is considered to be a property, so this
method will return true for relational attributes as well
as properties of prims. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPropertyPath pxrInternal_v0_20__pxrReserved____SdfPath_IsPropertyPath


/** Returns whether the path identifies a prim's property.

A relational attribute is not a prim property. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimPropertyPath pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPropertyPath


/** Returns whether the path identifies a namespaced property.

A namespaced property has colon embedded in its name. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsNamespacedPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsNamespacedPropertyPath pxrInternal_v0_20__pxrReserved____SdfPath_IsNamespacedPropertyPath


/** Returns whether the path identifies a variant selection for a
prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimVariantSelectionPath pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimVariantSelectionPath


/** Return true if this path is a prim path or is a prim variant
selection path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimOrPrimVariantSelectionPath pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath


/** Returns whether the path or any of its parent paths identifies
a variant selection for a prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPrimVariantSelection(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_ContainsPrimVariantSelection pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPrimVariantSelection


/** Return true if this path contains any property elements, false
otherwise.  A false return indicates a prim-like path, specifically a
root path, a prim path, or a prim variant selection path.  A true return
indicates a property-like path: a prim property path, a target path, a
relational attribute path, etc. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPropertyElements(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_ContainsPropertyElements pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPropertyElements


/** Return true if this path is or has a prefix that's a target path or a
mapper path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ContainsTargetPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_ContainsTargetPath pxrInternal_v0_20__pxrReserved____SdfPath_ContainsTargetPath


/** Returns whether the path identifies a relational attribute.

If this is true, IsPropertyPath() will also be true. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsRelationalAttributePath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsRelationalAttributePath pxrInternal_v0_20__pxrReserved____SdfPath_IsRelationalAttributePath


/** Returns whether the path identifies a relationship or
connection target. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsTargetPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsTargetPath pxrInternal_v0_20__pxrReserved____SdfPath_IsTargetPath


/** Returns whether the path identifies a connection mapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsMapperPath pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperPath


/** Returns whether the path identifies a connection mapper arg. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperArgPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsMapperArgPath pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperArgPath


/** Returns whether the path identifies a connection expression. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsExpressionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsExpressionPath pxrInternal_v0_20__pxrReserved____SdfPath_IsExpressionPath


/** Returns true if this is the empty path (SdfPath::EmptyPath()). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsEmpty(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsEmpty pxrInternal_v0_20__pxrReserved____SdfPath_IsEmpty


/** Returns the string representation of this path as a TfToken. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_GetToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfPath_GetToken pxrInternal_v0_20__pxrReserved____SdfPath_GetToken


/** Returns the string representation of this path as a c string. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_GetText(
    pxr_SdfPath_t const * this_
    , char const * * return_);
#define pxr_SdfPath_GetText pxrInternal_v0_20__pxrReserved____SdfPath_GetText


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_copy(
    pxr_SdfPath_t * * this_
    , pxr_SdfPath_t const * rhs);
#define pxr_SdfPath_copy pxrInternal_v0_20__pxrReserved____SdfPath_copy


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_dtor(
    pxr_SdfPath_t * this_);
#define pxr_SdfPath_dtor pxrInternal_v0_20__pxrReserved____SdfPath_dtor


#ifdef __cplusplus
}
#endif
