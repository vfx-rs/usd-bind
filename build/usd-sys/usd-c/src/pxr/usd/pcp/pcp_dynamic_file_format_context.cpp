#include "pxr/usd/pcp/pcp_dynamic_file_format_context_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_dtor(
    pxr_PcpDynamicFileFormatContext_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_ComposeValue(
    pxr_PcpDynamicFileFormatContext_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * field
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> ComposeValue(to_cpp_ref(field), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

