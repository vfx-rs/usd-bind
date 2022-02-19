#include "pxr/usd/sdf/sdf_change_list_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_ctor(
    pxr_SdfChangeList_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfChangeList());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_copy(
    pxr_SdfChangeList_t * * this_
    , pxr_SdfChangeList_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfChangeList(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__assign(
    pxr_SdfChangeList_t * this_
    , pxr_SdfChangeList_t * * return_
    , pxr_SdfChangeList_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReplaceLayerContent(
    pxr_SdfChangeList_t * this_)
{
    try {
        (to_cpp(this_)) -> DidReplaceLayerContent();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReloadLayerContent(
    pxr_SdfChangeList_t * this_)
{
    try {
        (to_cpp(this_)) -> DidReloadLayerContent();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerResolvedPath(
    pxr_SdfChangeList_t * this_)
{
    try {
        (to_cpp(this_)) -> DidChangeLayerResolvedPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerIdentifier(
    pxr_SdfChangeList_t * this_
    , std_string_t const * oldIdentifier)
{
    try {
        (to_cpp(this_)) -> DidChangeLayerIdentifier(to_cpp_ref(oldIdentifier));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeSublayerPaths(
    pxr_SdfChangeList_t * this_
    , std_string_t const * subLayerPath
    , pxr_SdfChangeList_SubLayerChangeType changeType)
{
    try {
        (to_cpp(this_)) -> DidChangeSublayerPaths(to_cpp_ref(subLayerPath), pxr_SdfChangeList_SubLayerChangeType_to_cpp_ref(&(changeType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddPrim(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath
    , _Bool inert)
{
    try {
        (to_cpp(this_)) -> DidAddPrim(to_cpp_ref(primPath), inert);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemovePrim(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath
    , _Bool inert)
{
    try {
        (to_cpp(this_)) -> DidRemovePrim(to_cpp_ref(primPath), inert);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderPrims(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        (to_cpp(this_)) -> DidReorderPrims(to_cpp_ref(parentPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimName(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> DidChangePrimName(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimVariantSets(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath)
{
    try {
        (to_cpp(this_)) -> DidChangePrimVariantSets(to_cpp_ref(primPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimInheritPaths(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath)
{
    try {
        (to_cpp(this_)) -> DidChangePrimInheritPaths(to_cpp_ref(primPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimReferences(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath)
{
    try {
        (to_cpp(this_)) -> DidChangePrimReferences(to_cpp_ref(primPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimSpecializes(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath)
{
    try {
        (to_cpp(this_)) -> DidChangePrimSpecializes(to_cpp_ref(primPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddProperty(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * propPath
    , _Bool hasOnlyRequiredFields)
{
    try {
        (to_cpp(this_)) -> DidAddProperty(to_cpp_ref(propPath), hasOnlyRequiredFields);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveProperty(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * propPath
    , _Bool hasOnlyRequiredFields)
{
    try {
        (to_cpp(this_)) -> DidRemoveProperty(to_cpp_ref(propPath), hasOnlyRequiredFields);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderProperties(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * propPath)
{
    try {
        (to_cpp(this_)) -> DidReorderProperties(to_cpp_ref(propPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePropertyName(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> DidChangePropertyName(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeTimeSamples(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * attrPath)
{
    try {
        (to_cpp(this_)) -> DidChangeAttributeTimeSamples(to_cpp_ref(attrPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeConnection(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * attrPath)
{
    try {
        (to_cpp(this_)) -> DidChangeAttributeConnection(to_cpp_ref(attrPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeRelationshipTargets(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * relPath)
{
    try {
        (to_cpp(this_)) -> DidChangeRelationshipTargets(to_cpp_ref(relPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddTarget(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * targetPath)
{
    try {
        (to_cpp(this_)) -> DidAddTarget(to_cpp_ref(targetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveTarget(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * targetPath)
{
    try {
        (to_cpp(this_)) -> DidRemoveTarget(to_cpp_ref(targetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeInfo(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * oldValue
    , pxr_VtValue_t const * newValue)
{
    try {
        (to_cpp(this_)) -> DidChangeInfo(to_cpp_ref(path), to_cpp_ref(key), to_cpp_ref(oldValue), to_cpp_ref(newValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_GetEntry(
    pxr_SdfChangeList_t const * this_
    , pxr_SdfChangeList_Entry_t const * * return_
    , pxr_SdfPath_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetEntry(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_dtor(
    pxr_SdfChangeList_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_HasInfoChange(
    pxr_SdfChangeList_Entry_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasInfoChange(to_cpp_ref(key));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_copy(
    pxr_SdfChangeList_Entry_t * * this_
    , pxr_SdfChangeList_Entry_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry__assign(
    pxr_SdfChangeList_Entry_t * this_
    , pxr_SdfChangeList_Entry_t * * return_
    , pxr_SdfChangeList_Entry_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_dtor(
    pxr_SdfChangeList_Entry_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_ctor(
    pxr_SdfChangeList_Entry_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

