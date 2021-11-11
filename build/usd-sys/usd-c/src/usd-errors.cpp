#include "usd-errors.h"
#include "usd-errors-private.h"

thread_local std::string TLG_EXCEPTION_STRING;

USD_CPPMM_API const char* usd_get_exception_string() {
    return TLG_EXCEPTION_STRING.c_str();
}

