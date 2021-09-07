#include <fstream>

#include "pxr/base/tf/ref_ptr.hpp"
#include "pxr/base/tf/c-token.hpp"
#include "pxr/base/tf/c-type.hpp"
#include "pxr/base/tf/weak_ptr.hpp"
#include "pxr/usd/usd_geom/c-sphere.hpp"
#include "pxr/usd/usd_geom/c-xform.hpp"
#include "pxr/usd/sdf/c-layer.hpp"
#include "pxr/usd/sdf/c-path.hpp"
#include "pxr/usd/sdf/declare_handles.hpp"
#include "pxr/usd/usd/prim_flags.hpp"
#include "pxr/usd/usd/c-stage.hpp"
#include "pxr/usd/usd/prim_range.hpp"
#include "pxr/usd/usd/c-prim.hpp"
#include "std_string.hpp"

int main() {
    std::ofstream os("abigen.txt");

    abi_gen_pxr_base_tf_ref_ptr(os);
    abi_gen_pxr_base_tf_c_token(os);
    abi_gen_pxr_base_tf_c_type(os);
    abi_gen_pxr_base_tf_weak_ptr(os);
    abi_gen_pxr_usd_usd_geom_c_sphere(os);
    abi_gen_pxr_usd_usd_geom_c_xform(os);
    abi_gen_pxr_usd_sdf_c_layer(os);
    abi_gen_pxr_usd_sdf_c_path(os);
    abi_gen_pxr_usd_sdf_declare_handles(os);
    abi_gen_pxr_usd_usd_prim_flags(os);
    abi_gen_pxr_usd_usd_c_stage(os);
    abi_gen_pxr_usd_usd_prim_range(os);
    abi_gen_pxr_usd_usd_c_prim(os);
    abi_gen_std_string(os);
}
