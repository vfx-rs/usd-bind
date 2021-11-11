#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class GfMatrix2f
\ingroup group_gf_LinearAlgebra

Stores a 2x2 matrix of \c float elements. A basic type.

Matrices are defined to be in row-major order, so <c>matrix[i][j]</c>
indexes the element in the \e i th row and the \e j th column. */
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix2f_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfMatrix2f%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfMatrix2f%) pxrInternal_v0_21__pxrReserved____GfMatrix2f_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix2f_t pxr_GfMatrix2f_t;

/** \class GfMatrix2d
\ingroup group_gf_LinearAlgebra

Stores a 2x2 matrix of \c double elements. A basic type.

Matrices are defined to be in row-major order, so <c>matrix[i][j]</c>
indexes the element in the \e i th row and the \e j th column. */
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix2d_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfMatrix2d%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfMatrix2d%) pxrInternal_v0_21__pxrReserved____GfMatrix2d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix2d_t pxr_GfMatrix2d_t;

/** \class GfMatrix3f
\ingroup group_gf_LinearAlgebra

Stores a 3x3 matrix of \c float elements. A basic type.

Matrices are defined to be in row-major order, so <c>matrix[i][j]</c>
indexes the element in the \e i th row and the \e j th column.

<h3>3D Transformations</h3>

Three methods, SetRotate(), SetScale(), and ExtractRotation(), interpret
a GfMatrix3f as a 3D transformation. By convention, vectors are treated
primarily as row vectors, implying the following:

\li Transformation matrices are organized to deal with row
       vectors, not column vectors.
\li Each of the Set() methods in this class completely rewrites the
       matrix; for example, SetRotate() yields a matrix
       which does nothing but rotate.
\li When multiplying two transformation matrices, the matrix
       on the left applies a more local transformation to a row
       vector. For example, if R represents a rotation
       matrix and S represents a scale matrix, the
       product R*S  will rotate a row vector, then scale
       it. */
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix3f_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfMatrix3f%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfMatrix3f%) pxrInternal_v0_21__pxrReserved____GfMatrix3f_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix3f_t pxr_GfMatrix3f_t;

/** \class GfMatrix3d
\ingroup group_gf_LinearAlgebra

Stores a 3x3 matrix of \c double elements. A basic type.

Matrices are defined to be in row-major order, so <c>matrix[i][j]</c>
indexes the element in the \e i th row and the \e j th column.

<h3>3D Transformations</h3>

Three methods, SetRotate(), SetScale(), and ExtractRotation(), interpret
a GfMatrix3d as a 3D transformation. By convention, vectors are treated
primarily as row vectors, implying the following:

\li Transformation matrices are organized to deal with row
       vectors, not column vectors.
\li Each of the Set() methods in this class completely rewrites the
       matrix; for example, SetRotate() yields a matrix
       which does nothing but rotate.
\li When multiplying two transformation matrices, the matrix
       on the left applies a more local transformation to a row
       vector. For example, if R represents a rotation
       matrix and S represents a scale matrix, the
       product R*S  will rotate a row vector, then scale
       it. */
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix3d_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfMatrix3d%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfMatrix3d%) pxrInternal_v0_21__pxrReserved____GfMatrix3d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix3d_t pxr_GfMatrix3d_t;

/** \class GfMatrix4f
\ingroup group_gf_LinearAlgebra

Stores a 4x4 matrix of \c float elements. A basic type.

Matrices are defined to be in row-major order, so <c>matrix[i][j]</c>
indexes the element in the \e i th row and the \e j th column.

<h3>3D Transformations</h3>

The following methods interpret a GfMatrix4f as a 3D
transformation: SetRotate(), SetScale(), SetTranslate(), SetLookAt(),
Factor(), ExtractTranslation(), ExtractRotation(), Transform(), TransformDir().
By convention, vectors are treated primarily as row vectors,
implying the following:
\li Transformation matrices are organized to deal with row
       vectors, not column vectors. For example, the last row of a matrix
       contains the translation amounts.
\li Each of the Set() methods below completely rewrites the
       matrix; for example, SetTranslate() yields a matrix
       which does nothing but translate.
\li When multiplying two transformation matrices, the matrix
       on the left applies a more local transformation to a row
       vector. For example, if R represents a rotation
       matrix and T represents a translation matrix, the
       product R*T will rotate a row vector, then translate
       it. */
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix4f_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfMatrix4f%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfMatrix4f%) pxrInternal_v0_21__pxrReserved____GfMatrix4f_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix4f_t pxr_GfMatrix4f_t;

/** \class GfMatrix4d
\ingroup group_gf_LinearAlgebra

Stores a 4x4 matrix of \c double elements. A basic type.

Matrices are defined to be in row-major order, so <c>matrix[i][j]</c>
indexes the element in the \e i th row and the \e j th column.

<h3>3D Transformations</h3>

The following methods interpret a GfMatrix4d as a 3D
transformation: SetRotate(), SetScale(), SetTranslate(), SetLookAt(),
Factor(), ExtractTranslation(), ExtractRotation(), Transform(), TransformDir().
By convention, vectors are treated primarily as row vectors,
implying the following:
\li Transformation matrices are organized to deal with row
       vectors, not column vectors. For example, the last row of a matrix
       contains the translation amounts.
\li Each of the Set() methods below completely rewrites the
       matrix; for example, SetTranslate() yields a matrix
       which does nothing but translate.
\li When multiplying two transformation matrices, the matrix
       on the left applies a more local transformation to a row
       vector. For example, if R represents a rotation
       matrix and T represents a translation matrix, the
       product R*T will rotate a row vector, then translate
       it. */
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix4d_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfMatrix4d%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfMatrix4d%) pxrInternal_v0_21__pxrReserved____GfMatrix4d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix4d_t pxr_GfMatrix4d_t;


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix2f_sizeof();
#define pxr_GfMatrix2f_sizeof pxrInternal_v0_21__pxrReserved____GfMatrix2f_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix2f_alignof();
#define pxr_GfMatrix2f_alignof pxrInternal_v0_21__pxrReserved____GfMatrix2f_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix2d_sizeof();
#define pxr_GfMatrix2d_sizeof pxrInternal_v0_21__pxrReserved____GfMatrix2d_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix2d_alignof();
#define pxr_GfMatrix2d_alignof pxrInternal_v0_21__pxrReserved____GfMatrix2d_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix3f_sizeof();
#define pxr_GfMatrix3f_sizeof pxrInternal_v0_21__pxrReserved____GfMatrix3f_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix3f_alignof();
#define pxr_GfMatrix3f_alignof pxrInternal_v0_21__pxrReserved____GfMatrix3f_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix3d_sizeof();
#define pxr_GfMatrix3d_sizeof pxrInternal_v0_21__pxrReserved____GfMatrix3d_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix3d_alignof();
#define pxr_GfMatrix3d_alignof pxrInternal_v0_21__pxrReserved____GfMatrix3d_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix4f_sizeof();
#define pxr_GfMatrix4f_sizeof pxrInternal_v0_21__pxrReserved____GfMatrix4f_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix4f_alignof();
#define pxr_GfMatrix4f_alignof pxrInternal_v0_21__pxrReserved____GfMatrix4f_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix4d_sizeof();
#define pxr_GfMatrix4d_sizeof pxrInternal_v0_21__pxrReserved____GfMatrix4d_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfMatrix4d_alignof();
#define pxr_GfMatrix4d_alignof pxrInternal_v0_21__pxrReserved____GfMatrix4d_alignof


#ifdef __cplusplus
}
#endif
