#include "pxr/usd/pcp/pcp_dynamic_file_format_interface_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/pcp/pcp_dynamic_file_format_context_private.h"
#include "std_map_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_dtor(
    pxr_PcpDynamicFileFormatInterface_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_ComposeFieldsForFileFormatArguments(
    pxr_PcpDynamicFileFormatInterface_t const * this_
    , std_string_t const * assetPath
    , pxr_PcpDynamicFileFormatContext_t const * context
    , std_map_string_string_t * args
    , pxr_VtValue_t * dependencyContextData)
{
    try {
        (to_cpp(this_)) -> ComposeFieldsForFileFormatArguments(to_cpp_ref(assetPath), to_cpp_ref(context), to_cpp(args), to_cpp(dependencyContextData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_CanFieldChangeAffectFileFormatArguments(
    pxr_PcpDynamicFileFormatInterface_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * field
    , pxr_VtValue_t const * oldValue
    , pxr_VtValue_t const * newValue
    , pxr_VtValue_t const * dependencyContextData)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanFieldChangeAffectFileFormatArguments(to_cpp_ref(field), to_cpp_ref(oldValue), to_cpp_ref(newValue), to_cpp_ref(dependencyContextData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface__assign(
    pxr_PcpDynamicFileFormatInterface_t * this_
    , pxr_PcpDynamicFileFormatInterface_t * * return_
    , pxr_PcpDynamicFileFormatInterface_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

