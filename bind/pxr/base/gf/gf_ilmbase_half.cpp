#include <pxr/base/gf/half.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

namespace pxr_half {

struct GfHalf {
    using BoundType = pxr::GfHalf;

    /*
    half();

    half(float f);

    half(const pxr::pxr_half::half& h);

    operator float() const;

    pxr::pxr_half::half operator-() const;

    pxr::pxr_half::half& operator=(const pxr::pxr_half::half& );

    pxr::pxr_half::half& operator=(float f);

    pxr::pxr_half::half& operator+=(pxr::pxr_half::half h);

    pxr::pxr_half::half& operator+=(float f);

    pxr::pxr_half::half& operator-=(pxr::pxr_half::half h);

    pxr::pxr_half::half& operator-=(float f);

    pxr::pxr_half::half& operator*=(pxr::pxr_half::half h);

    pxr::pxr_half::half& operator*=(float f);

    pxr::pxr_half::half& operator/=(pxr::pxr_half::half h);

    pxr::pxr_half::half& operator/=(float f);

    pxr::pxr_half::half round(unsigned int n) const;

    bool isFinite() const;

    bool isNormalized() const;

    bool isDenormalized() const;

    bool isZero() const;

    bool isNan() const;

    bool isInfinity() const;

    bool isNegative() const;

    static pxr::pxr_half::half posInf();

    static pxr::pxr_half::half negInf();

    static pxr::pxr_half::half qNan();

    static pxr::pxr_half::half sNan();

    unsigned short bits() const;

    void setBits(unsigned short bits);

    ~half();


    struct uif {
        using BoundType = pxr::pxr_half::half::uif;

        uif();

        uif(const pxr::pxr_half::half::uif& );

        uif(pxr::pxr_half::half::uif&& ) CPPMM_IGNORE;

    } CPPMM_OPAQUEPTR; // struct uif
*/

} CPPMM_OPAQUEBYTES CPPMM_IGNORE_UNBOUND; // struct half


std::ostream& operator<<(std::ostream& os, pxr::pxr_half::half h) CPPMM_IGNORE;


std::istream& operator>>(std::istream& is, pxr::pxr_half::half& h) CPPMM_IGNORE;


void printBits(std::ostream& os, pxr::pxr_half::half h) CPPMM_IGNORE;


void printBits(std::ostream& os, float f) CPPMM_IGNORE;


void printBits(char* c, pxr::pxr_half::half h) CPPMM_IGNORE;


void printBits(char* c, float f) CPPMM_IGNORE;


} // namespace pxr_half

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
