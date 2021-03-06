#include <fstream>

#include "std_vector.hpp"
#include "std_map.hpp"
#include "pxr/usd/usd/usd_prim.hpp"
#include "pxr/usd/usd/usd_prim_range.hpp"
#include "pxr/usd/usd/usd_attribute.hpp"
#include "pxr/usd/usd/usd_time_code.hpp"
#include "pxr/usd/usd/usd_prim_flags.hpp"
#include "pxr/usd/usd/usd_property.hpp"
#include "pxr/usd/usd/usd_common.hpp"
#include "pxr/usd/usd/usd_stage.hpp"
#include "pxr/usd/sdf/sdf_path.hpp"
#include "pxr/usd/sdf/sdf_declare_handles.hpp"
#include "pxr/usd/sdf/sdf_value_type_name.hpp"
#include "pxr/usd/sdf/sdf_time_code.hpp"
#include "pxr/usd/sdf/sdf_asset_path.hpp"
#include "pxr/usd/sdf/sdf_layer.hpp"
#include "pxr/usd/usd_geom/usd_geom_metrics.hpp"
#include "pxr/usd/usd_geom/usd_geom_xform.hpp"
#include "pxr/usd/usd_geom/usd_geom_sphere.hpp"
#include "pxr/base/vt/vt_value.hpp"
#include "pxr/base/vt/vt_array.hpp"
#include "pxr/base/gf/gf_matrix.hpp"
#include "pxr/base/gf/gf_ilmbase_half.hpp"
#include "pxr/base/gf/gf_vec.hpp"
#include "pxr/base/gf/gf_quat.hpp"
#include "pxr/base/tf/tf_weak_ptr.hpp"
#include "pxr/base/tf/tf_diagnostic_mgr.hpp"
#include "pxr/base/tf/tf_type.hpp"
#include "pxr/base/tf/tf_ref_ptr.hpp"
#include "pxr/base/tf/tf_error.hpp"
#include "pxr/base/tf/tf_token.hpp"
#include "std_string.hpp"
#include "std_list.hpp"
#include "std_type_info.hpp"

int main() {
    std::ofstream os("abigen.txt");

    abi_gen_std_vector(os);
    abi_gen_std_map(os);
    abi_gen_pxr_usd_usd_usd_prim(os);
    abi_gen_pxr_usd_usd_usd_prim_range(os);
    abi_gen_pxr_usd_usd_usd_attribute(os);
    abi_gen_pxr_usd_usd_usd_time_code(os);
    abi_gen_pxr_usd_usd_usd_prim_flags(os);
    abi_gen_pxr_usd_usd_usd_property(os);
    abi_gen_pxr_usd_usd_usd_common(os);
    abi_gen_pxr_usd_usd_usd_stage(os);
    abi_gen_pxr_usd_sdf_sdf_path(os);
    abi_gen_pxr_usd_sdf_sdf_declare_handles(os);
    abi_gen_pxr_usd_sdf_sdf_value_type_name(os);
    abi_gen_pxr_usd_sdf_sdf_time_code(os);
    abi_gen_pxr_usd_sdf_sdf_asset_path(os);
    abi_gen_pxr_usd_sdf_sdf_layer(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_metrics(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_xform(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_sphere(os);
    abi_gen_pxr_base_vt_vt_value(os);
    abi_gen_pxr_base_vt_vt_array(os);
    abi_gen_pxr_base_gf_gf_matrix(os);
    abi_gen_pxr_base_gf_gf_ilmbase_half(os);
    abi_gen_pxr_base_gf_gf_vec(os);
    abi_gen_pxr_base_gf_gf_quat(os);
    abi_gen_pxr_base_tf_tf_weak_ptr(os);
    abi_gen_pxr_base_tf_tf_diagnostic_mgr(os);
    abi_gen_pxr_base_tf_tf_type(os);
    abi_gen_pxr_base_tf_tf_ref_ptr(os);
    abi_gen_pxr_base_tf_tf_error(os);
    abi_gen_pxr_base_tf_tf_token(os);
    abi_gen_std_string(os);
    abi_gen_std_list(os);
    abi_gen_std_type_info(os);
}
