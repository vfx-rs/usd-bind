use crate::prim::UsdPrim;
use crate::prim_range::UsdPrimRange;
use std::marker::PhantomData;
use std::path::Path;
use usd_cppstd::{CppString, CppMapStringString};
use usd_sdf::{layer::SdfLayerHandle, path::SdfPath};
use usd_tf::token::TfToken;
use usd_sys as sys;
use crate::error::Error;

type Result<T, E = Error> = std::result::Result<T, E>;

/// Attempt to find a matching existing stage in a cache if
/// UsdStageCacheContext objects exist on the stack. Failing that, create a
/// new stage and recursively compose prims defined within and referenced by
/// the layer at *filePath*, which must already exist.
/// 
/// The initial set of prims to load on the stage can be specified
/// using the *load* parameter. \sa UsdStage::InitialLoadSet.
/// 
pub fn open<P: AsRef<Path>>(file_path: P, load: InitialLoadSet) -> Result<UsdStageRefPtr> {
    let s_file_path =
        CppString::new(file_path.as_ref().as_os_str().to_str().unwrap());
    let mut ptr = std::ptr::null_mut();
    unsafe {
        sys::pxr_UsdStage_Open(&mut ptr, s_file_path.0, load.into());
    }

    let result = UsdStageRefPtr(ptr);
    if result.is_null() {
        Err(Error::Usd)
    } else {
        Ok(result)
    }
}

/// Create a new stage with root layer *identifier*, destroying
/// potentially existing files with that identifier; it is considered an
/// error if an existing, open layer is present with this identifier.
///
/// \sa SdfLayer::CreateNew()
///
/// Invoking an overload that does not take a *sessionLayer* argument will
/// create a stage with an anonymous in-memory session layer.  To create a
/// stage without a session layer, pass TfNullPtr (or None in python) as the
/// *sessionLayer* argument.
//
/// The initial set of prims to load on the stage can be specified
/// using the *load* parameter. \sa UsdStage::InitialLoadSet.
///
/// Note that the *pathResolverContext* passed here will apply to all path
/// resolutions for this stage, regardless of what other context may be
/// bound at resolve time. If no context is passed in here, Usd will create
/// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
/// root layer's repository path if the layer has one, otherwise its real 
/// path.
pub fn create_new<P: AsRef<Path>>(file_path: P, load: InitialLoadSet) -> Result<UsdStageRefPtr> {
    let s_file_path =
        CppString::new(file_path.as_ref().as_os_str().to_str().unwrap());
    let mut ptr = std::ptr::null_mut();
    unsafe {
        sys::pxr_UsdStage_CreateNew(&mut ptr, s_file_path.0, load.into());
    }

    let result = UsdStageRefPtr(ptr);
    if result.is_null() {
        Err(Error::Usd)
    } else {
        Ok(result)
    }
}

pub fn create_in_memory(load: InitialLoadSet) -> Result<UsdStageRefPtr> {
    let mut ptr = std::ptr::null_mut();
    unsafe {
        sys::pxr_UsdStage_CreateInMemory(&mut ptr, load.into());
    }

    let result = UsdStageRefPtr(ptr);
    if result.is_null() {
        Err(Error::Usd)
    } else {
        Ok(result)
    }
}

pub trait UsdStage {
    fn get_raw_ptr(&self) -> *mut sys::pxr_UsdStage_t;

    /// Return true if this stage's root layer has an authored opinion for the
    /// default prim layer metadata.  This is shorthand for:
    /// ```
    /// // stage.has_default_prim();
    /// ```
    /// Note that this function only consults the stage's root layer.  To
    /// consult a different layer, use the SdfLayer::HasDefaultPrim() API.
    fn has_default_prim(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdStage_HasDefaultPrim(self.get_raw_ptr(), &mut result);
        }

        result
    }

    /// Return the root UsdPrim on this stage whose name is the root layer's
    /// defaultPrim metadata's value.  
    ///
    /// Return None if there is no
    /// such prim or if the root layer's defaultPrim metadata is unset or is not
    /// a valid prim name.  Note that this function only examines this stage's
    /// rootLayer.  It does not consider sublayers of the rootLayer.  See also
    /// SdfLayer::GetDefaultPrim().
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

    /// Traverse the active, loaded, defined, non-abstract prims on this stage
    /// depth-first.
    /// 
    /// Traverse() returns a UsdPrimRange , which allows low-latency
    /// traversal, with the ability to prune subtrees from traversal.  It
    /// is python iterable, so in its simplest form, one can do:
    /// 
    /// ```{.py}
    /// for prim in stage.Traverse() {
    ///     print prim.GetPath()
    /// }
    /// ```
    /// 
    /// If either a pre-and-post-order traversal or a traversal rooted at a
    /// particular prim is desired, construct a UsdPrimRange directly.
    /// 
    /// This is equivalent to UsdPrimRange::Stage() . 
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

    /// Return this stage's root layer.
    fn get_root_layer(&self) -> SdfLayerHandle {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStage_GetRootLayer(self.get_raw_ptr(), &mut ptr);
        }
        SdfLayerHandle(ptr)
    }

    /// Return this stage's root session layer.
    fn get_session_layer(&self) -> SdfLayerHandle {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStage_GetSessionLayer(self.get_raw_ptr(), &mut ptr);
        }
        SdfLayerHandle(ptr)
    }

    /// Attempt to ensure a \a UsdPrim at \p path exists on this stage.
    ///
    /// If a prim already exists at \p path, return it.  Otherwise author
    /// \a SdfPrimSpecs with \a specifier == \a SdfSpecifierOver and empty
    /// \a typeName at the current EditTarget to create this prim and any
    /// nonexistent ancestors, then return it.
    ///
    /// The given \a path must be an absolute prim path that does not contain
    /// any variant selections.
    ///
    /// If it is impossible to author any of the necessary PrimSpecs, (for
    /// example, in case \a path cannot map to the current UsdEditTarget's
    /// namespace) issue an error and return an invalid \a UsdPrim.
    ///
    /// If an ancestor of \p path identifies an \a inactive prim, author scene
    /// description as described above but return an invalid prim, since the
    /// resulting prim is descendant to an inactive prim.
    ///
    pub fn override_prim(self, path: &SdfPath) -> Result<UsdPrim> {
        None
    }

    /// Attempt to ensure a *UsdPrim* at *path* is defined (according to
    /// UsdPrim::IsDefined()) on this stage.
    /// 
    /// If a prim at *path* is already defined on this stage and *typeName* is
    /// empty or equal to the existing prim's typeName, return that prim.
    /// Otherwise author an *SdfPrimSpec* with *specifier* ==
    /// *SdfSpecifierDef* and *typeName* for the prim at *path* at the
    /// current EditTarget.  Author *SdfPrimSpec* s with *specifier* ==
    /// *SdfSpecifierDef* and empty typeName at the current EditTarget for any
    /// nonexistent, or existing but not *Defined* ancestors.
    /// 
    /// The given *path* must be an absolute prim path that does not contain
    /// any variant selections.
    /// 
    /// If it is impossible to author any of the necessary PrimSpecs (for
    /// example, in case *path* cannot map to the current UsdEditTarget's
    /// namespace or one of the ancestors of *path* is inactive on the 
    /// UsdStage), issue an error and return an invalid *UsdPrim*.
    /// 
    /// Note that this method may return a defined prim whose typeName does not
    /// match the supplied *typeName*, in case a stronger typeName opinion
    /// overrides the opinion at the current EditTarget.
    fn define_prim(&self, path: &SdfPath, prim_type: &TfToken) -> Result<UsdPrim> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStage_DefinePrim(self.get_raw_ptr(), &mut ptr, path.0, &prim_type.0);
        }

        let prim = UsdPrim(ptr);
        if !prim.is_valid() {
            Err(Error::Usd)
        } else {
            Ok(prim)
        }
    }

    fn save(&self) {
        unsafe {
            sys::pxr_UsdStage_Save(self.get_raw_ptr());
        }
    }

    fn save_session_layers(&self) {
        unsafe {
            sys::pxr_UsdStage_SaveSessionLayers(self.get_raw_ptr());
        }
    }

    fn export<P: AsRef<Path>>(&self, file_path : P, add_source_file_comment : bool) -> bool {
        let mut result = false;
        let s_file_path =
            CppString::new(file_path.as_ref().as_os_str().to_str().unwrap());

        let mut empty_args = CppMapStringString::default();
        unsafe {
            sys::pxr_UsdStage_Export(self.get_raw_ptr(), &mut result, s_file_path.0,
                                     add_source_file_comment, empty_args.0);
        }

        result
    }
}

#[repr(transparent)]
pub struct UsdStageRefPtr(pub(crate) *mut sys::pxr_UsdStageRefPtr_t);

impl UsdStageRefPtr {
    pub fn as_weak(&self) -> UsdStagePtr {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdStagePtr_from_ref(&mut ptr, self.0);
        }
        UsdStagePtr(ptr)
    }

    pub fn is_null(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdStageRefPtr_is_null(self.0, &mut result);
        }
        result
    }
}

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

impl UsdStagePtr {
    pub fn is_null(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdStagePtr_is_null(self.0, &mut result);
        }
        result
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
    fn test_open() -> Result<(), Box<dyn std::error::Error + 'static>> {
        use crate::stage::{open, InitialLoadSet, UsdStage};
        use std::path::Path;

        let data_dir = concat!(env!("CARGO_MANIFEST_DIR"), "/data");
        let file = Path::new(data_dir).join("HelloWorld.usda");

        let stage = open(
            &file,
            InitialLoadSet::All,
        )?;

        for prim in stage.traverse() {
            println!("prim: {:?}: {}", prim, prim.type_name());
        }

        Ok(())
    }

    #[test]
    fn test_save() -> Result<(), Box<dyn std::error::Error + 'static>> {
        use crate::stage::{create_new, InitialLoadSet, UsdStage};
        use std::path::Path;

        let dir = tempdir::TempDir::new("usd_stage_test_save")?;
        let file = dir.path().join("empty_stage.usd");
        //let file = Path::new("/tmp/").join("empty_stage.usda");

        let stage = create_new(
            &file,
            InitialLoadSet::All,
        )?;

        stage.save();

        Ok(())
    }

    #[test]
    fn test_export() -> Result<(), Box<dyn std::error::Error + 'static>> {
        use crate::stage::{create_in_memory, InitialLoadSet, UsdStage};
        use std::path::Path;

        let dir = tempdir::TempDir::new("usd_stage_test_export")?;
        let file = dir.path().join("empty_stage.usd");
        //let file = Path::new("/tmp/").join("empty_stage.usda");

        let stage = create_in_memory(
            InitialLoadSet::All,
        )?;

        stage.export(file, true);

        Ok(())
    }

    #[test]
    fn test_references() -> Result<(), Box<dyn std::error::Error + 'static>> {
        use crate::stage::{create_new, InitialLoadSet, UsdStage};
        use std::path::Path;
        use usd_sdf::{layer::SdfLayerHandle, path::SdfPath};
        use usd_tf::token::TfToken;

        let dir = tempdir::TempDir::new("usd_stage_test_reference")?;
        //let file = dir.path().join("empty_stage.usd");
        let file = Path::new("/tmp/").join("empty_stage.usda");

        let stage = create_new(
            &file,
            InitialLoadSet::All,
        )?;

        let prim = stage.define_prim(&SdfPath::new("/root/blah"), &TfToken::new("xform"));
        prim.get_references().add_reference("/my_ref.usd", &SdfPath::new("/root"));

        stage.save();

        Ok(())
    }
}
