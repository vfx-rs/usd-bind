use crate::error::{TfError, TfErrorRef};
use std::marker::PhantomData;
use usd_sys as sys;

#[repr(transparent)]
pub struct TfDiagnosticMgr(pub *mut sys::pxr_TfDiagnosticMgr_t);

#[repr(transparent)]
pub struct ErrorIterator {
    pub it: sys::std_TfDiagnosticMgr_ErrorIterator_t,
}

impl PartialEq for ErrorIterator {
    fn eq(&self, other: &Self) -> bool {
        let mut result = false;
        unsafe {
            sys::op_equals_std__list_pxr__TfError___iterator(
                &mut result,
                &self.it,
                &other.it,
            );
        }
        result
    }
}

impl ErrorIterator {
    pub fn get(&mut self) -> TfError {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_TfDiagnosticMgr_ErrorIterator_deref_mut(
                &mut self.it,
                &mut ptr,
            );
        }
        println!("{:p}", ptr);

        TfError(ptr)
    }

    pub fn increment(&mut self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::std_TfDiagnosticMgr_ErrorIterator_op_inc(
                &mut self.it,
                &mut dummy,
            );
        }
    }
}

impl TfDiagnosticMgr {
    /// Return the singleton instance.
    pub fn get_instance() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_TfDiagnosticMgr_GetInstance(&mut ptr);
        }
        TfDiagnosticMgr(ptr)
    }

    pub fn error_iter(&self) -> ErrorIter {
        let mut begin = self.error_begin();
        println!("begin");
        let _ = begin.get();
        let mut end = self.error_end();
        println!("end");
        let _ = end.get();
        ErrorIter {
            begin,
            end,
            marker: PhantomData,
        }
    }

    /// Return an iterator to the beginning of this thread's error list.
    pub fn error_begin(&self) -> ErrorIterator {
        let mut it = sys::std_TfDiagnosticMgr_ErrorIterator_t::default();
        unsafe {
            sys::pxr_TfDiagnosticMgr_GetErrorBegin(self.0, &mut it);
        }

        ErrorIterator { it }
    }

    /// Return an iterator to the end of this thread's error list.
    pub fn error_end(&self) -> ErrorIterator {
        let mut it = sys::std_TfDiagnosticMgr_ErrorIterator_t::default();
        unsafe {
            sys::pxr_TfDiagnosticMgr_GetErrorEnd(self.0, &mut it);
        }

        ErrorIterator { it }
    }

    pub fn erase_range(&self, begin: ErrorIterator, end: ErrorIterator) {
        let mut it = sys::std_TfDiagnosticMgr_ErrorIterator_t::default();
        unsafe {
            sys::pxr_TfDiagnosticMgr_EraseRange(
                self.0, &mut it, begin.it, end.it,
            );
        }
    }

    pub fn get_errors(&self, clear: bool) -> Vec<TfErrorRef> {
        let errors = self.error_iter().collect();
        if clear {
            self.erase_range(self.error_begin(), self.error_end());
        }

        errors
    }

    pub fn set_quiet(&self, quiet: bool) {
        unsafe {
            sys::pxr_TfDiagnosticMgr_SetQuiet(self.0, quiet);
        }
    }
}

pub struct ErrorIter<'a> {
    begin: ErrorIterator,
    end: ErrorIterator,
    marker: PhantomData<&'a TfDiagnosticMgr>,
}

impl<'a> Iterator for ErrorIter<'a> {
    type Item = TfErrorRef<'a>;

    fn next(&mut self) -> Option<Self::Item> {
        if self.begin == self.end {
            None
        } else {
            let mut ptr = std::ptr::null();
            unsafe {
                sys::std_TfDiagnosticMgr_ErrorIterator_deref(
                    &self.begin.it,
                    &mut ptr,
                );
            }
            self.begin.increment();

            Some(TfErrorRef::new(ptr))
        }
    }
}

impl<'a> IntoIterator for &'a TfDiagnosticMgr {
    type Item = TfErrorRef<'a>;
    type IntoIter = ErrorIter<'a>;

    fn into_iter(self) -> Self::IntoIter {
        self.error_iter()
    }
}
