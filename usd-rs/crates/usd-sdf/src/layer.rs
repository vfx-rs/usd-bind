use usd_sys as sys;

#[repr(transparent)]
pub struct SdfLayerHandle(pub *mut sys::pxr_SdfLayerHandle_t);

pub trait SdfLayer {
    fn get_raw_ptr(&self) -> *mut sys::pxr_SdfLayer_t;

    fn save(&self, force: bool) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_SdfLayer_Save(self.get_raw_ptr(), &mut result, force);
        }
        result
    }
}

impl SdfLayer for SdfLayerHandle {
    fn get_raw_ptr(&self) -> *mut sys::pxr_SdfLayer_t {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfLayerHandle_deref(self.0, &mut ptr);
        }
        ptr
    }
}

impl Drop for SdfLayerHandle {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_SdfLayerHandle_dtor(self.0);
        }
    }
}

