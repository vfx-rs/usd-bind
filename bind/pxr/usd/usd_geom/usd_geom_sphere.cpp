#include <pxr/usd/usdGeom/sphere.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdGeomSphere
/// 
/// Defines a primitive sphere centered at the origin.
/// 
/// The fallback values for Cube, Sphere, Cone, and Cylinder are set so that
/// they all pack into the same volume/bounds.
struct UsdGeomSphere {
    using BoundType = pxr::UsdGeomSphere;

    UsdGeomSphere(const pxr::UsdGeomSphere& );


    /// Returns whether or not this class corresponds to a concrete instantiable
    /// prim type in scene description.  If this is true,
    /// GetStaticPrimDefinition() will return a valid prim definition with
    /// a non-empty typeName.
    bool IsConcrete() const;

    /// Returns whether or not this class inherits from UsdTyped. Types which
    /// inherit from UsdTyped can impart a typename on a UsdPrim.
    bool IsTyped() const;

    /// Returns whether this is an API schema or not.
    bool IsAPISchema() const;

    /// Returns whether this is an applied API schema or not. If this returns
    /// true this class will have an Apply() method
    bool IsAppliedAPISchema() const;

    /// Returns whether this is an applied API schema or not. If this returns
    /// true the constructor, Get and Apply methods of this class will take
    /// in the name of the API schema instance.
    bool IsMultipleApplyAPISchema() const;

    /// Attempt to ensure a \a UsdPrim adhering to this schema at *path*
    /// is defined (according to UsdPrim::IsDefined()) on this stage.
    /// 
    /// If a prim adhering to this schema at *path* is already defined on this
    /// stage, return that prim.  Otherwise author an \a SdfPrimSpec with
    /// \a specifier == \a SdfSpecifierDef and this schema's prim type name for
    /// the prim at *path* at the current EditTarget.  Author \a SdfPrimSpec s
    /// with *specifier* == \a SdfSpecifierDef and empty typeName at the
    /// current EditTarget for any nonexistent, or existing but not \a Defined
    /// ancestors.
    /// 
    /// The given \a path must be an absolute prim path that does not contain
    /// any variant selections.
    /// 
    /// If it is impossible to author any of the necessary PrimSpecs, (for
    /// example, in case \a path cannot map to the current UsdEditTarget's
    /// namespace) issue an error and return an invalid \a UsdPrim.
    /// 
    /// Note that this method may return a defined prim whose typeName does not
    /// specify this schema class, in case a stronger typeName opinion overrides
    /// the opinion at the current EditTarget.
    static pxr::UsdGeomSphere Define(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /*
    pxr::UsdSchemaType GetSchemaType() const;

    /// Return this schema object's held prim.
    pxr::UsdPrim GetPrim() const;

    /// Shorthand for GetPrim()->GetPath().
    pxr::SdfPath GetPath() const;

    /// Return the prim definition associated with this schema instance if one
    /// exists, otherwise return null.  This does not use the held prim's type.
    /// To get the held prim instance's definition, use
    /// UsdPrim::GetPrimDefinition().  \sa UsdPrim::GetPrimDefinition()
    const pxr::UsdPrimDefinition* GetSchemaClassPrimDefinition() const;

    static const pxr::TfTokenVector& GetSchemaAttributeNames(bool includeInherited);

    /// Return true if this schema object is compatible with its held prim,
    /// false otherwise.  For untyped schemas return true if the held prim is
    /// not expired, otherwise return false.  For typed schemas return true if
    /// the held prim is not expired and its type is the schema's type or a
    /// subtype of the schema's type.  Otherwise return false.  This method
    /// invokes polymorphic behavior.
    /// 
    /// \sa UsdSchemaBase::_IsCompatible()
    operator bool() const;

    /// Return a UsdTyped holding the prim adhering to this schema at *path*
    /// on *stage*.  If no prim exists at *path* on *stage*, or if the prim
    /// at that path does not adhere to this schema, return an invalid schema
    /// object.  This is shorthand for the following:
    /// 
    /// ```
    /// UsdTyped(stage->GetPrimAtPath(path));
    /// ```
    static pxr::UsdTyped Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Return a UsdGeomImageable holding the prim adhering to this
    /// schema at *path* on *stage*.  If no prim exists at *path* on
    /// *stage*, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// ```
    /// UsdGeomImageable(stage->GetPrimAtPath(path));
    /// ```
    static pxr::UsdGeomImageable Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Visibility is meant to be the simplest form of "pruning" 
    /// visibility that is supported by most DCC apps.  Visibility is 
    /// animatable, allowing a sub-tree of geometry to be present for some 
    /// segment of a shot, and absent from others; unlike the action of 
    /// deactivating geometry prims, invisible geometry is still 
    /// available for inspection, for positioning, for defining volumes, etc.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `token visibility = "inherited"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref UsdGeomTokens "Allowed Values" | inherited, invisible |
    pxr::UsdAttribute GetVisibilityAttr() const;

    /// See GetVisibilityAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateVisibilityAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Purpose is a classification of geometry into categories that 
    /// can each be independently included or excluded from traversals of prims 
    /// on a stage, such as rendering or bounding-box computation traversals.
    /// 
    /// See \ref UsdGeom_ImageablePurpose for more detail about how 
    /// \em purpose is computed and used.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token purpose = "default"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref UsdGeomTokens "Allowed Values" | default, render, proxy, guide |
    pxr::UsdAttribute GetPurposeAttr() const;

    /// See GetPurposeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreatePurposeAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The \em proxyPrim relationship allows us to link a
    /// prim whose \em purpose is "render" to its (single target)
    /// purpose="proxy" prim.  This is entirely optional, but can be
    /// useful in several scenarios:
    /// 
    /// \li In a pipeline that does pruning (for complexity management)
    /// by deactivating prims composed from asset references, when we
    /// deactivate a purpose="render" prim, we will be able to discover
    /// and additionally deactivate its associated purpose="proxy" prim,
    /// so that preview renders reflect the pruning accurately.
    /// 
    /// \li DCC importers may be able to make more aggressive optimizations
    /// for interactive processing and display if they can discover the proxy
    /// for a given render prim.
    /// 
    /// \li With a little more work, a Hydra-based application will be able
    /// to map a picked proxy prim back to its render geometry for selection.
    /// 
    /// \note It is only valid to author the proxyPrim relationship on
    /// prims whose purpose is "render".
    pxr::UsdRelationship GetProxyPrimRel() const;

    /// See GetProxyPrimRel(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create
    pxr::UsdRelationship CreateProxyPrimRel() const;

    /// \deprecated Please use UsdGeomPrimvarsAPI::CreatePrimvar() instead.
    pxr::UsdGeomPrimvar CreatePrimvar(const pxr::TfToken& attrName, const pxr::SdfValueTypeName& typeName, const pxr::TfToken& interpolation, int elementSize) const;

    /// \deprecated Please use UsdGeomPrimvarsAPI::GetPrimvar() instead.
    pxr::UsdGeomPrimvar GetPrimvar(const pxr::TfToken& name) const;

    /// \deprecated Please use UsdGeomPrimvarsAPI::GetPrimvars() instead.
    std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomPrimvar, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomPrimvar> > GetPrimvars() const;

    /// \deprecated Please use UsdGeomPrimvarsAPI::GetAuthoredPrimvars() instead.
    std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomPrimvar, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomPrimvar> > GetAuthoredPrimvars() const;

    /// \deprecated Please use UsdGeomPrimvarsAPI::HasPrimvar() instead.
    bool HasPrimvar(const pxr::TfToken& name) const;

    /// Returns an ordered list of allowed values of the purpose attribute.
    /// 
    /// The ordering is important because it defines the protocol between 
    /// UsdGeomModelAPI and UsdGeomBBoxCache for caching and retrieving extents 
    /// hints by purpose. 
    /// 
    /// The order is: [default, render, proxy, guide]
    /// 
    /// See \sa UsdGeomModelAPI::GetExtentsHint().
    /// 
    /// \sa GetOrderedPurposeTokens()
    static const pxr::TfTokenVector& GetOrderedPurposeTokens();

    /// Make the imageable visible if it is invisible at the given time.
    /// 
    /// Since visibility is pruning, this may need to override some 
    /// ancestor's visibility and all-but-one of the ancestor's children's 
    /// visibility, for all the ancestors of this prim up to the highest 
    /// ancestor that is explicitly invisible, to preserve the visibility state.
    /// 
    /// If MakeVisible() (or MakeInvisible()) is going to be applied to all 
    /// the prims on a stage, ancestors must be processed prior to descendants 
    /// to get the correct behavior.
    /// 
    /// \note When visibility is animated, this only works when it is 
    /// invoked sequentially at increasing time samples. If visibility is 
    /// already authored and animated in the scene, calling MakeVisible() at 
    /// an arbitrary (in-between) frame isn't guaranteed to work. 
    /// 
    /// \note This will only work properly if all ancestor prims of the 
    /// imageable are <b>defined</b>, as the imageable schema is only valid on 
    /// defined prims.
    /// 
    /// \note Be sure to set the edit target to the layer containing the 
    /// strongest visibility opinion or to a stronger layer.
    /// 
    /// \sa MakeInvisible()
    /// \sa ComputeVisibility()
    void MakeVisible(const pxr::UsdTimeCode& time) const;

    /// Makes the imageable invisible if it is visible at the given time.
    /// 
    /// \note When visibility is animated, this only works when it is 
    /// invoked sequentially at increasing time samples. If visibility is 
    /// already authored and animated in the scene, calling MakeVisible() at 
    /// an arbitrary (in-between) frame isn't guaranteed to work. 
    /// 
    /// \note Be sure to set the edit target to the layer containing the 
    /// strongest visibility opinion or to a stronger layer.
    /// 
    /// \sa MakeVisible()
    /// \sa ComputeVisibility()
    void MakeInvisible(const pxr::UsdTimeCode& time) const;

    /// Calculate the effective visibility of this prim, as defined by its
    /// most ancestral authored "invisible" opinion, if any.
    /// 
    /// A prim is considered visible at the current *time* if none of its
    /// Imageable ancestors express an authored "invisible" opinion, which is
    /// what leads to the "simple pruning" behavior described in 
    /// GetVisibilityAttr().
    /// 
    /// This function should be considered a reference implementation for
    /// correctness. <b>If called on each prim in the context of a traversal
    /// we will perform massive overcomputation, because sibling prims share
    /// sub-problems in the query that can be efficiently cached, but are not
    /// (cannot be) by this simple implementation.</b> If you have control of
    /// your traversal, it will be far more efficient to manage visibility
    /// on a stack as you traverse.
    /// 
    /// \sa GetVisibilityAttr()
    pxr::TfToken ComputeVisibility(const pxr::UsdTimeCode& time) const;

    /// \overload 
    /// Calculates the effective visibility of this prim, given the computed 
    /// visibility of its parent prim at the given *time*.
    /// 
    /// \sa GetVisibilityAttr()
    pxr::TfToken ComputeVisibility(const pxr::TfToken& parentVisibility, const pxr::UsdTimeCode& time) const;

    /// Calculate the effective purpose information about this prim which 
    /// includes final computed purpose value of the prim as well as whether
    /// the purpose value should be inherited by namespace children without 
    /// their own purpose opinions.
    /// 
    /// This function should be considered a reference implementation for
    /// correctness. <b>If called on each prim in the context of a traversal
    /// we will perform massive overcomputation, because sibling prims share
    /// sub-problems in the query that can be efficiently cached, but are not
    /// (cannot be) by this simple implementation.</b> If you have control of
    /// your traversal, it will be far more efficient to manage purpose, along
    /// with visibility, on a stack as you traverse.
    /// 
    /// \sa GetPurposeAttr(), \ref UsdGeom_ImageablePurpose
    pxr::UsdGeomImageable::PurposeInfo ComputePurposeInfo() const;

    /// \overload
    /// Calculates the effective purpose information about this prim, given the
    /// computed purpose information of its parent prim. This can be much more 
    /// efficient than using CommputePurposeInfo() when PurposeInfo values are 
    /// properly computed and cached for a hierarchy of prims using this 
    /// function.
    /// 
    /// \sa GetPurposeAttr(), \ref UsdGeom_ImageablePurpose
    pxr::UsdGeomImageable::PurposeInfo ComputePurposeInfo(const pxr::UsdGeomImageable::PurposeInfo& parentPurposeInfo) const;

    /// Calculate the effective purpose information about this prim. This is 
    /// equivalent to extracting the purpose from the value returned by
    /// ComputePurposeInfo().
    /// 
    /// This function should be considered a reference implementation for
    /// correctness. <b>If called on each prim in the context of a traversal
    /// we will perform massive overcomputation, because sibling prims share
    /// sub-problems in the query that can be efficiently cached, but are not
    /// (cannot be) by this simple implementation.</b> If you have control of
    /// your traversal, it will be far more efficient to manage purpose, along
    /// with visibility, on a stack as you traverse.
    /// 
    /// \sa GetPurposeAttr(), \ref UsdGeom_ImageablePurpose
    pxr::TfToken ComputePurpose() const;

    /// Find the prim whose purpose is \em proxy that serves as the proxy
    /// for this prim, as established by the GetProxyPrimRel(), or an
    /// invalid UsdPrim if this prim has no proxy.
    /// 
    /// This method will find the proxy for \em any prim whose computed
    /// purpose (see ComputePurpose()) is \em render.  If provided and a proxy 
    /// was found, we will set *renderPrim to the root of the \em render
    /// subtree upon which the renderProxy relationship was authored.
    /// 
    /// If the renderProxy relationship has more than one target, we will
    /// issue a warning and return an invalid UsdPrim.  If the targeted prim
    /// does not have a resolved purpose of \em proxy, we will warn and
    /// return an invalid prim.
    /// 
    /// This function should be considered a reference implementation for
    /// correctness. <b>If called on each prim in the context of a traversal
    /// we will perform massive overcomputation, because sibling prims share
    /// sub-problems in the query that can be efficiently cached, but are not
    /// (cannot be) by this simple implementation.</b> If you have control of
    /// your traversal, it will be far more efficient to compute proxy-prims
    /// on a stack as you traverse.
    /// 
    /// \note Currently the returned prim will not contain any instancing
    /// context if it is inside a master - its path will be relative to the
    /// master's root.  Once UsdPrim is instancing-aware in the core, we can
    /// change this method to return a context-aware result.
    /// 
    /// \sa SetProxyPrim(), GetProxyPrimRel()
    pxr::UsdPrim ComputeProxyPrim(pxr::UsdPrim* renderPrim) const;

    /// Convenience function for authoring the \em renderProxy rel on this
    /// prim to target the given *proxy* prim.
    /// 
    /// To facilitate authoring on sparse or unloaded stages, we do not
    /// perform any validation of this prim's purpose or the type or
    /// purpoes of the specified prim.
    /// 
    /// \sa ComputeProxyPrim(), GetProxyPrimRel()
    bool SetProxyPrim(const pxr::UsdPrim& proxy) const;

    /// \overload that takes any UsdSchemaBase-derived object
    bool SetProxyPrim(const pxr::UsdSchemaBase& proxy) const;

    /// Compute the bound of this prim in world space, at the specified
    /// *time*, and for the specified purposes.
    /// 
    /// The bound of the prim is computed, including the transform (if any)
    /// authored on the node itself, and then transformed to world space.
    /// 
    /// It is an error to not specify any purposes, which will result in the
    /// return of an empty box.
    /// 
    /// <b>If you need to compute bounds for multiple prims on a stage, it
    /// will be much, much more efficient to instantiate a UsdGeomBBoxCache
    /// and query it directly;  doing so will reuse sub-computations shared 
    /// by the prims.</b>
    pxr::GfBBox3d ComputeWorldBound(const pxr::UsdTimeCode& time, const pxr::TfToken& purpose1, const pxr::TfToken& purpose2, const pxr::TfToken& purpose3, const pxr::TfToken& purpose4) const;

    /// Compute the bound of this prim in local space, at the specified
    /// *time*, and for the specified purposes.
    /// 
    /// The bound of the prim is computed, including the transform (if any)
    /// authored on the node itself.
    /// 
    /// It is an error to not specify any purposes, which will result in the
    /// return of an empty box.
    /// 
    /// <b>If you need to compute bounds for multiple prims on a stage, it
    /// will be much, much more efficient to instantiate a UsdGeomBBoxCache
    /// and query it directly;  doing so will reuse sub-computations shared 
    /// by the prims.</b>
    pxr::GfBBox3d ComputeLocalBound(const pxr::UsdTimeCode& time, const pxr::TfToken& purpose1, const pxr::TfToken& purpose2, const pxr::TfToken& purpose3, const pxr::TfToken& purpose4) const;

    /// Compute the untransformed bound of this prim, at the specified
    /// *time*, and for the specified purposes.
    /// 
    /// The bound of the prim is computed in its object space, ignoring
    /// any transforms authored on or above the prim.
    /// 
    /// It is an error to not specify any purposes, which will result in the
    /// return of an empty box.
    /// 
    /// <b>If you need to compute bounds for multiple prims on a stage, it
    /// will be much, much more efficient to instantiate a UsdGeomBBoxCache
    /// and query it directly;  doing so will reuse sub-computations shared 
    /// by the prims.</b>
    pxr::GfBBox3d ComputeUntransformedBound(const pxr::UsdTimeCode& time, const pxr::TfToken& purpose1, const pxr::TfToken& purpose2, const pxr::TfToken& purpose3, const pxr::TfToken& purpose4) const;

    /// Compute the transformation matrix for this prim at the given time,
    /// including the transform authored on the Prim itself, if present.
    /// 
    /// <b>If you need to compute the transform for multiple prims on a
    /// stage, it will be much, much more efficient to instantiate a
    /// UsdGeomXformCache and query it directly; doing so will reuse
    /// sub-computations shared by the prims.</b>
    pxr::GfMatrix4d ComputeLocalToWorldTransform(const pxr::UsdTimeCode& time) const;

    /// Compute the transformation matrix for this prim at the given time,
    /// \em NOT including the transform authored on the prim itself.
    /// 
    /// <b>If you need to compute the transform for multiple prims on a
    /// stage, it will be much, much more efficient to instantiate a
    /// UsdGeomXformCache and query it directly; doing so will reuse
    /// sub-computations shared by the prims.</b>
    pxr::GfMatrix4d ComputeParentToWorldTransform(const pxr::UsdTimeCode& time) const;

    /// Return a UsdGeomXformable holding the prim adhering to this
    /// schema at *path* on *stage*.  If no prim exists at *path* on
    /// *stage*, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// ```
    /// UsdGeomXformable(stage->GetPrimAtPath(path));
    /// ```
    static pxr::UsdGeomXformable Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Encodes the sequence of transformation operations in the
    /// order in which they should be pushed onto a transform stack while
    /// visiting a UsdStage's prims in a graph traversal that will effect
    /// the desired positioning for this prim and its descendant prims.
    /// 
    /// You should rarely, if ever, need to manipulate this attribute directly.
    /// It is managed by the AddXformOp(), SetResetXformStack(), and
    /// SetXformOpOrder(), and consulted by GetOrderedXformOps() and
    /// GetLocalTransformation().
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token[] xformOpOrder` |
    /// | C++ Type | VtArray<TfToken> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->TokenArray |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    pxr::UsdAttribute GetXformOpOrderAttr() const;

    /// See GetXformOpOrderAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateXformOpOrderAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Add an affine transformation to the local stack represented by this 
    /// Xformable.  This will fail if there is already a transform operation
    /// of the same name in the ordered ops on this prim (i.e. as returned
    /// by GetOrderedXformOps()), or if an op of the same name exists at all
    /// on the prim with a different precision than that specified.
    /// 
    /// The newly created operation will become the most-locally applied
    /// transformation on the prim, and will appear last in the list
    /// returned by GetOrderedXformOps(). It is OK to begin authoring values
    /// to the returned UsdGeomXformOp immediately, interspersed with
    /// subsequent calls to AddXformOp() - just note the order of application,
    /// which \em can be changed at any time (and in stronger layers) via
    /// SetXformOpOrder().
    /// 
    /// \param opType is the type of transform operation, one of 
    ///        \ref UsdGeomXformOp::Type.  
    /// \param precision allows you to specify the precision with which you
    ///        desire to encode the data. This should be one of the values in 
    ///        the enum \ref UsdGeomXformOp::Precision .
    /// \param opSuffix allows you to specify the purpose/meaning of the op in 
    ///        the stack. When opSuffix is specified, the associated attribute's 
    ///        name is set to "xformOp:<opType>:<opSuffix>".
    /// \param isInverseOp is used to indicate an inverse transformation 
    ///        operation.
    /// 
    /// \return a UsdGeomXformOp that can be used to author to the operation.
    ///         An error is issued and the returned object will be invalid 
    ///         (evaluate to false) if the op being added already exists in 
    ///         \ref GetXformOpOrderAttr() "xformOpOrder" or if the 
    ///         arguments supplied are invalid.
    /// 
    /// \note If the attribute associated with the op already exists, but isn't 
    /// of the requested precision, a coding error is issued, but a valid 
    /// xformOp is returned with the existing attribute.
    pxr::UsdGeomXformOp AddXformOp(const pxr::UsdGeomXformOp::Type opType, const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a translate operation to the local stack represented by this 
    /// xformable.
    /// 
    /// \sa AddXformOp()
    pxr::UsdGeomXformOp AddTranslateOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a scale operation to the local stack represented by this 
    /// xformable.
    /// 
    /// \sa AddXformOp()
    pxr::UsdGeomXformOp AddScaleOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation about the X-axis to the local stack represented by 
    /// this xformable.
    /// 
    /// Set the angle value of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp()
    pxr::UsdGeomXformOp AddRotateXOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation about the YX-axis to the local stack represented by 
    /// this xformable.
    /// 
    /// Set the angle value of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp()
    pxr::UsdGeomXformOp AddRotateYOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation about the Z-axis to the local stack represented by 
    /// this xformable.
    /// 
    /// \sa AddXformOp()
    pxr::UsdGeomXformOp AddRotateZOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation op with XYZ rotation order to the local stack 
    /// represented by this xformable.
    /// 
    /// Set the angle value of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp(), \ref usdGeom_rotationPackingOrder "note on angle packing order"
    pxr::UsdGeomXformOp AddRotateXYZOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation op with XZY rotation order to the local stack 
    /// represented by this xformable.
    /// 
    /// Set the angle values of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp(), \ref usdGeom_rotationPackingOrder "note on angle packing order"
    pxr::UsdGeomXformOp AddRotateXZYOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation op with YXZ rotation order to the local stack 
    /// represented by this xformable.
    /// 
    /// Set the angle values of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp(), \ref usdGeom_rotationPackingOrder "note on angle packing order"
    pxr::UsdGeomXformOp AddRotateYXZOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation op with YZX rotation order to the local stack 
    /// represented by this xformable.
    /// 
    /// Set the angle values of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp(), \ref usdGeom_rotationPackingOrder "note on angle packing order"
    pxr::UsdGeomXformOp AddRotateYZXOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation op with ZXY rotation order to the local stack 
    /// represented by this xformable.
    /// 
    /// Set the angle values of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp(), \ref usdGeom_rotationPackingOrder "note on angle packing order"
    pxr::UsdGeomXformOp AddRotateZXYOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a rotation op with ZYX rotation order to the local stack 
    /// represented by this xformable.
    /// 
    /// Set the angle values of the resulting UsdGeomXformOp <b>in degrees</b>
    /// \sa AddXformOp(), \ref usdGeom_rotationPackingOrder "note on angle packing order"
    pxr::UsdGeomXformOp AddRotateZYXOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a orient op (arbitrary axis/angle rotation) to the local stack 
    /// represented by this xformable.
    /// 
    /// \sa AddXformOp()
    pxr::UsdGeomXformOp AddOrientOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Add a tranform op (4x4 matrix transformation) to the local stack 
    /// represented by this xformable.
    /// 
    /// \sa AddXformOp()
    /// 
    /// Note: This method takes a precision argument only to be consistent 
    /// with the other types of xformOps. The only valid precision here is 
    /// double since matrix values cannot be encoded in floating-pt precision
    /// in Sdf.
    pxr::UsdGeomXformOp AddTransformOp(const pxr::UsdGeomXformOp::Precision precision, const pxr::TfToken& opSuffix, bool isInverseOp) const;

    /// Specify whether this prim's transform should reset the transformation
    /// stack inherited from its parent prim.  
    /// 
    /// By default, parent transforms are inherited. SetResetXformStack() can be 
    /// called at any time during authoring, but will always add a 
    /// '!resetXformStack!' op as the \em first op in the ordered list, if one 
    /// does not exist already.  If one already exists, and *resetXform* is 
    /// false, it will remove all ops upto and including the last 
    /// "!resetXformStack!" op.
    bool SetResetXformStack(bool resetXform) const;

    /// Does this prim reset its parent's inherited transformation?
    /// 
    /// Returns true if "!resetXformStack!" appears \em anywhere in xformOpOrder.
    /// When this returns true, all ops upto the last "!resetXformStack!" in
    /// xformOpOrder are ignored when computing the local transformation.
    bool GetResetXformStack() const;

    /// Reorder the already-existing transform ops on this prim.
    /// 
    /// All elements in *orderedXformOps* must be valid and represent attributes
    /// on this prim.  Note that it is \em not required that all the existing
    /// operations be present in *orderedXformOps*, so this method can be used to
    /// completely change the transformation structure applied to the prim.
    /// 
    /// If *resetXformStack* is set to true, then "!resetXformOp! will be
    /// set as the first op in xformOpOrder, to indicate that the prim does 
    /// not inherit its parent's transformation.
    /// 
    /// \note If you wish to re-specify a prim's transformation completely in
    /// a stronger layer, you should first call this method with an \em empty
    /// *orderedXformOps* vector.  From there you can call AddXformOp() just as if
    /// you were authoring to the prim from scratch.
    /// 
    /// \return false if any of the elements of *orderedXformOps* are not extant
    /// on this prim, or if an error occurred while authoring the ordering 
    /// metadata.  Under either condition, no scene description is authored.
    /// 
    /// \sa GetOrderedXformOps()
    bool SetXformOpOrder(const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& orderedXformOps, bool resetXformStack) const;

    /// Return the ordered list of transform operations to be applied to
    /// this prim, in least-to-most-local order.  This is determined by the
    /// intersection of authored op-attributes and the explicit ordering of
    /// those attributes encoded in the *xformOpOrder* attribute on this prim.
    /// Any entries in *xformOpOrder* that do not correspond to valid 
    /// attributes on the xformable prim are skipped and a warning is issued.
    /// 
    /// A UsdGeomTransformable that has not had any ops added via AddXformOp()
    /// will return an empty vector.
    /// 
    /// The function also sets *resetsXformStack* to true if "!resetXformStack!"
    /// appears \em anywhere in xformOpOrder (i.e., if the prim resets its 
    /// parent's inherited transformation). 
    /// 
    /// \note A coding error is issued if resetsXformStack is NULL. 
    /// 
    /// \sa GetResetXformStack()
    std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> > GetOrderedXformOps(bool* resetsXformStack) const;

    /// Clears the local transform stack.
    bool ClearXformOpOrder() const;

    /// Clears the existing local transform stack and creates a new xform op of 
    /// type 'transform'. 
    /// 
    /// This API is provided for convenience since this is the most common 
    /// xform authoring operation.
    /// 
    /// \sa ClearXformOpOrder()
    /// \sa AddTransformOp()
    pxr::UsdGeomXformOp MakeMatrixXform() const;

    /// Determine whether there is any possibility that this prim's \em local
    /// transformation may vary over time.
    /// 
    /// The determination is based on a snapshot of the authored state of the
    /// op attributes on the prim, and may become invalid in the face of
    /// further authoring.
    bool TransformMightBeTimeVarying() const;

    /// \overload
    /// Determine whether there is any possibility that this prim's \em local
    /// transformation may vary over time, using a pre-fetched (cached) list of 
    /// ordered xform ops supplied by the client.
    /// 
    /// The determination is based on a snapshot of the authored state of the
    /// op attributes on the prim, and may become invalid in the face of
    /// further authoring.
    bool TransformMightBeTimeVarying(const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& ops) const;

    /// Sets *times* to the union of all the timesamples at which xformOps that 
    /// are included in the xformOpOrder attribute are authored. 
    /// 
    /// This clears the *times* vector before accumulating sample times 
    /// from all the xformOps.
    /// 
    /// \sa UsdAttribute::GetTimeSamples
    bool GetTimeSamples(std::vector<double, std::allocator<double> >* times) const;

    /// Sets *times* to the union of all the timesamples in the interval, 
    /// *interval*, at which xformOps that are included in the xformOpOrder
    /// attribute are authored. 
    /// 
    /// This clears the *times* vector before accumulating sample times 
    /// from all the xformOps.
    /// 
    /// \sa UsdAttribute::GetTimeSamples
    bool GetTimeSamplesInInterval(const pxr::GfInterval& interval, std::vector<double, std::allocator<double> >* times) const;

    /// Returns the union of all the timesamples at which the attributes 
    /// belonging to the given *orderedXformOps* are authored.
    /// 
    /// This clears the *times* vector before accumulating sample times 
    /// from *orderedXformOps*.
    /// 
    /// \sa UsdGeomXformable::GetTimeSamples
    static bool GetTimeSamples(const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& orderedXformOps, std::vector<double, std::allocator<double> >* times);

    /// Returns the union of all the timesamples in the *interval*
    /// at which the attributes belonging to the given *orderedXformOps* 
    /// are authored.
    /// 
    /// This clears the *times* vector before accumulating sample times 
    /// from *orderedXformOps*.
    /// 
    /// \sa UsdGeomXformable::GetTimeSamplesInInterval
    static bool GetTimeSamplesInInterval(const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& orderedXformOps, const pxr::GfInterval& interval, std::vector<double, std::allocator<double> >* times);

    /// Computes the fully-combined, local-to-parent transformation for this prim.
    /// 
    /// If a client does not need to manipulate the individual ops themselves, 
    /// and requires only the combined transform on this prim, this method will 
    /// take care of all the data marshalling and linear algebra needed to 
    /// combine the ops into a 4x4 affine transformation matrix, in 
    /// double-precision, regardless of the precision of the op inputs.
    /// 
    /// \param transform is the output parameter that will hold the local 
    ///        transform.
    /// \param resetsXformStack is the output parameter that informs client 
    ///        whether they need to reset the transform stack before pushing
    ///        *transform*.
    /// \param time is the UsdTimeCode at which to sample the ops.
    /// 
    /// \return true on success, false if there was an error reading data.
    /// 
    /// \note A coding error is issued if *transform* or *resetsXformStack* 
    ///       is NULL. 
    bool GetLocalTransformation(pxr::GfMatrix4d* transform, bool* resetsXformStack, const pxr::UsdTimeCode time) const;

    /// \overload 
    /// Computes the fully-combined, local-to-parent transformation for this 
    /// prim as efficiently as possible, using a pre-fetched (cached) list of 
    /// ordered xform ops supplied by the client.
    /// 
    /// \param transform is the output parameter that will hold the local 
    ///        transform.
    /// \param resetsXformStack is the output parameter that informs client 
    ///        whether they need to reset the transform stack before pushing
    ///        *transform*.
    /// \param ops is the ordered set of xform ops for this prim, and will be 
    ///        queried without any validity checking. Passing this in can save
    ///        significant value-resolution costs, if the client is able to 
    ///        retain this data from a call to GetOrderedXformOps().
    /// \param time is the UsdTimeCode at which to sample the ops.
    /// 
    /// \return true on success, false if there was an error reading data.
    /// 
    /// \note A coding error is issued if *transform* or *resetsXformStack* 
    ///       is NULL. 
    bool GetLocalTransformation(pxr::GfMatrix4d* transform, bool* resetsXformStack, const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& ops, const pxr::UsdTimeCode time) const;

    /// \overload
    /// This is a static version of the preceding function that takes 
    /// a cached list of ordered xform ops.
    /// 
    /// \param transform is the output parameter that will hold the local 
    ///        transform.
    /// \param ops is the ordered set of xform ops that must be combined 
    ///        together to compute the local transformation.
    /// \param time is the UsdTimeCode at which to sample the ops.
    /// 
    /// \return true on success, false if there was an error reading data.
    static bool GetLocalTransformation(pxr::GfMatrix4d* transform, const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& ops, const pxr::UsdTimeCode time);

    /// Returns true if the attribute named *attrName* could affect the local
    /// transformation of an xformable prim.
    static bool IsTransformationAffectedByAttrNamed(const pxr::TfToken& attrName);

    /// Return a UsdGeomBoundable holding the prim adhering to this
    /// schema at *path* on *stage*.  If no prim exists at *path* on
    /// *stage*, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// ```
    /// UsdGeomBoundable(stage->GetPrimAtPath(path));
    /// ```
    static pxr::UsdGeomBoundable Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Extent is a three dimensional range measuring the geometric
    /// extent of the authored gprim in its own local space (i.e. its own
    /// transform not applied), \em without accounting for any shader-induced
    /// displacement.  Whenever any geometry-affecting attribute is authored
    /// for any gprim in a layer, extent must also be authored at the same
    /// timesample; failure to do so will result in incorrect bounds-computation.
    /// \sa \ref UsdGeom_Boundable_Extent.
    /// 
    /// An authored extent on a prim which has children is expected to include
    /// the extent of all children, as they will be pruned from BBox computation
    /// during traversal.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `float3[] extent` |
    /// | C++ Type | VtArray<GfVec3f> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Float3Array |
    pxr::UsdAttribute GetExtentAttr() const;

    /// See GetExtentAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateExtentAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Compute the extent for the Boundable prim *boundable* at time
    /// *time*.  If successful, populates *extent* with the result and
    /// returns *true*, otherwise returns *false*.
    /// 
    /// The extent computation is based on the concrete type of the prim
    /// represented by *boundable*.  Plugins that provide a Boundable
    /// prim type may implement and register an extent computation for that
    /// type using #UsdGeomRegisterComputeExtentFunction.
    /// ComputeExtentFromPlugins will use this function to compute extents
    /// for all prims of that type.  If no function has been registered for
    /// a prim type, but a function has been registered for one of its 
    /// base types, that function will be used instead.
    /// 
    /// \note This function may load plugins in order to access the extent
    /// computation for a prim type.
    static bool ComputeExtentFromPlugins(const pxr::UsdGeomBoundable& boundable, const pxr::UsdTimeCode& time, pxr::VtVec3fArray* extent);

    /// \overload
    /// Computes the extent as if the matrix *transform* was first applied.
    static bool ComputeExtentFromPlugins(const pxr::UsdGeomBoundable& boundable, const pxr::UsdTimeCode& time, const pxr::GfMatrix4d& transform, pxr::VtVec3fArray* extent);

    /// Return a UsdGeomGprim holding the prim adhering to this
    /// schema at *path* on *stage*.  If no prim exists at *path* on
    /// *stage*, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// ```
    /// UsdGeomGprim(stage->GetPrimAtPath(path));
    /// ```
    static pxr::UsdGeomGprim Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// It is useful to have an "official" colorSet that can be used
    /// as a display or modeling color, even in the absence of any specified
    /// shader for a gprim.  DisplayColor serves this role; because it is a
    /// UsdGeomPrimvar, it can also be used as a gprim override for any shader
    /// that consumes a \em displayColor parameter.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `color3f[] primvars:displayColor` |
    /// | C++ Type | VtArray<GfVec3f> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Color3fArray |
    pxr::UsdAttribute GetDisplayColorAttr() const;

    /// See GetDisplayColorAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateDisplayColorAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Companion to \em displayColor that specifies opacity, broken
    /// out as an independent attribute rather than an rgba color, both so that
    /// each can be independently overridden, and because shaders rarely consume
    /// rgba parameters.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `float[] primvars:displayOpacity` |
    /// | C++ Type | VtArray<float> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->FloatArray |
    pxr::UsdAttribute GetDisplayOpacityAttr() const;

    /// See GetDisplayOpacityAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateDisplayOpacityAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Although some renderers treat all parametric or polygonal
    /// surfaces as if they were effectively laminae with outward-facing
    /// normals on both sides, some renderers derive significant optimizations
    /// by considering these surfaces to have only a single outward side,
    /// typically determined by control-point winding order and/or 
    /// \em orientation.  By doing so they can perform "backface culling" to
    /// avoid drawing the many polygons of most closed surfaces that face away
    /// from the viewer.
    /// 
    /// However, it is often advantageous to model thin objects such as paper
    /// and cloth as single, open surfaces that must be viewable from both
    /// sides, always.  Setting a gprim's \em doubleSided attribute to 
    /// *true* instructs all renderers to disable optimizations such as
    /// backface culling for the gprim, and attempt (not all renderers are able
    /// to do so, but the USD reference GL renderer always will) to provide
    /// forward-facing normals on each side of the surface for lighting
    /// calculations.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform bool doubleSided = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    pxr::UsdAttribute GetDoubleSidedAttr() const;

    /// See GetDoubleSidedAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateDoubleSidedAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Orientation specifies whether the gprim's surface normal 
    /// should be computed using the right hand rule, or the left hand rule.
    /// Please see \ref UsdGeom_WindingOrder for a deeper explanation and
    /// generalization of orientation to composed scenes with transformation
    /// hierarchies.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token orientation = "rightHanded"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref UsdGeomTokens "Allowed Values" | rightHanded, leftHanded |
    pxr::UsdAttribute GetOrientationAttr() const;

    /// See GetOrientationAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateOrientationAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Convenience function to get the displayColor Attribute as a Primvar.
    /// 
    /// \sa GetDisplayColorAttr(), CreateDisplayColorPrimvar()
    pxr::UsdGeomPrimvar GetDisplayColorPrimvar() const;

    /// Convenience function to create the displayColor primvar, optionally
    /// specifying interpolation and elementSize
    /// 
    /// \sa CreateDisplayColorAttr(), GetDisplayColorPrimvar()
    pxr::UsdGeomPrimvar CreateDisplayColorPrimvar(const pxr::TfToken& interpolation, int elementSize) const;

    /// Convenience function to get the displayOpacity Attribute as a Primvar.
    /// 
    /// \sa GetDisplayOpacityAttr(), CreateDisplayOpacityPrimvar()
    pxr::UsdGeomPrimvar GetDisplayOpacityPrimvar() const;

    /// Convenience function to create the displayOpacity primvar, optionally
    /// specifying interpolation and elementSize
    /// 
    /// \sa CreateDisplayOpacityAttr(), GetDisplayOpacityPrimvar()
    pxr::UsdGeomPrimvar CreateDisplayOpacityPrimvar(const pxr::TfToken& interpolation, int elementSize) const;

    /// Construct a UsdGeomSphere on UsdPrim *prim* .
    /// Equivalent to UsdGeomSphere::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid *prim*, but will not immediately throw an error for
    /// an invalid *prim*
    UsdGeomSphere(const pxr::UsdPrim& prim);

    /// Construct a UsdGeomSphere on the prim held by *schemaObj* .
    /// Should be preferred over UsdGeomSphere(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    UsdGeomSphere(const pxr::UsdSchemaBase& schemaObj);

    /// Destructor.
    ~UsdGeomSphere();

    /// Return a UsdGeomSphere holding the prim adhering to this
    /// schema at *path* on *stage*.  If no prim exists at *path* on
    /// *stage*, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// ```
    /// UsdGeomSphere(stage->GetPrimAtPath(path));
    /// ```
    static pxr::UsdGeomSphere Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Indicates the sphere's radius.  If you
    /// author \em radius you must also author \em extent.
    /// 
    /// \sa GetExtentAttr()
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `double radius = 1` |
    /// | C++ Type | double |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Double |
    pxr::UsdAttribute GetRadiusAttr() const;

    /// See GetRadiusAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author *defaultValue* as the attribute's default,
    /// sparsely (when it makes sense to do so) if *writeSparsely* is *true* -
    /// the default for *writeSparsely* is *false*.
    pxr::UsdAttribute CreateRadiusAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Compute the extent for the sphere defined by the radius.
    /// 
    /// \return true upon success, false if unable to calculate extent.
    /// 
    /// On success, extent will contain an approximate axis-aligned bounding 
    /// box of the sphere defined by the radius.
    /// 
    /// This function is to provide easy authoring of extent for usd authoring 
    /// tools, hence it is static and acts outside a specific prim (as in 
    /// attribute based methods).
    static bool ComputeExtent(double radius, pxr::VtVec3fArray* extent);

    /// \overload
    /// Computes the extent as if the matrix *transform* was first applied.
    static bool ComputeExtent(double radius, const pxr::GfMatrix4d& transform, pxr::VtVec3fArray* extent);

    pxr::UsdGeomSphere& operator=(const pxr::UsdGeomSphere& );
*/

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct UsdGeomSphere


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
