use usd_sys as sys;

#[repr(transparent)]
pub struct UsdGeomSphere(pub *mut sys::pxr_UsdGeomSphere_t);

