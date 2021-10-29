#include <pxr/usd/usdGeom/mesh.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdGeomMesh
/// 
/// Encodes a mesh surface whose definition and feature-set
/// will converge with that of OpenSubdiv, http://graphics.pixar.com/opensubdiv/docs/subdivision_surfaces.html. Current exceptions/divergences include:
/// 
/// 1. Certain interpolation ("tag") parameters not yet supported
/// 
/// 2. Does not (as of 9/2014) yet support hierarchical edits.  We do intend
/// to provide some encoding in a future version of the schema.
/// 
/// A key property of this mesh schema is that it encodes both subdivision
/// surfaces, and non-subdived "polygonal meshes", by varying the
/// \em subdivisionScheme attribute.
/// 
/// \section UsdGeom_Mesh_Normals A Note About Normals
/// 
/// Normals should not be authored on a subdivided mesh, since subdivision
/// algorithms define their own normals. They should only be authored for
/// polygonal meshes.
/// 
/// The 'normals' attribute inherited from UsdGeomPointBased is not a generic
/// primvar, but the number of elements in this attribute will be determined by
/// its 'interpolation'.  See \ref UsdGeomPointBased::GetNormalsInterpolation() .
/// If 'normals' and 'primvars:normals' are both specified, the latter has
/// precedence.
/// 
/// For any described attribute \em Fallback \em Value or \em Allowed \em Values below
/// that are text/tokens, the actual token is published and defined in \ref UsdGeomTokens.
/// So to set an attribute to the value "rightHanded", use UsdGeomTokens->rightHanded
/// as the value.
struct UsdGeomMesh {
    using BoundType = pxr::UsdGeomMesh;

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

    /// Return this schema object's held prim.
    pxr::UsdPrim GetPrim() const;

    /// Shorthand for GetPrim()->GetPath().
    pxr::SdfPath GetPath() const;

    /// Construct a UsdGeomMesh on UsdPrim \p prim .
    /// Equivalent to UsdGeomMesh::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    UsdGeomMesh(const pxr::UsdPrim& prim) CPPMM_RENAME(from_prim);

    /// Construct a UsdGeomMesh on the prim held by \p schemaObj .
    /// Should be preferred over UsdGeomMesh(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    // UsdGeomMesh(const pxr::UsdSchemaBase& schemaObj);

    /// Destructor.
    ~UsdGeomMesh();

    /// Return a UsdGeomMesh holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdGeomMesh(stage->GetPrimAtPath(path));
    /// \endcode
    // static pxr::UsdGeomMesh Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Attempt to ensure a \a UsdPrim adhering to this schema at \p path
    /// is defined (according to UsdPrim::IsDefined()) on this stage.
    /// 
    /// If a prim adhering to this schema at \p path is already defined on this
    /// stage, return that prim.  Otherwise author an \a SdfPrimSpec with
    /// \a specifier == \a SdfSpecifierDef and this schema's prim type name for
    /// the prim at \p path at the current EditTarget.  Author \a SdfPrimSpec s
    /// with \p specifier == \a SdfSpecifierDef and empty typeName at the
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
    // static pxr::UsdGeomMesh Define(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);


    /// Compute the transformation matrix for this prim at the given time,
    /// including the transform authored on the Prim itself, if present.
    /// 
    /// <b>If you need to compute the transform for multiple prims on a
    /// stage, it will be much, much more efficient to instantiate a
    /// UsdGeomXformCache and query it directly; doing so will reuse
    /// sub-computations shared by the prims.</b>
    pxr::GfMatrix4d ComputeLocalToWorldTransform(const pxr::UsdTimeCode& time) const;




#if 0
    pxr::UsdSchemaType GetSchemaType() const;

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

    /// Return a UsdTyped holding the prim adhering to this schema at \p path
    /// on \p stage.  If no prim exists at \p path on \p stage, or if the prim
    /// at that path does not adhere to this schema, return an invalid schema
    /// object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdTyped(stage->GetPrimAtPath(path));
    /// \endcode
    static pxr::UsdTyped Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// Return a UsdGeomImageable holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdGeomImageable(stage->GetPrimAtPath(path));
    /// \endcode
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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
    /// A prim is considered visible at the current \p time if none of its
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
    /// visibility of its parent prim at the given \p time.
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
    /// prim to target the given \p proxy prim.
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
    /// \p time, and for the specified purposes.
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
    /// \p time, and for the specified purposes.
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
    /// \p time, and for the specified purposes.
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
    /// \em NOT including the transform authored on the prim itself.
    /// 
    /// <b>If you need to compute the transform for multiple prims on a
    /// stage, it will be much, much more efficient to instantiate a
    /// UsdGeomXformCache and query it directly; doing so will reuse
    /// sub-computations shared by the prims.</b>
    pxr::GfMatrix4d ComputeParentToWorldTransform(const pxr::UsdTimeCode& time) const;

    /// Return a UsdGeomXformable holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdGeomXformable(stage->GetPrimAtPath(path));
    /// \endcode
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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
    /// does not exist already.  If one already exists, and \p resetXform is 
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
    /// All elements in \p orderedXformOps must be valid and represent attributes
    /// on this prim.  Note that it is \em not required that all the existing
    /// operations be present in \p orderedXformOps, so this method can be used to
    /// completely change the transformation structure applied to the prim.
    /// 
    /// If \p resetXformStack is set to true, then "!resetXformOp! will be
    /// set as the first op in xformOpOrder, to indicate that the prim does 
    /// not inherit its parent's transformation.
    /// 
    /// \note If you wish to re-specify a prim's transformation completely in
    /// a stronger layer, you should first call this method with an \em empty
    /// \p orderedXformOps vector.  From there you can call AddXformOp() just as if
    /// you were authoring to the prim from scratch.
    /// 
    /// \return false if any of the elements of \p orderedXformOps are not extant
    /// on this prim, or if an error occurred while authoring the ordering 
    /// metadata.  Under either condition, no scene description is authored.
    /// 
    /// \sa GetOrderedXformOps()
    bool SetXformOpOrder(const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& orderedXformOps, bool resetXformStack) const;

    /// Return the ordered list of transform operations to be applied to
    /// this prim, in least-to-most-local order.  This is determined by the
    /// intersection of authored op-attributes and the explicit ordering of
    /// those attributes encoded in the \c xformOpOrder attribute on this prim.
    /// Any entries in \c xformOpOrder that do not correspond to valid 
    /// attributes on the xformable prim are skipped and a warning is issued.
    /// 
    /// A UsdGeomTransformable that has not had any ops added via AddXformOp()
    /// will return an empty vector.
    /// 
    /// The function also sets \p resetsXformStack to true if "!resetXformStack!"
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

    /// Sets \p times to the union of all the timesamples at which xformOps that 
    /// are included in the xformOpOrder attribute are authored. 
    /// 
    /// This clears the \p times vector before accumulating sample times 
    /// from all the xformOps.
    /// 
    /// \sa UsdAttribute::GetTimeSamples
    bool GetTimeSamples(std::vector<double, std::allocator<double> >* times) const;

    /// Sets \p times to the union of all the timesamples in the interval, 
    /// \p interval, at which xformOps that are included in the xformOpOrder
    /// attribute are authored. 
    /// 
    /// This clears the \p times vector before accumulating sample times 
    /// from all the xformOps.
    /// 
    /// \sa UsdAttribute::GetTimeSamples
    bool GetTimeSamplesInInterval(const pxr::GfInterval& interval, std::vector<double, std::allocator<double> >* times) const;

    /// Returns the union of all the timesamples at which the attributes 
    /// belonging to the given \p orderedXformOps are authored.
    /// 
    /// This clears the \p times vector before accumulating sample times 
    /// from \p orderedXformOps.
    /// 
    /// \sa UsdGeomXformable::GetTimeSamples
    static bool GetTimeSamples(const std::vector<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdGeomXformOp> >& orderedXformOps, std::vector<double, std::allocator<double> >* times);

    /// Returns the union of all the timesamples in the \p interval
    /// at which the attributes belonging to the given \p orderedXformOps 
    /// are authored.
    /// 
    /// This clears the \p times vector before accumulating sample times 
    /// from \p orderedXformOps.
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
    ///        \p transform.
    /// \param time is the UsdTimeCode at which to sample the ops.
    /// 
    /// \return true on success, false if there was an error reading data.
    /// 
    /// \note A coding error is issued if \p transform or \p resetsXformStack 
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
    ///        \p transform.
    /// \param ops is the ordered set of xform ops for this prim, and will be 
    ///        queried without any validity checking. Passing this in can save
    ///        significant value-resolution costs, if the client is able to 
    ///        retain this data from a call to GetOrderedXformOps().
    /// \param time is the UsdTimeCode at which to sample the ops.
    /// 
    /// \return true on success, false if there was an error reading data.
    /// 
    /// \note A coding error is issued if \p transform or \p resetsXformStack 
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

    /// Returns true if the attribute named \p attrName could affect the local
    /// transformation of an xformable prim.
    static bool IsTransformationAffectedByAttrNamed(const pxr::TfToken& attrName);

    /// Return a UsdGeomBoundable holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdGeomBoundable(stage->GetPrimAtPath(path));
    /// \endcode
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateExtentAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Compute the extent for the Boundable prim \p boundable at time
    /// \p time.  If successful, populates \p extent with the result and
    /// returns \c true, otherwise returns \c false.
    /// 
    /// The extent computation is based on the concrete type of the prim
    /// represented by \p boundable.  Plugins that provide a Boundable
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
    /// Computes the extent as if the matrix \p transform was first applied.
    static bool ComputeExtentFromPlugins(const pxr::UsdGeomBoundable& boundable, const pxr::UsdTimeCode& time, const pxr::GfMatrix4d& transform, pxr::VtVec3fArray* extent);

    /// Return a UsdGeomGprim holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdGeomGprim(stage->GetPrimAtPath(path));
    /// \endcode
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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
    /// \c true instructs all renderers to disable optimizations such as
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
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

    /// Return a UsdGeomPointBased holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    /// 
    /// \code
    /// UsdGeomPointBased(stage->GetPrimAtPath(path));
    /// \endcode
    // static pxr::UsdGeomPointBased Get(const pxr::UsdStagePtr& stage, const pxr::SdfPath& path);

    /// The primary geometry attribute for all PointBased
    /// primitives, describes points in (local) space.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `point3f[] points` |
    /// | C++ Type | VtArray<GfVec3f> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Point3fArray |
    pxr::UsdAttribute GetPointsAttr() const;

    /// See GetPointsAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreatePointsAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// If provided, 'velocities' should be used by renderers to 
    /// 
    /// compute positions between samples for the 'points' attribute, rather
    /// than interpolating between neighboring 'points' samples.  This is the
    /// only reasonable means of computing motion blur for topologically
    /// varying PointBased primitives.  It follows that the length of each
    /// 'velocities' sample must match the length of the corresponding
    /// 'points' sample.  Velocity is measured in position units per second,
    /// as per most simulation software. To convert to position units per
    /// UsdTimeCode, divide by UsdStage::GetTimeCodesPerSecond().
    /// 
    /// See also \ref UsdGeom_VelocityInterpolation .
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `vector3f[] velocities` |
    /// | C++ Type | VtArray<GfVec3f> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Vector3fArray |
    pxr::UsdAttribute GetVelocitiesAttr() const;

    /// See GetVelocitiesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateVelocitiesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// If provided, 'accelerations' should be used with
    /// velocities to compute positions between samples for the 'points'
    /// attribute rather than interpolating between neighboring 'points'
    /// samples. Acceleration is measured in position units per second-squared.
    /// To convert to position units per squared UsdTimeCode, divide by the
    /// square of UsdStage::GetTimeCodesPerSecond().
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `vector3f[] accelerations` |
    /// | C++ Type | VtArray<GfVec3f> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Vector3fArray |
    pxr::UsdAttribute GetAccelerationsAttr() const;

    /// See GetAccelerationsAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateAccelerationsAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Provide an object-space orientation for individual points, 
    /// which, depending on subclass, may define a surface, curve, or free 
    /// points.  Note that 'normals' should not be authored on any Mesh that
    /// is subdivided, since the subdivision algorithm will define its own
    /// normals. 'normals' is not a generic primvar, but the number of elements
    /// in this attribute will be determined by its 'interpolation'.  See
    /// \ref SetNormalsInterpolation() . If 'normals' and 'primvars:normals'
    /// are both specified, the latter has precedence.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `normal3f[] normals` |
    /// | C++ Type | VtArray<GfVec3f> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Normal3fArray |
    pxr::UsdAttribute GetNormalsAttr() const;

    /// See GetNormalsAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateNormalsAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Get the \ref Usd_InterpolationVals "interpolation" for the \em normals
    /// attribute.
    /// 
    /// Although 'normals' is not classified as a generic UsdGeomPrimvar (and
    /// will not be included in the results of UsdGeomImageable::GetPrimvars() )
    /// it does require an interpolation specification.  The fallback
    /// interpolation, if left unspecified, is UsdGeomTokens->vertex , 
    /// which will generally produce smooth shading on a polygonal mesh.
    /// To achieve partial or fully faceted shading of a polygonal mesh
    /// with normals, one should use UsdGeomTokens->faceVarying or
    /// UsdGeomTokens->uniform interpolation.
    pxr::TfToken GetNormalsInterpolation() const;

    /// Set the \ref Usd_InterpolationVals "interpolation" for the \em normals
    /// attribute.
    /// 
    /// \return true upon success, false if \p interpolation is not a legal
    /// value as defined by UsdGeomPrimvar::IsValidInterpolation(), or if there 
    /// was a problem setting the value.  No attempt is made to validate
    /// that the normals attr's value contains the right number of elements
    /// to match its interpolation to its prim's topology.
    /// 
    /// \sa GetNormalsInterpolation()
    bool SetNormalsInterpolation(const pxr::TfToken& interpolation);

    /// Compute the extent for the point cloud defined by points. 
    /// 
    /// \return true on success, false if extents was unable to be calculated.
    /// 
    /// On success, extent will contain the axis-aligned bounding box of the
    /// point cloud defined by points.
    /// 
    /// This function is to provide easy authoring of extent for usd authoring
    /// tools, hence it is static and acts outside a specific prim (as in 
    /// attribute based methods).
    static bool ComputeExtent(const pxr::VtVec3fArray& points, pxr::VtVec3fArray* extent);

    /// \overload
    /// Computes the extent as if the matrix \p transform was first applied.
    static bool ComputeExtent(const pxr::VtVec3fArray& points, const pxr::GfMatrix4d& transform, pxr::VtVec3fArray* extent);

    /// Compute points given the positions, velocities and accelerations
    /// at \p time. 
    /// 
    /// This will return \c false and leave \p points untouched if:
    /// - \p points is NULL
    /// - one of \p time and \p baseTime is numeric and the other is
    ///   UsdTimeCode::Default() (they must either both be numeric or both be
    ///   default)
    /// - there is no authored points attribute
    /// 
    /// If there is no error, we will return \c true and \p points will contain
    /// the computed points.
    /// 
    /// \param points - the out parameter for the new points.  Its size
    ///                 will depend on the authored data.
    /// \param time - UsdTimeCode at which we want to evaluate the transforms
    /// \param baseTime - required for correct interpolation between samples
    ///                   when \em velocities or \em accelerations are
    ///                   present. If there are samples for \em positions and
    ///                   \em velocities at t1 and t2, normal value resolution
    ///                   would attempt to interpolate between the two samples,
    ///                   and if they could not be interpolated because they
    ///                   differ in size (common in cases where velocity is
    ///                   authored), will choose the sample at t1.  When
    ///                   sampling for the purposes of motion-blur, for example,
    ///                   it is common, when rendering the frame at t2, to 
    ///                   sample at [ t2-shutter/2, t2+shutter/2 ] for a
    ///                   shutter interval of \em shutter.  The first sample
    ///                   falls between t1 and t2, but we must sample at t2
    ///                   and apply velocity-based interpolation based on those
    ///                   samples to get a correct result.  In such scenarios,
    ///                   one should provide a \p baseTime of t2 when querying
    ///                   \em both samples. If your application does not care
    ///                   about off-sample interpolation, it can supply the
    ///                   same value for \p baseTime that it does for \p time.
    ///                   When \p baseTime is less than or equal to \p time,
    ///                   we will choose the lower bracketing timeSample.
    bool ComputePointsAtTime(pxr::VtVec3fArray* points, const pxr::UsdTimeCode time, const pxr::UsdTimeCode baseTime) const;

    /// Compute points as in ComputePointsAtTime, but using multiple sample times. An
    /// array of vector arrays is returned where each vector array contains the
    /// points for the corresponding time in \p times .
    /// 
    /// \param times - A vector containing the UsdTimeCodes at which we want to
    ///                sample.
    bool ComputePointsAtTimes(std::vector<pxrInternal_v0_20__pxrReserved__::VtArray<pxrInternal_v0_20__pxrReserved__::GfVec3f>, std::allocator<pxrInternal_v0_20__pxrReserved__::VtArray<pxrInternal_v0_20__pxrReserved__::GfVec3f> > >* pointsArray, const std::vector<pxrInternal_v0_20__pxrReserved__::UsdTimeCode, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdTimeCode> >& times, const pxr::UsdTimeCode baseTime) const;

    /// \overload
    /// Perform the point computation. This does the same computation as
    /// the non-static ComputePointsAtTime method, but takes all
    /// data as parameters rather than accessing authored data.
    /// 
    /// \param points - the out parameter for the computed points. Its size
    ///                 will depend on the given data.
    /// \param stage - the UsdStage
    /// \param time - time at which we want to evaluate the transforms
    /// \param positions - array containing all current points.
    /// \param velocities - array containing all velocities. This array
    ///                     must be either the same size as \p positions or
    ///                     empty. If it is empty, points are computed as if
    ///                     all velocities were zero in all dimensions.
    /// \param velocitiesSampleTime - time at which the samples from
    ///                               \p velocities were taken.
    /// \param accelerations - array containing all accelerations. 
    ///                     This array must be either the same size as 
    ///                     \p positions or empty. If it is empty, points
    ///                     are computed as if all accelerations were zero in 
    ///                     all dimensions.
    /// \param velocityScale - factor used to artificially increase the effect
    ///                        of velocity on positions.
    static bool ComputePointsAtTime(pxr::VtVec3fArray* points, pxr::UsdStageWeakPtr& stage, pxr::UsdTimeCode time, const pxr::VtVec3fArray& positions, const pxr::VtVec3fArray& velocities, pxr::UsdTimeCode velocitiesSampleTime, const pxr::VtVec3fArray& accelerations, float velocityScale);

    /// Flat list of the index (into the 'points' attribute) of each
    /// vertex of each face in the mesh.  If this attribute has more than
    /// one timeSample, the mesh is considered to be topologically varying.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int[] faceVertexIndices` |
    /// | C++ Type | VtArray<int> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->IntArray |
    pxr::UsdAttribute GetFaceVertexIndicesAttr() const;

    /// See GetFaceVertexIndicesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateFaceVertexIndicesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Provides the number of vertices in each face of the mesh, 
    /// which is also the number of consecutive indices in 'faceVertexIndices'
    /// that define the face.  The length of this attribute is the number of
    /// faces in the mesh.  If this attribute has more than
    /// one timeSample, the mesh is considered to be topologically varying.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int[] faceVertexCounts` |
    /// | C++ Type | VtArray<int> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->IntArray |
    pxr::UsdAttribute GetFaceVertexCountsAttr() const;

    /// See GetFaceVertexCountsAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateFaceVertexCountsAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The subdivision scheme to be applied to the surface.  
    /// Valid values are "catmullClark" (the default), "loop", "bilinear", and
    /// "none" (i.e. a polymesh with no subdivision - the primary difference
    /// between schemes "bilinear" and "none" is that bilinearly subdivided
    /// meshes can be considered watertight, whereas there is no such guarantee
    /// for un-subdivided polymeshes, and more mesh features (e.g. holes) may
    /// apply to bilinear meshes but not polymeshes.  Polymeshes \em may be
    /// lighterweight and faster to render, depending on renderer and render
    /// mode.)
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform token subdivisionScheme = "catmullClark"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    /// | \ref UsdGeomTokens "Allowed Values" | catmullClark, loop, bilinear, none |
    pxr::UsdAttribute GetSubdivisionSchemeAttr() const;

    /// See GetSubdivisionSchemeAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateSubdivisionSchemeAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Specifies how interpolation boundary face edges are
    /// interpolated. Valid values are "none", 
    /// "edgeAndCorner" (the default), or "edgeOnly".
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `token interpolateBoundary = "edgeAndCorner"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref UsdGeomTokens "Allowed Values" | none, edgeAndCorner, edgeOnly |
    pxr::UsdAttribute GetInterpolateBoundaryAttr() const;

    /// See GetInterpolateBoundaryAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateInterpolateBoundaryAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Specifies how face varying data is interpolated.  Valid values
    /// are "all" (no smoothing), "cornersPlus1" (the default, Smooth UV),
    /// "none" (Same as "cornersPlus1" but does not infer the presence 
    /// of corners where two faceVarying edges meet at a single face), or 
    /// "boundaries" (smooth only near vertices that are not at a
    /// discontinuous boundary).
    /// 
    /// See http://graphics.pixar.com/opensubdiv/docs/subdivision_surfaces.html#face-varying-interpolation-rules
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `token faceVaryingLinearInterpolation = "cornersPlus1"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref UsdGeomTokens "Allowed Values" | all, none, boundaries, cornersOnly, cornersPlus1, cornersPlus2 |
    pxr::UsdAttribute GetFaceVaryingLinearInterpolationAttr() const;

    /// See GetFaceVaryingLinearInterpolationAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateFaceVaryingLinearInterpolationAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Specifies what weights are used during triangle subdivision for
    /// the Catmull-Clark scheme. Valid values are "catmullClark" (the default) 
    /// and "smooth".
    /// 
    /// See http://graphics.pixar.com/opensubdiv/docs/subdivision_surfaces.html#triangle-subdivision-rule
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `token triangleSubdivisionRule = "catmullClark"` |
    /// | C++ Type | TfToken |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Token |
    /// | \ref UsdGeomTokens "Allowed Values" | catmullClark, smooth |
    pxr::UsdAttribute GetTriangleSubdivisionRuleAttr() const;

    /// See GetTriangleSubdivisionRuleAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateTriangleSubdivisionRuleAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The face indices (indexing into the 'faceVertexCounts'
    /// attribute) of all faces that should be made invisible.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int[] holeIndices = []` |
    /// | C++ Type | VtArray<int> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->IntArray |
    pxr::UsdAttribute GetHoleIndicesAttr() const;

    /// See GetHoleIndicesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateHoleIndicesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The vertex indices of all vertices that are sharp corners.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int[] cornerIndices = []` |
    /// | C++ Type | VtArray<int> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->IntArray |
    pxr::UsdAttribute GetCornerIndicesAttr() const;

    /// See GetCornerIndicesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateCornerIndicesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The sharpness values for corners: each corner gets a single
    /// sharpness value (Usd.Mesh.SHARPNESS_INFINITE for a perfectly sharp
    /// corner), so the size of this array must match that of
    /// 'cornerIndices'
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `float[] cornerSharpnesses = []` |
    /// | C++ Type | VtArray<float> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->FloatArray |
    pxr::UsdAttribute GetCornerSharpnessesAttr() const;

    /// See GetCornerSharpnessesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateCornerSharpnessesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The indices of all vertices forming creased edges.  The size of 
    /// this array must be equal to the sum of all elements of the 
    /// 'creaseLengths' attribute.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int[] creaseIndices = []` |
    /// | C++ Type | VtArray<int> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->IntArray |
    pxr::UsdAttribute GetCreaseIndicesAttr() const;

    /// See GetCreaseIndicesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateCreaseIndicesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The length of this array specifies the number of creases on the
    /// surface. Each element gives the number of (must be adjacent) vertices in
    /// each crease, whose indices are linearly laid out in the 'creaseIndices'
    /// attribute. Since each crease must be at least one edge long, each
    /// element of this array should be greater than one.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `int[] creaseLengths = []` |
    /// | C++ Type | VtArray<int> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->IntArray |
    pxr::UsdAttribute GetCreaseLengthsAttr() const;

    /// See GetCreaseLengthsAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateCreaseLengthsAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// The per-crease or per-edge sharpness for all creases
    /// (Usd.Mesh.SHARPNESS_INFINITE for a perfectly sharp crease).  Since
    /// 'creaseLengths' encodes the number of vertices in each crease, the
    /// number of elements in this array will be either len(creaseLengths) or
    /// the sum over all X of (creaseLengths[X] - 1). Note that while
    /// the RI spec allows each crease to have either a single sharpness
    /// or a value per-edge, USD will encode either a single sharpness
    /// per crease on a mesh, or sharpnesses for all edges making up
    /// the creases on a mesh.
    /// 
    /// | ||
    /// | -- | -- |
    /// | Declaration | `float[] creaseSharpnesses = []` |
    /// | C++ Type | VtArray<float> |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->FloatArray |
    pxr::UsdAttribute GetCreaseSharpnessesAttr() const;

    /// See GetCreaseSharpnessesAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    pxr::UsdAttribute CreateCreaseSharpnessesAttr(const pxr::VtValue& defaultValue, bool writeSparsely) const;

    /// Validate the topology of a mesh.
    /// This validates that the sum of \p faceVertexCounts is equal to the size
    /// of the \p faceVertexIndices array, and that all face vertex indices in
    /// the \p faceVertexIndices array are in the range [0, numPoints).
    /// Returns true if the topology is valid, or false otherwise.
    /// If the topology is invalid and \p reason is non-null, an error message
    /// describing the validation error will be set.
    static bool ValidateTopology(const pxr::VtIntArray& faceVertexIndices, const pxr::VtIntArray& faceVertexCounts, size_t numPoints, std::string* reason);

#endif

    UsdGeomMesh(const pxr::UsdGeomMesh& );

    pxr::UsdGeomMesh& operator=(const pxr::UsdGeomMesh& );

} CPPMM_OPAQUEPTR; // struct UsdGeomMesh


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
