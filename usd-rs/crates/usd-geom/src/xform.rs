use usd_sys as sys;
use usd::stage::UsdStagePtr;
use usd_sdf::path::SdfPath;

#[repr(transparent)]
pub struct UsdGeomXform(pub *mut sys::pxr_UsdGeomXform_t);

impl UsdGeomXform {
    pub fn define(stage: &UsdStagePtr, path: &SdfPath) -> UsdGeomXform {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdGeomXform_Define(&mut ptr, stage.0, path.0);
        }

        UsdGeomXform(ptr)
    }
}

