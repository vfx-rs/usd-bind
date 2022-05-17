#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_t pxr_Sdf_PrimChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_t pxr_Sdf_PropertyChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_t pxr_Sdf_AttributeChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_t pxr_Sdf_RelationshipChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_t pxr_Sdf_MapperArgChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_t pxr_Sdf_ExpressionChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_t pxr_Sdf_VariantChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_t pxr_Sdf_VariantSetChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_t pxr_Sdf_MapperChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_t pxr_Sdf_AttributeConnectionChildPolicy_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_t pxr_Sdf_RelationshipTargetChildPolicy_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_PrimChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_PrimChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_PrimChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_PrimChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_PrimChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_PropertyChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_PropertyChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_PropertyChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_PropertyChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_PropertyChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_AttributeChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_AttributeChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_AttributeChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_AttributeChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_AttributeChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_RelationshipChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_RelationshipChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_RelationshipChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_RelationshipChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_RelationshipChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_MapperArgChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_MapperArgChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_MapperArgChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_MapperArgChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_MapperArgChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_ExpressionChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_ExpressionChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_ExpressionChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_ExpressionChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_ExpressionChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_VariantChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_VariantChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_VariantChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_VariantChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_VariantChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_VariantSetChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_VariantSetChildPolicy_GetFieldValue pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetFieldValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_VariantSetChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key);
#define pxr_Sdf_VariantSetChildPolicy_GetChildPath pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_VariantSetChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_MapperChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_MapperChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_MapperChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_AttributeConnectionChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_AttributeConnectionChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_AttributeConnectionChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetChildrenToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath);
#define pxr_Sdf_RelationshipTargetChildPolicy_GetParentPath pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetParentPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_Sdf_RelationshipTargetChildPolicy_IsValidIdentifier pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath);
#define pxr_Sdf_RelationshipTargetChildPolicy_GetChildrenToken pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetChildrenToken


#ifdef __cplusplus
}
#endif
