#include "pxr/usd/pcp/pcp_path_translation_private.h"

#include "pxr/usd/pcp/pcp_map_function_private.h"
#include "pxr/usd/pcp/pcp_node_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRoot(
    pxr_SdfPath_t * * return_
    , pxr_PcpNodeRef_t const * sourceNode
    , pxr_SdfPath_t const * pathInNodeNamespace
    , _Bool * pathWasTranslated)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpTranslatePathFromNodeToRoot(to_cpp_ref(sourceNode), to_cpp_ref(pathInNodeNamespace), pathWasTranslated));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNode(
    pxr_SdfPath_t * * return_
    , pxr_PcpNodeRef_t const * destNode
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpTranslatePathFromRootToNode(to_cpp_ref(destNode), to_cpp_ref(pathInRootNamespace), pathWasTranslated));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslateTargetPathFromRootToNode(
    pxr_SdfPath_t * * return_
    , pxr_PcpNodeRef_t const * destNode
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpTranslateTargetPathFromRootToNode(to_cpp_ref(destNode), to_cpp_ref(pathInRootNamespace), pathWasTranslated));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNodeUsingFunction(
    pxr_SdfPath_t * * return_
    , pxr_PcpMapFunction_t const * mapToRoot
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpTranslatePathFromRootToNodeUsingFunction(to_cpp_ref(mapToRoot), to_cpp_ref(pathInRootNamespace), pathWasTranslated));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRootUsingFunction(
    pxr_SdfPath_t * * return_
    , pxr_PcpMapFunction_t const * mapToRoot
    , pxr_SdfPath_t const * pathInNodeNamespace
    , _Bool * pathWasTranslated)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpTranslatePathFromNodeToRootUsingFunction(to_cpp_ref(mapToRoot), to_cpp_ref(pathInNodeNamespace), pathWasTranslated));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

