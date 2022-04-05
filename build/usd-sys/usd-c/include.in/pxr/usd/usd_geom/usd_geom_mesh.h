#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____UsdTimeCode_t_s pxrInternal_v0_21__pxrReserved____UsdTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____UsdTimeCode_t pxr_UsdTimeCode_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix4d_t_s pxrInternal_v0_21__pxrReserved____GfMatrix4d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix4d_t pxr_GfMatrix4d_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;

/** \class UsdGeomMesh

Encodes a mesh with optional subdivision properties and features.

As a point-based primitive, meshes are defined in terms of points that 
are connected into edges and faces. Many references to meshes use the
term 'vertex' in place of or interchangeably with 'points', while some
use 'vertex' to refer to the 'face-vertices' that define a face.  To
avoid confusion, the term 'vertex' is intentionally avoided in favor of
'points' or 'face-vertices'.

The connectivity between points, edges and faces is encoded using a
common minimal topological description of the faces of the mesh.  Each
face is defined by a set of face-vertices using indices into the Mesh's
_points_ array (inherited from UsdGeomPointBased) and laid out in a
single linear _faceVertexIndices_ array for efficiency.  A companion
_faceVertexCounts_ array provides, for each face, the number of
consecutive face-vertices in _faceVertexIndices_ that define the face.
No additional connectivity information is required or constructed, so
no adjacency or neighborhood queries are available.

A key property of this mesh schema is that it encodes both subdivision
surfaces and simpler polygonal meshes. This is achieved by varying the
_subdivisionScheme_ attribute, which is set to specify Catmull-Clark
subdivision by default, so polygonal meshes must always be explicitly
declared. The available subdivision schemes and additional subdivision
features encoded in optional attributes conform to the feature set of
OpenSubdiv
(https://graphics.pixar.com/opensubdiv/docs/subdivision_surfaces.html).

\anchor UsdGeom_Mesh_Primvars
__A Note About Primvars__

The following list clarifies the number of elements for and the
interpolation behavior of the different primvar interpolation types
for meshes:

- __constant__: One element for the entire mesh; no interpolation.
- __uniform__: One element for each face of the mesh; elements are
typically not interpolated but are inherited by other faces derived
from a given face (via subdivision, tessellation, etc.).
- __varying__: One element for each point of the mesh;
interpolation of point data is always linear.
- __vertex__: One element for each point of the mesh;
interpolation of point data is applied according to the
_subdivisionScheme_ attribute.
- __faceVarying__: One element for each of the face-vertices that
define the mesh topology; interpolation of face-vertex data may
be smooth or linear, according to the _subdivisionScheme_ and
_faceVaryingLinearInterpolation_ attributes.

Primvar interpolation types and related utilities are described more
generally in \ref Usd_InterpolationVals.

\anchor UsdGeom_Mesh_Normals
__A Note About Normals__

Normals should not be authored on a subdivision mesh, since subdivision
algorithms define their own normals. They should only be authored for
polygonal meshes (_subdivisionScheme_ = "none").

The _normals_ attribute inherited from UsdGeomPointBased is not a generic
primvar, but the number of elements in this attribute will be determined by
its _interpolation_.  See \ref UsdGeomPointBased::GetNormalsInterpolation() .
If _normals_ and _primvars:normals_ are both specified, the latter has
precedence.  If a polygonal mesh specifies __neither__ _normals_ nor
_primvars:normals_, then it should be treated and rendered as faceted,
with no attempt to compute smooth normals.

The normals generated for smooth subdivision schemes, e.g. Catmull-Clark
and Loop, will likewise be smooth, but others, e.g. Bilinear, may be
discontinuous between faces and/or within non-planar irregular faces.

For any described attribute \em Fallback \em Value or \em Allowed \em Values below
that are text/tokens, the actual token is published and defined in \ref UsdGeomTokens.
So to set an attribute to the value "rightHanded", use UsdGeomTokens->rightHanded
as the value. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdGeomMesh_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdGeomMesh_t;
typedef pxrInternal_v0_21__pxrReserved____UsdGeomMesh_t pxr_UsdGeomMesh_t;


/** Returns whether or not this class corresponds to a concrete instantiable
prim type in scene description.  If this is true,
GetStaticPrimDefinition() will return a valid prim definition with
a non-empty typeName. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsConcrete(
    pxr_UsdGeomMesh_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomMesh_IsConcrete pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsConcrete


/** Returns whether or not this class inherits from UsdTyped. Types which
inherit from UsdTyped can impart a typename on a UsdPrim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsTyped(
    pxr_UsdGeomMesh_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomMesh_IsTyped pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsTyped


/** Returns whether this is an API schema or not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAPISchema(
    pxr_UsdGeomMesh_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomMesh_IsAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAPISchema


/** Returns whether this is an applied API schema or not. If this returns
true this class will have an Apply() method */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAppliedAPISchema(
    pxr_UsdGeomMesh_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomMesh_IsAppliedAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAppliedAPISchema


/** Returns whether this is an applied API schema or not. If this returns
true the constructor, Get and Apply methods of this class will take
in the name of the API schema instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsMultipleApplyAPISchema(
    pxr_UsdGeomMesh_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomMesh_IsMultipleApplyAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsMultipleApplyAPISchema


/** Return this schema object's held prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPrim(
    pxr_UsdGeomMesh_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdGeomMesh_GetPrim pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPrim


/** Shorthand for GetPrim()->GetPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPath(
    pxr_UsdGeomMesh_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_UsdGeomMesh_GetPath pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPath


/** Compute the transformation matrix for this prim at the given time,
including the transform authored on the Prim itself, if present.

<b>If you need to compute the transform for multiple prims on a
stage, it will be much, much more efficient to instantiate a
UsdGeomXformCache and query it directly; doing so will reuse
sub-computations shared by the prims.</b> */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_ComputeLocalToWorldTransform(
    pxr_UsdGeomMesh_t const * this_
    , pxr_GfMatrix4d_t * return_
    , pxr_UsdTimeCode_t const * time);
#define pxr_UsdGeomMesh_ComputeLocalToWorldTransform pxrInternal_v0_21__pxrReserved____UsdGeomMesh_ComputeLocalToWorldTransform


/** Construct a UsdGeomMesh on UsdPrim \p prim .
Equivalent to UsdGeomMesh::Get(prim.GetStage(), prim.GetPath())
for a \em valid \p prim, but will not immediately throw an error for
an invalid \p prim */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_from_prim(
    pxr_UsdGeomMesh_t * * this_
    , pxr_UsdPrim_t const * prim);
#define pxr_UsdGeomMesh_from_prim pxrInternal_v0_21__pxrReserved____UsdGeomMesh_from_prim


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_dtor(
    pxr_UsdGeomMesh_t * this_);
#define pxr_UsdGeomMesh_dtor pxrInternal_v0_21__pxrReserved____UsdGeomMesh_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_copy(
    pxr_UsdGeomMesh_t * * this_
    , pxr_UsdGeomMesh_t const * rhs);
#define pxr_UsdGeomMesh_copy pxrInternal_v0_21__pxrReserved____UsdGeomMesh_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh__assign(
    pxr_UsdGeomMesh_t * this_
    , pxr_UsdGeomMesh_t * * return_
    , pxr_UsdGeomMesh_t const * rhs);
#define pxr_UsdGeomMesh__assign pxrInternal_v0_21__pxrReserved____UsdGeomMesh__assign


#ifdef __cplusplus
}
#endif
