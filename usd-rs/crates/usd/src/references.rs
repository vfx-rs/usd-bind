use crate::{
    common::UsdListPosition, prim::UsdPrim, property::UsdProperty,
    stage::UsdStagePtr, time_code::UsdTimeCode,
};
use usd_cppstd::CppString;
use usd_sdf::path::SdfPath;
use usd_sdf::layer_offset::SdfLayerOffset;
use usd_sdf::reference::SdfReference;
use usd_sys as sys;
use cppmm_refptr::*;

use crate::error::Error;

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct UsdReferences(pub *mut sys::pxr_UsdReferences_t);

unsafe impl OpaquePtr for UsdReferences {
    type SysPointee = sys::pxr_UsdReferences_t;
    type Pointee = UsdReferences;
}

pub type UsdReferencesRef<'a, P = UsdReferences> = Ref<'a, P>;
pub type UsdReferencesRefMut<'a, P = UsdReferences> = RefMut<'a, P>;

impl UsdReferences {
    /// Adds a reference to the reference listOp at the current EditTarget,
    /// in the position specified by \p position.
    /// \sa \ref Usd_Failing_References "Why adding references may fail" for
    /// explanation of expectations on \p ref and what return values and errors
    /// to expect, and \ref Usd_OM_ListOps for details on list editing and
    /// composition of listOps.
    pub fn add_reference(
        &mut self,
        identifier : &str,
        prim_path : &SdfPath,
        layer_offset: Option<SdfLayerOffset>,
        position: Option<UsdListPosition>) -> bool
    {
        let cpp_identifier = CppString::new(identifier);
        let mut result = false;

        // Layer offset
        let lo = if let Some(layer_offset) = layer_offset {
            layer_offset.0
        } else {
            sys::pxr_SdfLayerOffset_t::default()
        };

        // Position
        let pos = if let Some(position) = position {
            sys::pxr_UsdListPosition::from(position)
        } else {
            sys::pxr_UsdListPosition_UsdListPositionBackOfPrependList
        };

        unsafe {
            sys::pxr_UsdReferences_AddReference(
                self.0, &mut result, cpp_identifier.0, prim_path.0, &lo, pos);
        }

        result
    }

    /*
    /// \overload
    /// \sa \ref Usd_DefaultPrim_References "References Without Prim Paths"
    USD_API
    bool AddReference(const std::string &identifier,
                  const SdfLayerOffset &layerOffset = SdfLayerOffset(),
                  UsdListPosition position=UsdListPositionBackOfPrependList);

    /// Add an internal reference to the specified prim.
    /// \sa \ref Usd_Internal_References "Internal References"
    USD_API
    bool AddInternalReference(const SdfPath &primPath,
                  const SdfLayerOffset &layerOffset = SdfLayerOffset(),
                  UsdListPosition position=UsdListPositionBackOfPrependList);
    */

    /// Removes the specified reference from the references listOp at the
    /// current EditTarget.  This does not necessarily eliminate the 
    /// reference completely, as it may be added or set in another layer in
    /// the same LayerStack as the current EditTarget.
    /// \sa \ref Usd_OM_ListOps 
    pub fn remove_reference(&self, reference : & SdfReference) -> bool {
        let mut result = false;

        unsafe {
            sys::pxr_UsdReferences_RemoveReference(self.0, &mut result, reference.0);
        }

        result
    }

    /// Removes the authored reference listOp edits at the current EditTarget.
    /// The same caveats for Remove() apply to Clear().  In fact, Clear() may
    /// actually increase the number of composed references, if the listOp
    /// being cleared contained the "remove" operator.
    /// \sa \ref Usd_OM_ListOps 
    pub fn clear_references(&mut self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdReferences_ClearReferences(self.0, &mut result);
        }
        result
    }

    /*
    /// Explicitly set the references, potentially blocking weaker opinions
    /// that add or remove items.
    /// \sa \ref Usd_Failing_References "Why adding references may fail" for
    /// explanation of expectations on \p ref and what return values and errors
    /// to expect, and \ref Usd_OM_ListOps for details on list editing and
    /// composition of listOps.
    USD_API
    bool SetReferences(const SdfReferenceVector& items);

    /// Return the prim this object is bound to.
    const UsdPrim &GetPrim() const { return _prim; }

    /// \overload
    UsdPrim GetPrim() { return _prim; }

    explicit operator bool() { return bool(_prim); }
    */
}

