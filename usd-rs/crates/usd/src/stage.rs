use crate::prim::UsdPrim;
use crate::prim_range::UsdPrimRange;
use std::marker::PhantomData;
use std::path::Path;
use usd_cppstd::CppString;
use usd_sdf::layer::SdfLayerHandle;
use usd_sys as sys;

/// Attempt to find a matching existing stage in a cache if
/// UsdStageCacheContext objects exist on the stack. Failing that, create a
/// new stage and recursively compose prims defined within and referenced by
/// the layer at \p filePath, which must already exist.
/// 
/// The initial set of prims to load on the stage can be specified
/// using the \p load parameter. \sa UsdStage::InitialLoadSet.
/// 
pub fn open<P: AsRef<Path>>(file_path: P, load: InitialLoadSet) -> UsdStageRefPtr {
    let s_file_path =
        CppString::new(file_path.as_ref().as_os_str().to_str().unwrap());
    let mut ptr = std::ptr::null_mut();
    unsafe {
        sys::pxr_UsdStage_Open(&mut ptr, s_file_path.0, load.into());
    }

    UsdStageRefPtr(ptr)
}


/// Create a new stage with root layer \p identifier, destroying
/// potentially existing files with that identifier; it is considered an
/// error if an existing, open layer is present with this identifier.
///
/// \sa SdfLayer::CreateNew()
///
/// Invoking an overload that does not take a \p sessionLayer argument will
/// create a stage with an anonymous in-memory session layer.  To create a
/// stage without a session layer, pass TfNullPtr (or None in python) as the
/// \p sessionLayer argument.
//
/// The initial set of prims to load on the stage can be specified
/// using the \p load parameter. \sa UsdStage::InitialLoadSet.
///
/// Note that the \p pathResolverContext passed here will apply to all path
/// resolutions for this stage, regardless of what other context may be
/// bound at resolve time. If no context is passed in here, Usd will create
/// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
/// root layer's repository path if the layer has one, otherwise its real 
/// path.
pub fn create_new<P: AsRef<Path>>(file_path: P, load: InitialLoadSet) -> UsdStageRefPtr {
    let s_file_path =
        CppString::new(file_path.as_ref().as_os_str().to_str().unwrap());
    let mut ptr = std::ptr::null_mut();
    unsafe {
        sys::pxr_UsdStage_CreateNew(&mut ptr, s_file_path.0, load.into());
    }

    UsdStageRefPtr(ptr)
}

pub trait UsdStage {
    fn get_raw_ptr(&self) -> *mut sys::pxr_UsdStage_t;

    fn has_default_prim(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdStage_HasDefaultPrim(self.get_raw_ptr(), &mut result);
        }

        result
    }

    fn get_default_prim(&self) -> Option<UsdPrim> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStage_GetDefaultPrim(self.get_raw_ptr(), &mut ptr);
        }

        let prim = UsdPrim(ptr);
        if prim.is_valid() {
            Some(prim)
        } else {
            None
        }
    }

    fn traverse<'stage>(&'stage self) -> UsdPrimRange<'stage, UsdStageRefPtr> {
        let mut ptr = std::ptr::null_mut();
        let mut current = sys::pxr_UsdPrimRange_iterator_t::default();
        let mut end = sys::pxr_UsdPrimRange_iterator_t::default();
        unsafe {
            sys::pxr_UsdStage_Traverse(self.get_raw_ptr(), &mut ptr);
            sys::pxr_UsdPrimRange_begin(ptr, &mut current);
            sys::pxr_UsdPrimRange_end(ptr, &mut end);
        }
        UsdPrimRange {
            ptr,
            current,
            end,
            marker: PhantomData,
        }
    }

    fn get_root_layer(&self) -> SdfLayerHandle {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStage_GetRootLayer(self.get_raw_ptr(), &mut ptr);
        }
        SdfLayerHandle(ptr)
        
    }
}

#[repr(transparent)]
pub struct UsdStageRefPtr(pub(crate) *mut sys::pxr_UsdStageRefPtr_t);

impl Drop for UsdStageRefPtr {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_UsdStageRefPtr_dtor(self.0);
        }
    }
}

impl UsdStage for UsdStageRefPtr {
    fn get_raw_ptr(&self) -> *mut sys::pxr_UsdStage_t {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStageRefPtr_deref(self.0, &mut ptr);
        }
        ptr
    }
}

#[repr(transparent)]
pub struct UsdStagePtr(pub *mut sys::pxr_UsdStagePtr_t);

impl Drop for UsdStagePtr {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_UsdStagePtr_dtor(self.0);
        }
    }
}

impl UsdStage for UsdStagePtr {
    fn get_raw_ptr(&self) -> *mut sys::pxr_UsdStage_t {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStagePtr_deref(self.0, &mut ptr);
        }
        ptr
    }
}

#[derive(Debug, Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum InitialLoadSet {
    All,
    None,
}

impl From<InitialLoadSet> for sys::pxr_UsdStage_InitialLoadSet {
    fn from(i: InitialLoadSet) -> Self {
        match i {
            InitialLoadSet::All => sys::pxr_UsdStage_InitialLoadSet_LoadAll,
            InitialLoadSet::None => sys::pxr_UsdStage_InitialLoadSet_LoadNone,
        }
    }
}

#[cfg(test)]
mod test {
    #[test]
    fn test_open() {
        use crate::stage::{open, InitialLoadSet, UsdStage};
        use std::path::Path;

        let data_dir = concat!(env!("CARGO_MANIFEST_DIR"), "/data");
        let file = Path::new(data_dir).join("HelloWorld.usda");

        let stage = open(
            &file,
            InitialLoadSet::All,
        );

        for prim in stage.traverse() {
            println!("prim: {:?}: {}", prim, prim.get_type_name());
        }
    }
}
