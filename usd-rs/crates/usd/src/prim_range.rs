use crate::prim::UsdPrim;
use std::marker::PhantomData;
use usd_sys as sys;

pub struct UsdPrimRange<'stage, T> {
    pub ptr: *mut sys::pxr_UsdPrimRange_t,
    pub current: sys::pxr_UsdPrimRange_iterator_t,
    pub end: sys::pxr_UsdPrimRange_iterator_t,
    pub marker: PhantomData<&'stage T>,
}

impl<'stage, T> Iterator for UsdPrimRange<'stage, T> {
    type Item = UsdPrim;

    fn next(&mut self) -> Option<Self::Item> {
        let old_current = self.current;
        let mut dummy = std::ptr::null_mut();
        unsafe {
            let mut is_end = false;
            
            sys::pxr_UsdPrimRange_iterator__eq(&self.current, &mut is_end, &self.end);
            if is_end {
                None
            } else {
                sys::pxr_UsdPrimRange_iterator__op_inc(
                    &mut self.current,
                    &mut dummy,
                );
                
                let mut ptr = std::ptr::null_mut();
                sys::pxr_UsdPrimRange_iterator_deref(&old_current, &mut ptr);

                Some(UsdPrim(ptr))
            }

            
        }
    }
}
