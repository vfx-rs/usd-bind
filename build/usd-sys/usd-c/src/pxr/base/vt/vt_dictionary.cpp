#include "pxr/base/vt/vt_dictionary_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtDictionary_ctor(
    pxr_VtDictionary_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::VtDictionary());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtDictionary_dtor(
    pxr_VtDictionary_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

