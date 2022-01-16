#include "pxr/usd/ndr/ndr_discovery_plugin_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "std_vector_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_GetSourceType(
    pxr_NdrDiscoveryPluginContext_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * discoveryType)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSourceType(to_cpp_ref(discoveryType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_dtor(
    pxr_NdrDiscoveryPlugin_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_GetSearchURIs(
    pxr_NdrDiscoveryPlugin_t const * this_
    , std_vector_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetSearchURIs());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

