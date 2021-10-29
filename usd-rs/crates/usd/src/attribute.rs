use crate::{
    common::UsdListPosition, prim::UsdPrim, property::UsdProperty,
    stage::UsdStagePtr, time_code::UsdTimeCode,
};
use cppmm_refptr::*;
use usd_cppstd::{CppString, CppVectorString};
use usd_sdf::path::{SdfPath, SdfPathRef, SdfPathVector};
use usd_sdf::value_type_name::SdfValueTypeName;
use usd_sys as sys;
use usd_tf::token::TfToken;
use usd_vt::value::{ValueStore, VtValue};

use std::ffi::CStr;

use crate::error::Error;

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct UsdAttribute(pub *mut sys::pxr_UsdAttribute_t);

unsafe impl OpaquePtr for UsdAttribute {
    type SysPointee = sys::pxr_UsdAttribute_t;
    type Pointee = UsdAttribute;
}

pub type UsdAttributeRef<'a, P = UsdAttribute> = Ref<'a, P>;
pub type UsdAttributeRefMut<'a, P = UsdAttribute> = RefMut<'a, P>;

impl UsdAttribute {
    /// Return the stage that owns the object, and to whose state and lifetime
    /// this object's validity is tied.
    pub fn stage(&self) -> UsdStagePtr {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetStage(self.0, &mut ptr);
        }

        UsdStagePtr(ptr)
    }

    /// Return the complete scene path to this object on its UsdStage,
    /// which may (UsdPrim) or may not (all other subclasses) return a
    /// cached result
    pub fn path(&self) -> SdfPath {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetPath(self.0, &mut ptr);
        }

        SdfPath(ptr)
    }

    /// Return this object's path if this object is a prim, otherwise this
    /// object's nearest owning prim's path.  Equivalent to GetPrim().GetPath().
    pub fn prim_path(&self) -> SdfPathRef {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdAttribute_GetPrimPath(self.0, &mut ptr);
        }

        SdfPathRef::new(ptr)
    }

    /// Return this object if it is a prim, otherwise return this object's
    /// nearest owning prim.
    pub fn prim(&self) -> UsdPrim {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetPrim(self.0, &mut ptr);
        }

        UsdPrim(ptr)
    }

    /// Return the full name of this object, i.e. the last component of its
    /// SdfPath in namespace.
    ///
    /// This is equivalent to, but generally cheaper than,
    /// GetPath().GetNameToken()
    pub fn name(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdAttribute_GetName(self.0, &mut ptr);
            let mut char_ptr = std::ptr::null();
            sys::pxr_TfToken_GetText(ptr, &mut char_ptr);
            CStr::from_ptr(char_ptr).to_str().unwrap()
        }
    }

    /// Return the "scene description" value type name for this attribute.
    pub fn type_name(&self) -> SdfValueTypeName {
        let mut inner = sys::pxr_SdfValueTypeName_t::default();
        unsafe {
            sys::pxr_UsdAttribute_GetTypeName(self.0, &mut inner);
        }

        SdfValueTypeName(inner)
    }

    /// Return a string that provides a brief summary description of the
    /// object.  This method, along with IsValid()/bool_operator,
    /// is always safe to call on a possibly-expired object, and the
    /// description will specify whether the object is valid or expired,
    /// along with a few other bits of data.
    pub fn description(&self) -> String {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetDescription(self.0, &mut ptr);
        }

        CppString(ptr).as_str().to_string()
    }

    /// Return this object's documentation (metadata).  This returns the
    /// empty string if no documentation has been set.
    pub fn documentation(&self) -> String {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetDocumentation(self.0, &mut ptr);
        }

        CppString(ptr).as_str().to_string()
    }

    /// Sets this object's documentation (metadata).  Returns true on success.
    pub fn set_documentation(&self, group: &str) -> bool {
        let group = CppString::new(group);
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_SetDocumentation(
                self.0,
                &mut result,
                group.0,
            );
        }
        result
    }

    /// Clears this object's documentation (metadata) in the current EditTarget
    /// (only).  Returns true on success.
    pub fn clear_documentation(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearDocumentation(self.0, &mut result);
        }
        result
    }

    /// Returns true if documentation was explicitly authored and GetMetadata()
    /// will return a meaningful value for documentation.
    pub fn has_authored_documentation(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredDocumentation(self.0, &mut result);
        }
        result
    }

    /// Gets the value of the 'hidden' metadata field, false if not
    /// authored.
    ///
    /// When an object is marked as hidden, it is an indicator to clients who
    /// generically display objects (such as GUI widgets) that this object
    /// should not be included, unless explicitly asked for.  Although this
    /// is just a hint and thus up to each application to interpret, we
    /// use it primarily as a way of simplifying hierarchy displays, by
    /// hiding *only* the representation of the object itself, *not* its
    /// subtree, instead "pulling up" everything below it one level in the
    /// hierarchical nesting.
    ///
    /// Note again that this is a hint for UI only - it should not be
    /// interpreted by any renderer as making a prim invisible to drawing.
    pub fn is_hidden(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_IsHidden(self.0, &mut result);
        }
        result
    }

    /// Sets the value of the 'hidden' metadata field. See IsHidden()
    /// for details.
    pub fn set_hidden(&self, hidden: bool) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_SetHidden(self.0, &mut result, hidden);
        }
        result
    }

    /// Clears the opinion for "Hidden" at the current EditTarget.
    pub fn clear_hidden(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearHidden(self.0, &mut result);
        }
        result
    }

    /// Returns true if hidden was explicitly authored and GetMetadata()
    /// will return a meaningful value for Hidden.
    ///
    /// Note that IsHidden returns a fallback value (false) when hidden is not
    /// authored.
    pub fn has_authored_hidden(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredHidden(self.0, &mut result);
        }
        result
    }

    /// Return this property's name with all namespace prefixes removed,
    /// i.e. the last component of the return value of GetName()
    ///
    /// This is generally the property's "client name"; property namespaces are
    /// often used to group related properties together.  The namespace prefixes
    /// the property name but many consumers will care only about un-namespaced
    /// name, i.e. its BaseName.  For more information, see \ref Usd_Ordering
    pub fn base_name(&self) -> TfToken {
        let mut result = sys::pxr_TfToken_t::default();
        unsafe {
            sys::pxr_UsdAttribute_GetBaseName(self.0, &mut result);
        }
        TfToken(result)
    }

    /// Return this property's complete namespace prefix.  Return the empty
    /// token if this property has no namespaces.
    ///
    /// This is the complement of GetBaseName(), although it does *not*
    /// contain a trailing namespace delimiter
    pub fn namespace(&self) -> TfToken {
        let mut result = sys::pxr_TfToken_t::default();
        unsafe {
            sys::pxr_UsdAttribute_GetNamespace(self.0, &mut result);
        }
        TfToken(result)
    }

    /// Return this property's name elements including namespaces and its base
    /// name as the final element.
    pub fn split_name(&self) -> Vec<String> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_SplitName(self.0, &mut ptr);
        }
        CppVectorString(ptr).to_vec()
    }

    /// Return this property's display group (metadata).  This returns the
    /// empty token if no display group has been set.
    /// \sa SetDisplayGroup()
    pub fn display_group(&self) -> String {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetDisplayGroup(self.0, &mut ptr);
        }

        CppString(ptr).as_str().to_string()
    }

    /// Sets this property's display group (metadata).  Returns true on success.
    ///
    /// DisplayGroup provides UI hinting for grouping related properties
    /// together for display.  We define a convention for specifying nesting
    /// of groups by recognizing the property namespace separator in
    /// displayGroup as denoting group-nesting.
    /// \sa SetNestedDisplayGroups()
    pub fn set_display_group(&self, group: &str) -> bool {
        let group = CppString::new(group);
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_SetDisplayGroup(self.0, &mut result, group.0);
        }
        result
    }

    /// Clears this property's display group (metadata) in
    /// the current EditTarget (only).  Returns true on success.
    pub fn clear_display_group(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearDisplayGroup(self.0, &mut result);
        }
        result
    }

    /// Returns true if displayGroup was explicitly authored and GetMetadata()
    /// will return a meaningful value for displayGroup.
    pub fn has_authored_display_group(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredDisplayGroup(self.0, &mut result);
        }
        result
    }

    /// Return this property's displayGroup as a sequence of groups to be
    /// nested, or an empty vector if displayGroup is empty or not authored.
    pub fn nested_display_groups(&self) -> Vec<String> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetNestedDisplayGroups(self.0, &mut ptr);
        }
        CppVectorString(ptr).to_vec()
    }

    /// Sets this property's display group (metadata) to the nested sequence.  
    /// Returns true on success.
    ///
    /// A displayGroup set with this method can still be retrieved with
    /// GetDisplayGroup(), with the namespace separator embedded in the result.
    /// If *nestedGroups* is empty, we author an empty string for displayGroup.
    /// \sa SetDisplayGroup()
    pub fn set_nested_display_groups<S: AsRef<str>>(
        &self,
        groups: &[S],
    ) -> bool {
        let mut result = false;
        let vec = CppVectorString::from_slice(groups);
        unsafe {
            sys::pxr_UsdAttribute_SetNestedDisplayGroups(
                self.0,
                &mut result,
                vec.0,
            );
        }
        result
    }

    /// Return this property's display name (metadata).  This returns the
    /// empty string if no display name has been set.
    /// \sa SetDisplayName()
    pub fn display_name(&self) -> String {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetDisplayName(self.0, &mut ptr);
        }

        CppString(ptr).as_str().to_string()
    }

    /// Sets this property's display name (metadata).  Returns true on success.
    ///
    /// DisplayName is meant to be a descriptive label, not necessarily an
    /// alternate identifier; therefore there is no restriction on which
    /// characters can appear in it.
    pub fn set_display_name(&self, group: &str) -> bool {
        let group = CppString::new(group);
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_SetDisplayName(self.0, &mut result, group.0);
        }
        result
    }

    /// Clears this property's display name (metadata) in the current EditTarget
    /// (only).  Returns true on success.
    pub fn clear_display_name(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearDisplayName(self.0, &mut result);
        }
        result
    }

    /// Returns true if displayName was explicitly authored and GetMetadata()
    /// will return a meaningful value for displayName.
    pub fn has_authored_display_name(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredDisplayName(self.0, &mut result);
        }
        result
    }

    /// Return true if this is a custom property (i.e., not part of a
    /// prim schema).
    ///
    /// The 'custom' modifier in USD serves the same function as Alembic's
    /// 'userProperties', which is to say as a categorization for ad hoc
    /// client data not formalized into any schema, and therefore not
    /// carrying an expectation of specific processing by consuming applications.
    pub fn is_custom(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_IsCustom(self.0, &mut result);
        }
        result
    }

    /// Set the value for custom at the current EditTarget, return true on
    /// success, false if the value can not be written.
    ///
    /// **Note** that this value should not be changed as it is typically either
    /// automatically authored or provided by a property definition. This method
    /// is provided primarily for fixing invalid scene description.
    pub fn set_custom(&self, custom: bool) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_SetCustom(self.0, &mut result, custom);
        }
        result
    }

    /// Return true if this is a builtin property or if the strongest
    /// authored SdfAttributeSpec for this property's path matches this
    /// property's dynamic type.  That is, SdfRelationshipSpec in case this is a
    /// UsdRelationship, and SdfAttributeSpec in case this is a UsdAttribute.
    /// Return *false* if this property's prim has expired.
    ///
    /// For attributes, a *true* return does not imply that this attribute
    /// possesses a value, only that has been declared, is of a certain type and
    /// variability, and that it is safe to use to query and author values and
    /// metadata.
    pub fn is_defined(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_IsDefined(self.0, &mut result);
        }
        result
    }

    /// Return true if there are any authored opinions for this property
    /// in any layer that contributes to this stage, false otherwise.
    pub fn is_authored(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_IsAuthored(self.0, &mut result);
        }
        result
    }

    /// Flattens this property to a property spec with the same name
    /// beneath the given *parent* prim in the current edit target.
    ///
    /// Flattening authors all authored resolved values and metadata for
    /// this property into the destination property spec. If this property
    /// is a builtin property, fallback values and metadata will also be
    /// authored if the destination property has a different fallback
    /// value or no fallback value, or if the destination property has an
    /// authored value that overrides its fallback.
    ///
    /// Attribute connections and relationship targets that target an
    /// object beneath this property's owning prim will be remapped to
    /// target objects beneath the destination *parent* prim.
    ///
    /// If the destination spec already exists, it will be overwritten.
    ///
    /// \sa UsdStage::Flatten
    pub fn flatten_to_parent(&self, parent: &UsdPrim) -> UsdProperty {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_FlattenTo_parent(self.0, &mut ptr, parent.0);
        }
        UsdProperty(ptr)
    }

    /// Flattens this property to a property spec with the given
    /// *propName* beneath the given *parent* prim in the current
    /// edit target.
    pub fn flatten_to_parent_property(
        &self,
        parent: &UsdPrim,
        prop_name: &TfToken,
    ) -> UsdProperty {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_FlattenTo_parent_property(
                self.0,
                &mut ptr,
                parent.0,
                &prop_name.0,
            );
        }
        UsdProperty(ptr)
    }

    /// Flattens this property to a property spec for the given
    /// *property* in the current edit target.
    pub fn flatten_to_property(&self, property: &UsdProperty) -> UsdProperty {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_FlattenTo_property(
                self.0, &mut ptr, property.0,
            );
        }
        UsdProperty(ptr)
    }

    /// Return true if this attribute has an authored default value, authored
    /// time samples or a fallback value provided by a registered schema. If
    /// the attribute has been \ref Usd_AttributeBlocking "blocked", then
    /// return `true` if and only if it has a fallback value.
    pub fn has_value(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasValue(self.0, &mut result);
        }
        result
    }

    /// Return true if this attribute has either an authored default value or
    /// authored time samples.  If the attribute has been
    /// \ref Usd_AttributeBlocking "blocked", then return `false`
    pub fn has_authored_value(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredValue(self.0, &mut result);
        }
        result
    }

    /// Return true if this attribute has a fallback value provided by
    /// a registered schema.
    pub fn has_fallback_value(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasFallbackValue(self.0, &mut result);
        }
        result
    }

    /// Return true if it is possible, but not certain, that this attribute's
    /// value changes over time, false otherwise.
    ///
    /// If this function returns false, it is certain that this attribute's
    /// value remains constant over time.
    ///
    /// This function is equivalent to checking if GetNumTimeSamples() > 1,
    /// but may be more efficient since it does not actually need to get a
    /// full count of all time samples.
    pub fn value_might_be_time_varying(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_ValueMightBeTimeVarying(self.0, &mut result);
        }
        result
    }
}

impl UsdAttribute {
    //! Connections

    /// Adds *source* to the list of connections, in the position
    /// specified by *position*.
    ///
    /// Issue an error if *source* identifies a master prim or an object
    /// descendant to a master prim.  It is not valid to author connections to
    /// these objects.
    ///
    /// What data this actually authors depends on what data is currently
    /// authored in the authoring layer, with respect to list-editing
    /// semantics, which we will document soon
    pub fn add_connection(
        &self,
        source: &SdfPath,
        position: UsdListPosition,
    ) -> Result<()> {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_AddConnection(
                self.0,
                &mut result,
                source.0,
                position.into(),
            );
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }

    /// Removes *target* from the list of targets.
    ///
    /// Issue an error if *source* identifies a master prim or an object
    /// descendant to a master prim.  It is not valid to author connections to
    /// these objects.
    pub fn remove_connection(&self, source: &SdfPath) -> Result<()> {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_RemoveConnection(
                self.0,
                &mut result,
                source.0,
            );
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }

    /*
    /// Clears all connection edits from the current EditTarget, and makes
    /// the opinion explicit, which means we are effectively resetting the
    /// composed value of the targets list to empty.
    pub fn block_connections(&self) -> Result<()> {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_BlockConnections(self.0, &mut result);
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }
    */

    /// Make the authoring layer's opinion of the connection list explicit,
    /// and set exactly to *sources*.
    ///
    /// Issue an error if *source* identifies a master prim or an object
    /// descendant to a master prim.  It is not valid to author connections to
    /// these objects.
    ///
    /// If any path in *sources* is invalid, issue an error and return false.
    pub fn set_connections(&self, sources: &[SdfPath]) -> Result<()> {
        let vec = SdfPathVector::from_slice(sources);
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_SetConnections(self.0, &mut result, vec.0);
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }

    /// Remove all opinions about the connections list from the current edit
    /// target.
    pub fn clear_connections(&self) -> Result<()> {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearConnections(self.0, &mut result);
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }

    /// Compose this attribute's connections and fill *sources* with the
    /// result.  All preexisting elements in *sources* are lost.
    ///
    /// See \ref Usd_ScenegraphInstancing_TargetsAndConnections for details on
    /// behavior when targets point to objects beneath instance prims.
    ///
    /// The result is not cached, and thus recomputed on each query.
    pub fn get_connections(&self) -> Result<SdfPathVector> {
        let mut vec = SdfPathVector::default();
        let mut result = false;

        unsafe {
            sys::pxr_UsdAttribute_GetConnections(self.0, &mut result, vec.0);
        }

        if result {
            Ok(vec)
        } else {
            Err(Error::Usd)
        }
    }

    /// Return true if this attribute has any authored opinions regarding
    /// connections.  Note that this includes opinions that remove connections,
    /// so a true return does not necessarily indicate that this attribute has
    /// connections.
    pub fn has_authored_connections(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredConnections(self.0, &mut result);
        }
        result
    }
}

impl UsdAttribute {
    //! Metadata

    /// Resolve the requested metadatum named *key* into *value*.
    ///
    /// # Errors
    /// * if *key* was not resolvable, or if *value*'s
    /// type *T* differed from that of the resolved metadatum.
    ///
    /// > For any composition-related metadata, as enumerated in
    /// GetAllMetadata(), this method will return only the strongest
    /// opinion found, not applying the composition rules used by Pcp
    /// to process the data.  For more processed/composed views of
    /// composition data, please refer to the specific interface classes,
    /// such as UsdReferences, UsdInherits, UsdVariantSets, etc.
    pub fn get_metadata<T>(&self, key: &TfToken) -> Option<VtValue>
    where
        T: ValueStore,
    {
        let mut result = false;
        let value = VtValue::new();
        unsafe {
            sys::pxr_UsdAttribute_GetMetadata_value(
                self.0,
                &mut result,
                &key.0,
                value.0,
            );
        }

        if result {
            Some(value)
        } else {
            None
        }
    }

    /// Set metadatum *key*'s value to *value*.
    ///
    /// # Errors
    /// * if *value*'s type does not match the schema type
    /// for *key*.
    pub fn set_metadata<T>(&self, key: &TfToken, value: &T) -> Result<()>
    where
        T: ValueStore,
    {
        let mut result = false;
        let value = VtValue::from(value);
        unsafe {
            sys::pxr_UsdAttribute_SetMetadata_value(
                self.0,
                &mut result,
                &key.0,
                value.0,
            );
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }

    /// Clears the authored *key*'s value at the current EditTarget,
    /// returning false on error.
    ///
    /// If no value is present, this method is a no-op and returns true. It is
    /// considered an error to call ClearMetadata when no spec is present for
    /// this UsdObject, i.e. if the object has no presence in the
    /// current UsdEditTarget.
    pub fn clear_metadata(&self, name: &TfToken) -> bool {
        let mut ok = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearMetadata(self.0, &mut ok, &name.0);
        }

        ok
    }

    /// Returns true if the *key* has a meaningful value, that is, if
    /// GetMetadata() will provide a value, either because it was authored
    /// or because a prim's metadata fallback will be provided.
    pub fn has_metadata(&self, name: &TfToken) -> bool {
        let mut ok = false;
        unsafe {
            sys::pxr_UsdAttribute_HasMetadata(self.0, &mut ok, &name.0);
        }

        ok
    }

    /// Returns true if the *key* has an authored value, false if no
    /// value was authored or the only value available is a prim's metadata
    /// fallback.
    pub fn has_authored_metadata(&self, name: &TfToken) -> bool {
        let mut ok = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredMetadata(self.0, &mut ok, &name.0);
        }

        ok
    }

    /// Resolve the requested dictionary sub-element *keyPath* of
    /// dictionary-valued metadatum named *key* into *value*,
    /// returning true on success.
    ///
    /// If you know you neeed just a small number of elements from a dictionary,
    /// accessing them element-wise using this method can be much less
    /// expensive than fetching the entire dictionary with GetMetadata(key).
    ///
    /// The *keyPath* is a ':'-separated path addressing an element
    /// in subdictionaries.
    ///
    /// # Errors
    /// * Returns None if *key* was not resolvable, or if *value*'s
    /// type *T* differed from that of the resolved metadatum.
    pub fn get_metadata_value_by_dict_key<T>(
        &self,
        key: &TfToken,
        key_path: &TfToken,
    ) -> Option<VtValue>
    where
        T: ValueStore,
    {
        let mut result = false;
        let value = VtValue::new();
        unsafe {
            sys::pxr_UsdAttribute_GetMetadataByDictKey_value(
                self.0,
                &mut result,
                &key.0,
                &key_path.0,
                value.0,
            );
        }

        if result {
            Some(value)
        } else {
            None
        }
    }

    /// Author *value* to the field identified by *key* and *keyPath*
    /// at the current EditTarget.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries stored in the metadata field at
    /// *key*.  Return true if the value is authored successfully, false
    /// otherwise.
    pub fn set_metadata_by_dict_key<T>(
        &self,
        key: &TfToken,
        key_path: &TfToken,
        value: &T,
    ) -> Result<()>
    where
        T: ValueStore,
    {
        let mut result = false;
        let value = VtValue::from(value);
        unsafe {
            sys::pxr_UsdAttribute_SetMetadataByDictKey(
                self.0,
                &mut result,
                &key.0,
                &key_path.0,
                value.0,
            );
        }

        if result {
            Ok(())
        } else {
            Err(Error::Usd)
        }
    }

    /// Clear any authored value identified by *key* and *keyPath*
    /// at the current EditTarget.  The *keyPath* is a ':'-separated path
    /// identifying a path in subdictionaries stored in the metadata field at
    /// *key*.  Return true if the value is cleared successfully, false
    /// otherwise.
    pub fn clear_metadata_by_dict_key(
        &self,
        key: &TfToken,
        key_path: &TfToken,
    ) -> bool {
        let mut ok = false;
        unsafe {
            sys::pxr_UsdAttribute_ClearMetadataByDictKey(
                self.0,
                &mut ok,
                &key.0,
                &key_path.0,
            );
        }

        ok
    }

    /// Return true if there exists any authored or fallback opinion for
    /// *key* and *keyPath*.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries stored in the metadata field at
    /// *key*.
    pub fn has_metadata_dict_key(
        &self,
        key: &TfToken,
        key_path: &TfToken,
    ) -> bool {
        let mut ok = false;
        unsafe {
            sys::pxr_UsdAttribute_HasMetadataDictKey(
                self.0,
                &mut ok,
                &key.0,
                &key_path.0,
            );
        }

        ok
    }

    /// Return true if there exists any authored opinion (excluding
    /// fallbacks) for *key* and *keyPath*.  The *keyPath* is a ':'-separated
    /// path identifying a value in subdictionaries stored in the metadata field
    /// at *key*.
    pub fn has_authored_metadata_dict_key(
        &self,
        key: &TfToken,
        key_path: &TfToken,
    ) -> bool {
        let mut ok = false;
        unsafe {
            sys::pxr_UsdAttribute_HasAuthoredMetadataDictKey(
                self.0,
                &mut ok,
                &key.0,
                &key_path.0,
            );
        }

        ok
    }
}

impl UsdAttribute {
    //! Value access

    /// Perform value resolution to fetch the value of this attribute at the
    /// requested UsdTimeCode *time*, which defaults to *default*.
    ///
    /// If no value is authored at *time* but values are authored at other
    /// times, this function will return an interpolated value based on the
    /// stage's interpolation type.
    /// See \ref Usd_AttributeInterpolation.
    ///
    /// This templated accessor is designed for high performance data-streaming
    /// applications, allowing one to fetch data into the same container
    /// repeatedly, avoiding memory allocations when possible (VtArray
    /// containers will be resized as necessary to conform to the size of
    /// data being read).
    ///
    /// This template is only instantiated for the valid scene description
    /// value types and their corresponding VtArray containers. See
    /// \ref Usd_Page_Datatypes for the complete list of types.
    ///
    /// Values are retrieved without regard to this attribute's variability.
    /// For example, a uniform attribute may retrieve time sample values
    /// if any are authored. However, the USD_VALIDATE_VARIABILITY TF_DEBUG
    /// code will cause debug information to be output if values that are
    /// inconsistent with this attribute's variability are retrieved.
    /// See UsdAttribute::GetVariability for more details.
    ///
    /// \return true if there was a value to be read, it was of the type T
    /// requested, and we read it successfully - false otherwise.
    ///
    /// For more details, see \ref Usd_ValueResolution , and also
    /// \ref Usd_AssetPathValuedAttributes for information on how to
    /// retrieve resolved asset paths from SdfAssetPath-valued attributes.
    pub fn get_value<T: Into<UsdTimeCode>>(&self, time: T) -> Option<VtValue> {
        let value = VtValue::new();
        let time: UsdTimeCode = time.into();
        let mut result = false;
        unsafe {
            sys::pxr_UsdAttribute_Get_value(
                self.0,
                &mut result,
                value.0,
                time.0,
            );
        }

        if result {
            Some(value)
        } else {
            None
        }
    }
}

#[repr(transparent)]
pub struct UsdAttributeVector(pub(crate) *mut sys::std_UsdAttributeVector_t);

unsafe impl OpaquePtr for UsdAttributeVector {
    type SysPointee = sys::std_UsdAttributeVector_t;
    type Pointee = UsdAttributeVector;
}

pub type UsdAttributeVectorRef<'a, P = UsdAttributeVector> = Ref<'a, P>;
pub type UsdAttributeVectorRefMut<'a, P = UsdAttributeVector> = RefMut<'a, P>;

impl UsdAttributeVector {
    pub fn new() -> UsdAttributeVector {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_UsdAttributeVector_ctor(&mut ptr)
                .into_result()
                .unwrap();
        }
        UsdAttributeVector(ptr)
    }

    pub unsafe fn get_unchecked(&self, index: usize) -> UsdAttributeRef {
        let mut ptr = std::ptr::null();
        sys::std_UsdAttributeVector_index(self.0, &mut ptr, index);
        UsdAttributeRef::new(ptr)
    }

    pub fn len(&self) -> usize {
        let mut result = 0;
        unsafe {
            sys::std_UsdAttributeVector_size(self.0, &mut result);
        }
        result
    }

    pub fn iter(&self) -> UsdAttributeVectorIter {
        UsdAttributeVectorIter {
            vec: self,
            current: 0,
            size: self.len(),
        }
    }
}

impl Drop for UsdAttributeVector {
    fn drop(&mut self) {
        unsafe {
            sys::std_UsdAttributeVector_dtor(self.0);
        }
    }
}

pub struct UsdAttributeVectorIter<'a> {
    vec: &'a UsdAttributeVector,
    current: usize,
    size: usize,
}

impl<'a> Iterator for UsdAttributeVectorIter<'a> {
    type Item = UsdAttributeRef<'a>;

    fn next(&mut self) -> Option<Self::Item> {
        if self.current == self.size {
            None
        } else {
            unsafe {
                let uar = self.vec.get_unchecked(self.current);
                self.current += 1;
                Some(uar)
            }
        }
    }
}

impl<'a> IntoIterator for &'a UsdAttributeVector {
    type Item = UsdAttributeRef<'a>;
    type IntoIter = UsdAttributeVectorIter<'a>;

    fn into_iter(self) -> Self::IntoIter {
        self.iter()
    }
}

impl Default for UsdAttributeVector {
    fn default() -> Self {
        UsdAttributeVector::new()
    }
}
