#include <pxr/base/tf/token.h>
#include <abigen/pxr/base/tf/tf_token.hpp>

void abi_gen_pxr_base_tf_tf_token(std::ostream& os) {
	os << "pxrInternal_v0_21__pxrReserved__::TfToken" << "|" << sizeof(pxrInternal_v0_21__pxrReserved__::TfToken) << "|" << alignof(pxrInternal_v0_21__pxrReserved__::TfToken) << "\n";
}
