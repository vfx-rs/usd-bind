#pragma once

// Stolen this setup from OIIO
#if defined(_WIN32) || defined(__CYGWIN__)
#    ifdef USD_STATIC_DEFINE
#        define USD_CPPMM_IMPORT
#        define USD_CPPMM_EXPORT
#    else
#        define USD_CPPMM_IMPORT __declspec(dllimport)
#        define USD_CPPMM_EXPORT __declspec(dllexport)
#    endif
#    define USD_LOCAL
#else
#    define USD_CPPMM_IMPORT __attribute__((visibility("default")))
#    define USD_CPPMM_EXPORT __attribute__((visibility("default")))
#    define USD_CPPMM_LOCAL __attribute__((visibility("hidden")))
#endif

#if defined(USD_CPPMM_BUILD_EXPORT)
#    define USD_CPPMM_API USD_CPPMM_EXPORT
#else
#    define USD_CPPMM_API USD_CPPMM_IMPORT
#endif

// Alignment
#if defined(_WIN32) || defined(__CYGWIN__)
    #define USD_CPPMM_ALIGN(x) __declspec(align(x))
#else
    #define USD_CPPMM_ALIGN(x) __attribute__((aligned(x)))
#endif


