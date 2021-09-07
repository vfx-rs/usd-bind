#[repr(transparent)] 
pub struct Exception(u32);

impl Exception {
    pub fn into_result(self) -> Result<(), Error> {
        match self.0 {
            0 => {
                Ok(())
            }

            std::u32::MAX => {
                let s = unsafe { std::ffi::CStr::from_ptr(usd_get_exception_string()).to_string_lossy().to_string()};
                panic!("Unhandled exception: {}", s)
            }
            _ => {
                let s = unsafe { std::ffi::CStr::from_ptr(usd_get_exception_string()).to_string_lossy().to_string()};
                panic!("Unexpected exception value: {} - {}", self.0, s)
            }
        }
    }
}

#[derive(Debug, PartialEq)]
pub enum Error {
}

impl std::error::Error for Error {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        None
    }
}

use std::fmt;
impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {

        Ok(())
    }
}
extern {
    pub fn usd_get_exception_string() -> *const std::os::raw::c_char;
}

pub use pxr::base::tf::ref_ptr::pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__t as pxr_UsdStageRefPtr_t;

pub use pxr::base::tf::ref_ptr::pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__copy as pxr_UsdStageRefPtr_copy;
pub use pxr::base::tf::ref_ptr::pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__dtor as pxr_UsdStageRefPtr_dtor;
pub use pxr::base::tf::ref_ptr::pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__deref as pxr_UsdStageRefPtr_deref;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_t as pxr_TfToken_t;

pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken___ImmortalTag_e as pxr_TfToken__ImmortalTag;
pub use pxr::base::tf::c_token::pxr_TfToken__ImmortalTag_Immortal;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_sizeof as pxr_TfToken_sizeof;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_alignof as pxr_TfToken_alignof;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_ctor as pxr_TfToken_ctor;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_copy as pxr_TfToken_copy;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_dtor as pxr_TfToken_dtor;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_from_string as pxr_TfToken_from_string;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_string as pxr_TfToken_immortal_from_string;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_from_char_ptr as pxr_TfToken_from_char_ptr;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_char_ptr as pxr_TfToken_immortal_from_char_ptr;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_Find as pxr_TfToken_Find;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_Hash as pxr_TfToken_Hash;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_size as pxr_TfToken_size;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_GetText as pxr_TfToken_GetText;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_data as pxr_TfToken_data;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_GetString as pxr_TfToken_GetString;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_Swap as pxr_TfToken_Swap;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken__eq as pxr_TfToken__eq;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_eq_c_str as pxr_TfToken_eq_c_str;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_IsEmpty as pxr_TfToken_IsEmpty;
pub use pxr::base::tf::c_token::pxrInternal_v0_20__pxrReserved____TfToken_IsImmortal as pxr_TfToken_IsImmortal;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_t as pxr_TfType_t;

pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_ctor as pxr_TfType_ctor;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_GetUnknownType as pxr_TfType_GetUnknownType;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_IsA as pxr_TfType_IsA;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_IsUnknown as pxr_TfType_IsUnknown;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_IsRoot as pxr_TfType_IsRoot;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_IsEnumType as pxr_TfType_IsEnumType;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_IsPlainOldDataType as pxr_TfType_IsPlainOldDataType;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_GetSizeof as pxr_TfType_GetSizeof;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_copy as pxr_TfType_copy;
pub use pxr::base::tf::c_type::pxrInternal_v0_20__pxrReserved____TfType_dtor as pxr_TfType_dtor;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__t as pxr_SdfLayerHandle_t;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__t as pxr_UsdStagePtr_t;

pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__deref as pxr_SdfLayerHandle_deref;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__ctor as pxr_SdfLayerHandle_ctor;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__copy as pxr_SdfLayerHandle_copy;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__IsExpired as pxr_SdfLayerHandle_IsExpired;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__dtor as pxr_SdfLayerHandle_dtor;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__deref as pxr_UsdStagePtr_deref;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__ctor as pxr_UsdStagePtr_ctor;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__copy as pxr_UsdStagePtr_copy;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__IsExpired as pxr_UsdStagePtr_IsExpired;
pub use pxr::base::tf::weak_ptr::pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__dtor as pxr_UsdStagePtr_dtor;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_t as pxr_UsdGeomSphere_t;

pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_IsConcrete as pxr_UsdGeomSphere_IsConcrete;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_IsTyped as pxr_UsdGeomSphere_IsTyped;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_IsAPISchema as pxr_UsdGeomSphere_IsAPISchema;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_IsAppliedAPISchema as pxr_UsdGeomSphere_IsAppliedAPISchema;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_IsMultipleApplyAPISchema as pxr_UsdGeomSphere_IsMultipleApplyAPISchema;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_Define as pxr_UsdGeomSphere_Define;
pub use pxr::usd::usd_geom::c_sphere::pxrInternal_v0_20__pxrReserved____UsdGeomSphere_copy as pxr_UsdGeomSphere_copy;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_t as pxr_UsdGeomXform_t;

pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsConcrete as pxr_UsdGeomXform_IsConcrete;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsTyped as pxr_UsdGeomXform_IsTyped;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsAPISchema as pxr_UsdGeomXform_IsAPISchema;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsAppliedAPISchema as pxr_UsdGeomXform_IsAppliedAPISchema;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsMultipleApplyAPISchema as pxr_UsdGeomXform_IsMultipleApplyAPISchema;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_GetPrim as pxr_UsdGeomXform_GetPrim;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_GetPath as pxr_UsdGeomXform_GetPath;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_Define as pxr_UsdGeomXform_Define;
pub use pxr::usd::usd_geom::c_xform::pxrInternal_v0_20__pxrReserved____UsdGeomXform_copy as pxr_UsdGeomXform_copy;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_t as pxr_SdfLayer_t;

pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetCurrentCount as pxr_SdfLayer_GetCurrentCount;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_IsUnique as pxr_SdfLayer_IsUnique;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_dtor as pxr_SdfLayer_dtor;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_IsAnonymous as pxr_SdfLayer_IsAnonymous;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier as pxr_SdfLayer_IsAnonymousLayerIdentifier;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier as pxr_SdfLayer_GetDisplayNameFromIdentifier;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_ComputeRealPath as pxr_SdfLayer_ComputeRealPath;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_Save as pxr_SdfLayer_Save;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetDisplayName as pxr_SdfLayer_GetDisplayName;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetRealPath as pxr_SdfLayer_GetRealPath;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetFileExtension as pxr_SdfLayer_GetFileExtension;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetVersion as pxr_SdfLayer_GetVersion;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetRepositoryPath as pxr_SdfLayer_GetRepositoryPath;
pub use pxr::usd::sdf::c_layer::pxrInternal_v0_20__pxrReserved____SdfLayer_GetAssetName as pxr_SdfLayer_GetAssetName;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_t as pxr_SdfPath_t;

pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_EmptyPath as pxr_SdfPath_EmptyPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_AbsoluteRootPath as pxr_SdfPath_AbsoluteRootPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_ReflexiveRelativePath as pxr_SdfPath_ReflexiveRelativePath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_ctor as pxr_SdfPath_ctor;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_from_string as pxr_SdfPath_from_string;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_GetPathElementCount as pxr_SdfPath_GetPathElementCount;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsolutePath as pxr_SdfPath_IsAbsolutePath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootPath as pxr_SdfPath_IsAbsoluteRootPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPath as pxr_SdfPath_IsPrimPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath as pxr_SdfPath_IsAbsoluteRootOrPrimPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsRootPrimPath as pxr_SdfPath_IsRootPrimPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsPropertyPath as pxr_SdfPath_IsPropertyPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPropertyPath as pxr_SdfPath_IsPrimPropertyPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsNamespacedPropertyPath as pxr_SdfPath_IsNamespacedPropertyPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimVariantSelectionPath as pxr_SdfPath_IsPrimVariantSelectionPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath as pxr_SdfPath_IsPrimOrPrimVariantSelectionPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPrimVariantSelection as pxr_SdfPath_ContainsPrimVariantSelection;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPropertyElements as pxr_SdfPath_ContainsPropertyElements;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_ContainsTargetPath as pxr_SdfPath_ContainsTargetPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsRelationalAttributePath as pxr_SdfPath_IsRelationalAttributePath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsTargetPath as pxr_SdfPath_IsTargetPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperPath as pxr_SdfPath_IsMapperPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperArgPath as pxr_SdfPath_IsMapperArgPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsExpressionPath as pxr_SdfPath_IsExpressionPath;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_IsEmpty as pxr_SdfPath_IsEmpty;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_GetToken as pxr_SdfPath_GetToken;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_GetText as pxr_SdfPath_GetText;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_copy as pxr_SdfPath_copy;
pub use pxr::usd::sdf::c_path::pxrInternal_v0_20__pxrReserved____SdfPath_dtor as pxr_SdfPath_dtor;
pub use pxr::usd::sdf::declare_handles::pxrInternal_v0_20__pxrReserved____Sdf_CastAccess_t as pxr_Sdf_CastAccess_t;

pub use pxr::usd::sdf::declare_handles::pxrInternal_v0_20__pxrReserved___SdfCreateHandle as pxr_SdfCreateHandle;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term_t as pxr_Usd_Term_t;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_t as pxr_Usd_PrimFlagsPredicate_t;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_t as pxr_Usd_PrimFlagsConjunction_t;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_t as pxr_Usd_PrimFlagsDisjunction_t;

pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlags_e as pxr_Usd_PrimFlags;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimActiveFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimLoadedFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimModelFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimGroupFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimAbstractFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimDefinedFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimHasDefiningSpecifierFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimInstanceFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimHasPayloadFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimClipsFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimDeadFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimMasterFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimInstanceProxyFlag;
pub use pxr::usd::usd::prim_flags::pxr_Usd_PrimFlags_Usd_PrimNumFlags;
pub use pxr::usd::usd::prim_flags::Usd_PrimFlags;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term_ctor as pxr_Usd_Term_ctor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term_ctor_1 as pxr_Usd_Term_ctor_1;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term_op_neg as pxr_Usd_Term_op_neg;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term__eq as pxr_Usd_Term__eq;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term__ne as pxr_Usd_Term__ne;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term_copy as pxr_Usd_Term_copy;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_Term_dtor as pxr_Usd_Term_dtor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_sizeof as pxr_Usd_PrimFlagsPredicate_sizeof;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_alignof as pxr_Usd_PrimFlagsPredicate_alignof;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor as pxr_Usd_PrimFlagsPredicate_ctor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor_1 as pxr_Usd_PrimFlagsPredicate_ctor_1;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor_2 as pxr_Usd_PrimFlagsPredicate_ctor_2;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_Tautology as pxr_Usd_PrimFlagsPredicate_Tautology;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_Contradiction as pxr_Usd_PrimFlagsPredicate_Contradiction;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_TraverseInstanceProxies as pxr_Usd_PrimFlagsPredicate_TraverseInstanceProxies;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal as pxr_Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_func as pxr_Usd_PrimFlagsPredicate_func;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_copy as pxr_Usd_PrimFlagsPredicate_copy;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_dtor as pxr_Usd_PrimFlagsPredicate_dtor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate__assign as pxr_Usd_PrimFlagsPredicate__assign;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_sizeof as pxr_Usd_PrimFlagsConjunction_sizeof;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_alignof as pxr_Usd_PrimFlagsConjunction_alignof;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_Tautology as pxr_Usd_PrimFlagsConjunction_Tautology;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_Contradiction as pxr_Usd_PrimFlagsConjunction_Contradiction;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_TraverseInstanceProxies as pxr_Usd_PrimFlagsConjunction_TraverseInstanceProxies;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal as pxr_Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_func as pxr_Usd_PrimFlagsConjunction_func;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_ctor as pxr_Usd_PrimFlagsConjunction_ctor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_ctor_1 as pxr_Usd_PrimFlagsConjunction_ctor_1;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_op_bit_and_assign as pxr_Usd_PrimFlagsConjunction_op_bit_and_assign;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_op_neg as pxr_Usd_PrimFlagsConjunction_op_neg;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_copy as pxr_Usd_PrimFlagsConjunction_copy;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_dtor as pxr_Usd_PrimFlagsConjunction_dtor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_sizeof as pxr_Usd_PrimFlagsDisjunction_sizeof;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_alignof as pxr_Usd_PrimFlagsDisjunction_alignof;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_Tautology as pxr_Usd_PrimFlagsDisjunction_Tautology;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_Contradiction as pxr_Usd_PrimFlagsDisjunction_Contradiction;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_TraverseInstanceProxies as pxr_Usd_PrimFlagsDisjunction_TraverseInstanceProxies;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal as pxr_Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_func as pxr_Usd_PrimFlagsDisjunction_func;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_ctor as pxr_Usd_PrimFlagsDisjunction_ctor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_ctor_1 as pxr_Usd_PrimFlagsDisjunction_ctor_1;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_op_bit_or_assign as pxr_Usd_PrimFlagsDisjunction_op_bit_or_assign;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_op_neg as pxr_Usd_PrimFlagsDisjunction_op_neg;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_copy as pxr_Usd_PrimFlagsDisjunction_copy;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_dtor as pxr_Usd_PrimFlagsDisjunction_dtor;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_neg as pxr_op_neg;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_and as pxr_op_and;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_and_1 as pxr_op_and_1;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_and_2 as pxr_op_and_2;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_and_3 as pxr_op_and_3;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_or as pxr_op_or;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_or_1 as pxr_op_or_1;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_or_2 as pxr_op_or_2;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___op_or_3 as pxr_op_or_3;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___UsdTraverseInstanceProxies as pxr_UsdTraverseInstanceProxies;
pub use pxr::usd::usd::prim_flags::pxrInternal_v0_20__pxrReserved___UsdTraverseInstanceProxies_1 as pxr_UsdTraverseInstanceProxies_1;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_t as pxr_UsdStage_t;

pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e as pxr_UsdStage_InitialLoadSet;
pub use pxr::usd::usd::c_stage::pxr_UsdStage_InitialLoadSet_LoadAll;
pub use pxr::usd::usd::c_stage::pxr_UsdStage_InitialLoadSet_LoadNone;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_CreateNew as pxr_UsdStage_CreateNew;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_Open as pxr_UsdStage_Open;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_GetDefaultPrim as pxr_UsdStage_GetDefaultPrim;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_HasDefaultPrim as pxr_UsdStage_HasDefaultPrim;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_Traverse as pxr_UsdStage_Traverse;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_GetSessionLayer as pxr_UsdStage_GetSessionLayer;
pub use pxr::usd::usd::c_stage::pxrInternal_v0_20__pxrReserved____UsdStage_GetRootLayer as pxr_UsdStage_GetRootLayer;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_t as pxr_UsdPrimRange_t;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_t as pxr_UsdPrimRange_iterator_t;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_t as pxr_UsdPrimRange_EndSentinel_t;

pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor as pxr_UsdPrimRange_ctor;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor_1 as pxr_UsdPrimRange_ctor_1;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor_2 as pxr_UsdPrimRange_ctor_2;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_PreAndPostVisit as pxr_UsdPrimRange_PreAndPostVisit;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_PreAndPostVisit_1 as pxr_UsdPrimRange_PreAndPostVisit_1;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_AllPrims as pxr_UsdPrimRange_AllPrims;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_AllPrimsPreAndPostVisit as pxr_UsdPrimRange_AllPrimsPreAndPostVisit;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_begin as pxr_UsdPrimRange_begin;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_cbegin as pxr_UsdPrimRange_cbegin;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_front as pxr_UsdPrimRange_front;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_end as pxr_UsdPrimRange_end;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_cend as pxr_UsdPrimRange_cend;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_increment_begin as pxr_UsdPrimRange_increment_begin;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_set_begin as pxr_UsdPrimRange_set_begin;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_empty as pxr_UsdPrimRange_empty;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_operatorbool as pxr_UsdPrimRange_operatorbool;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__eq as pxr_UsdPrimRange__eq;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__ne as pxr_UsdPrimRange__ne;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_copy as pxr_UsdPrimRange_copy;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange_dtor as pxr_UsdPrimRange_dtor;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_sizeof as pxr_UsdPrimRange_iterator_sizeof;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_alignof as pxr_UsdPrimRange_iterator_alignof;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_deref as pxr_UsdPrimRange_iterator_deref;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__op_inc as pxr_UsdPrimRange_iterator__op_inc;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_ctor as pxr_UsdPrimRange_iterator_ctor;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_ctor_1 as pxr_UsdPrimRange_iterator_ctor_1;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_IsPostVisit as pxr_UsdPrimRange_iterator_IsPostVisit;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_PruneChildren as pxr_UsdPrimRange_iterator_PruneChildren;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__eq as pxr_UsdPrimRange_iterator__eq;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__eq_1 as pxr_UsdPrimRange_iterator__eq_1;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__ne as pxr_UsdPrimRange_iterator__ne;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__ne_1 as pxr_UsdPrimRange_iterator__ne_1;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_copy as pxr_UsdPrimRange_iterator_copy;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_dtor as pxr_UsdPrimRange_iterator_dtor;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_sizeof as pxr_UsdPrimRange_EndSentinel_sizeof;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_alignof as pxr_UsdPrimRange_EndSentinel_alignof;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_copy as pxr_UsdPrimRange_EndSentinel_copy;
pub use pxr::usd::usd::prim_range::pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_dtor as pxr_UsdPrimRange_EndSentinel_dtor;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_t as pxr_UsdPrim_t;

pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_IsValid as pxr_UsdPrim_IsValid;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_GetStage as pxr_UsdPrim_GetStage;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_GetPath as pxr_UsdPrim_GetPath;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrimPath as pxr_UsdPrim_GetPrimPath;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrim as pxr_UsdPrim_GetPrim;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_GetName as pxr_UsdPrim_GetName;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_ctor as pxr_UsdPrim_ctor;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_GetTypeName as pxr_UsdPrim_GetTypeName;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_copy as pxr_UsdPrim_copy;
pub use pxr::usd::usd::c_prim::pxrInternal_v0_20__pxrReserved____UsdPrim_dtor as pxr_UsdPrim_dtor;
pub use std_string::std__string_t as std_string_t;

pub use std_string::std__string_ctor as std_string_ctor;
pub use std_string::std__string_copy as std_string_copy;
pub use std_string::std__string_dtor as std_string_dtor;
pub use std_string::std__string_assign as std_string_assign;
pub use std_string::std__string_c_str as std_string_c_str;
pub mod cppmmabi;
pub mod pxr;
pub mod std_string;


#[cfg(test)]
mod test;
