use usd_sys as sys;
use usd::stage::UsdStagePtr;
use usd_sdf::path::SdfPath;

#[repr(transparent)]
pub struct UsdGeomSphere(pub *mut sys::pxr_UsdGeomSphere_t);


impl UsdGeomSphere {
    pub fn define(stage: &UsdStagePtr, path: &SdfPath) -> UsdGeomSphere {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdGeomSphere_Define(&mut ptr, stage.0, path.0);
        }

        UsdGeomSphere(ptr)
    }
}

