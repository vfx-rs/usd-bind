use usd::prim::UsdPrim;
use usd::stage::UsdStagePtr;
use usd::time_code::UsdTimeCode;
use usd_sdf::path::SdfPath;
use usd_sys as sys;

use imath_traits::Matrix44;

#[repr(transparent)]
pub struct UsdGeomMesh(pub *mut sys::pxr_UsdGeomMesh_t);

impl UsdGeomMesh {
    pub fn from_prim(prim: &UsdPrim) -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdGeomMesh_from_prim(&mut ptr, prim.0);
        }

        UsdGeomMesh(ptr)
    }

    /// Compute the transformation matrix for this prim at the given time,
    /// including the transform authored on the Prim itself, if present.
    ///
    /// <b>If you need to compute the transform for multiple prims on a
    /// stage, it will be much, much more efficient to instantiate a
    /// UsdGeomXformCache and query it directly; doing so will reuse
    /// sub-computations shared by the prims.</b>
    pub fn compute_local_to_world_transform<M: Matrix44<f64>>(
        &self,
        time: &UsdTimeCode,
    ) -> M {
        let mut result = [0f64; 16];
        unsafe {
            sys::pxr_UsdGeomMesh_ComputeLocalToWorldTransform(
                self.0,
                result.as_mut_ptr() as *mut sys::pxr_GfMatrix4d_t,
                &time.0,
            );
        }

        M::from_slice(&result)
    }
}

impl Drop for UsdGeomMesh {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_UsdGeomMesh_dtor(self.0);
        }
    }
}

impl From<&UsdPrim> for UsdGeomMesh {
    fn from(prim: &UsdPrim) -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdGeomMesh_from_prim(&mut ptr, prim.0);
        }

        UsdGeomMesh(ptr)
    }
}
