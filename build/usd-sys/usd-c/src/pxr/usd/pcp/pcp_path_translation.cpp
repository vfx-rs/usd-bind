#include "pxr/usd/pcp/pcp_path_translation_private.h"

#include "pxr/usd/pcp/pcp_map_function_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"

#include <stdexcept>

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

