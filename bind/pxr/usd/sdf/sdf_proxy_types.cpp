#include <pxr/usd/sdf/proxyTypes.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

using SdfNameOrderProxy = pxr::SdfNameOrderProxy;


using SdfSubLayerProxy = pxr::SdfSubLayerProxy;


using SdfNameEditorProxy = pxr::SdfNameEditorProxy;


using SdfPathEditorProxy = pxr::SdfPathEditorProxy;


using SdfPayloadEditorProxy = pxr::SdfPayloadEditorProxy;


using SdfReferenceEditorProxy = pxr::SdfReferenceEditorProxy;


using SdfAttributeSpecView = pxr::SdfAttributeSpecView;


using SdfPrimSpecView = pxr::SdfPrimSpecView;


using SdfPropertySpecView = pxr::SdfPropertySpecView;


using SdfRelationalAttributeSpecView = pxr::SdfRelationalAttributeSpecView;


using SdfRelationshipSpecView = pxr::SdfRelationshipSpecView;


using SdfVariantView = pxr::SdfVariantView;


using SdfVariantSetView = pxr::SdfVariantSetView;


using SdfVariantSetsProxy = pxr::SdfVariantSetsProxy;


using SdfNameChildrenOrderProxy = pxr::SdfNameChildrenOrderProxy;


using SdfPropertyOrderProxy = pxr::SdfPropertyOrderProxy;


using SdfConnectionsProxy = pxr::SdfConnectionsProxy;


using SdfInheritsProxy = pxr::SdfInheritsProxy;


using SdfSpecializesProxy = pxr::SdfSpecializesProxy;


using SdfTargetsProxy = pxr::SdfTargetsProxy;


using SdfPayloadsProxy = pxr::SdfPayloadsProxy;


using SdfReferencesProxy = pxr::SdfReferencesProxy;


using SdfVariantSetNamesProxy = pxr::SdfVariantSetNamesProxy;


using SdfDictionaryProxy = pxr::SdfDictionaryProxy;


using SdfVariantSelectionProxy = pxr::SdfVariantSelectionProxy;


using SdfRelocatesMapProxy = pxr::SdfRelocatesMapProxy;


/// Returns a path list editor proxy for the path list op in the given
/// \p pathField on \p spec.  If the value doesn't exist or \p spec is 
/// invalid then this returns an invalid list editor.
pxr::SdfPathEditorProxy SdfGetPathEditorProxy(const pxr::SdfSpecHandle& spec, const pxr::TfToken& pathField);


/// Returns a reference list editor proxy for the references list op in the
/// given \p referenceField on \p spec. If the value doesn't exist or the object
/// is invalid then this returns an invalid list editor.
pxr::SdfReferenceEditorProxy SdfGetReferenceEditorProxy(const pxr::SdfSpecHandle& spec, const pxr::TfToken& referenceField);


/// Returns a payload list editor proxy for the payloads list op in the given
/// \p payloadField on \p spec.  If the value doesn't exist or the object is 
/// invalid then this returns an invalid list editor.
pxr::SdfPayloadEditorProxy SdfGetPayloadEditorProxy(const pxr::SdfSpecHandle& spec, const pxr::TfToken& payloadField);


/// Returns a name order list proxy for the ordering specified in the given
/// \p orderField on \p spec.  If the value doesn't exist or the object is
/// invalid then this returns an invalid list editor.
pxr::SdfNameOrderProxy SdfGetNameOrderProxy(const pxr::SdfSpecHandle& spec, const pxr::TfToken& orderField);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
