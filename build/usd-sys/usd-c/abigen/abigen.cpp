#include <fstream>

#include "std_vector.hpp"
#include "std_map.hpp"
#include "pxr/usd/usd/usd_prim.hpp"
#include "pxr/usd/usd/usd_references.hpp"
#include "pxr/usd/usd/usd_prim_range.hpp"
#include "pxr/usd/usd/usd_attribute.hpp"
#include "pxr/usd/usd/usd_time_code.hpp"
#include "pxr/usd/usd/usd_prim_flags.hpp"
#include "pxr/usd/usd/usd_property.hpp"
#include "pxr/usd/usd/usd_common.hpp"
#include "pxr/usd/usd/usd_stage.hpp"
#include "pxr/usd/pcp/pcp_arc.hpp"
#include "pxr/usd/pcp/pcp_target_index.hpp"
#include "pxr/usd/pcp/pcp_node.hpp"
#include "pxr/usd/pcp/pcp_map_expression.hpp"
#include "pxr/usd/pcp/pcp_map_function.hpp"
#include "pxr/usd/pcp/pcp_errors.hpp"
#include "pxr/usd/pcp/pcp_dynamic_file_format_interface.hpp"
#include "pxr/usd/pcp/pcp_prim_index.hpp"
#include "pxr/usd/pcp/pcp_namespace_edits.hpp"
#include "pxr/usd/pcp/pcp_dependency.hpp"
#include "pxr/usd/pcp/pcp_layer_stack.hpp"
#include "pxr/usd/pcp/pcp_dynamic_file_format_context.hpp"
#include "pxr/usd/pcp/pcp_changes.hpp"
#include "pxr/usd/pcp/pcp_types.hpp"
#include "pxr/usd/pcp/pcp_cache.hpp"
#include "pxr/usd/pcp/pcp_site.hpp"
#include "pxr/usd/pcp/pcp_dynamic_file_format_dependency_data.hpp"
#include "pxr/usd/pcp/pcp_strength_ordering.hpp"
#include "pxr/usd/pcp/pcp_layer_stack_identifier.hpp"
#include "pxr/usd/pcp/pcp_path_translation.hpp"
#include "pxr/usd/pcp/pcp_compose_site.hpp"
#include "pxr/usd/pcp/pcp_iterator.hpp"
#include "pxr/usd/pcp/pcp_instance_key.hpp"
#include "pxr/usd/pcp/pcp_layer_prefetch_request.hpp"
#include "pxr/usd/pcp/pcp_property_index.hpp"
#include "pxr/usd/ndr/ndr_node.hpp"
#include "pxr/usd/ndr/ndr_parser_plugin.hpp"
#include "pxr/usd/ndr/ndr_property.hpp"
#include "pxr/usd/ndr/ndr_registry.hpp"
#include "pxr/usd/ndr/ndr_discovery_plugin.hpp"
#include "pxr/usd/ndr/ndr_node_discovery_result.hpp"
#include "pxr/usd/kind/kind_registry.hpp"
#include "pxr/usd/ar/ar_timestamp.hpp"
#include "pxr/usd/ar/ar_resolver_context_binder.hpp"
#include "pxr/usd/ar/ar_resolver.hpp"
#include "pxr/usd/ar/ar_filesystem_writable_asset.hpp"
#include "pxr/usd/ar/ar_resolver_context.hpp"
#include "pxr/usd/ar/ar_default_resolver.hpp"
#include "pxr/usd/ar/ar_resolved_path.hpp"
#include "pxr/usd/ar/ar_package_resolver.hpp"
#include "pxr/usd/ar/ar_default_resolver_context.hpp"
#include "pxr/usd/ar/ar_asset_info.hpp"
#include "pxr/usd/ar/ar_filesystem_asset.hpp"
#include "pxr/usd/ar/ar_writable_asset.hpp"
#include "pxr/usd/ar/ar_asset.hpp"
#include "pxr/usd/ar/ar_notice.hpp"
#include "pxr/usd/ar/ar_resolver_scoped_cache.hpp"
#include "pxr/usd/sdf/sdf_layer_offset.hpp"
#include "pxr/usd/sdf/sdf_attribute_spec.hpp"
#include "pxr/usd/sdf/sdf_path.hpp"
#include "pxr/usd/sdf/sdf_value_type_name.hpp"
#include "pxr/usd/sdf/sdf_reference.hpp"
#include "pxr/usd/sdf/sdf_abstract_data.hpp"
#include "pxr/usd/sdf/sdf_time_code.hpp"
#include "pxr/usd/sdf/sdf_asset_path.hpp"
#include "pxr/usd/sdf/sdf_change_block.hpp"
#include "pxr/usd/sdf/sdf_allowed.hpp"
#include "pxr/usd/sdf/sdf_layer.hpp"
#include "pxr/usd/usd_geom/usd_geom_mesh.hpp"
#include "pxr/usd/usd_geom/usd_geom_metrics.hpp"
#include "pxr/usd/usd_geom/usd_geom_xform.hpp"
#include "pxr/usd/usd_geom/usd_geom_sphere.hpp"
#include "pxr/base/vt/vt_value.hpp"
#include "pxr/base/vt/vt_dictionary.hpp"
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

int main() {
    std::ofstream os("abigen.txt");

    abi_gen_std_vector(os);
    abi_gen_std_map(os);
    abi_gen_pxr_usd_usd_usd_prim(os);
    abi_gen_pxr_usd_usd_usd_references(os);
    abi_gen_pxr_usd_usd_usd_prim_range(os);
    abi_gen_pxr_usd_usd_usd_attribute(os);
    abi_gen_pxr_usd_usd_usd_time_code(os);
    abi_gen_pxr_usd_usd_usd_prim_flags(os);
    abi_gen_pxr_usd_usd_usd_property(os);
    abi_gen_pxr_usd_usd_usd_common(os);
    abi_gen_pxr_usd_usd_usd_stage(os);
    abi_gen_pxr_usd_pcp_pcp_arc(os);
    abi_gen_pxr_usd_pcp_pcp_target_index(os);
    abi_gen_pxr_usd_pcp_pcp_node(os);
    abi_gen_pxr_usd_pcp_pcp_map_expression(os);
    abi_gen_pxr_usd_pcp_pcp_map_function(os);
    abi_gen_pxr_usd_pcp_pcp_errors(os);
    abi_gen_pxr_usd_pcp_pcp_dynamic_file_format_interface(os);
    abi_gen_pxr_usd_pcp_pcp_prim_index(os);
    abi_gen_pxr_usd_pcp_pcp_namespace_edits(os);
    abi_gen_pxr_usd_pcp_pcp_dependency(os);
    abi_gen_pxr_usd_pcp_pcp_layer_stack(os);
    abi_gen_pxr_usd_pcp_pcp_dynamic_file_format_context(os);
    abi_gen_pxr_usd_pcp_pcp_changes(os);
    abi_gen_pxr_usd_pcp_pcp_types(os);
    abi_gen_pxr_usd_pcp_pcp_cache(os);
    abi_gen_pxr_usd_pcp_pcp_site(os);
    abi_gen_pxr_usd_pcp_pcp_dynamic_file_format_dependency_data(os);
    abi_gen_pxr_usd_pcp_pcp_strength_ordering(os);
    abi_gen_pxr_usd_pcp_pcp_layer_stack_identifier(os);
    abi_gen_pxr_usd_pcp_pcp_path_translation(os);
    abi_gen_pxr_usd_pcp_pcp_compose_site(os);
    abi_gen_pxr_usd_pcp_pcp_iterator(os);
    abi_gen_pxr_usd_pcp_pcp_instance_key(os);
    abi_gen_pxr_usd_pcp_pcp_layer_prefetch_request(os);
    abi_gen_pxr_usd_pcp_pcp_property_index(os);
    abi_gen_pxr_usd_ndr_ndr_node(os);
    abi_gen_pxr_usd_ndr_ndr_parser_plugin(os);
    abi_gen_pxr_usd_ndr_ndr_property(os);
    abi_gen_pxr_usd_ndr_ndr_registry(os);
    abi_gen_pxr_usd_ndr_ndr_discovery_plugin(os);
    abi_gen_pxr_usd_ndr_ndr_node_discovery_result(os);
    abi_gen_pxr_usd_kind_kind_registry(os);
    abi_gen_pxr_usd_ar_ar_timestamp(os);
    abi_gen_pxr_usd_ar_ar_resolver_context_binder(os);
    abi_gen_pxr_usd_ar_ar_resolver(os);
    abi_gen_pxr_usd_ar_ar_filesystem_writable_asset(os);
    abi_gen_pxr_usd_ar_ar_resolver_context(os);
    abi_gen_pxr_usd_ar_ar_default_resolver(os);
    abi_gen_pxr_usd_ar_ar_resolved_path(os);
    abi_gen_pxr_usd_ar_ar_package_resolver(os);
    abi_gen_pxr_usd_ar_ar_default_resolver_context(os);
    abi_gen_pxr_usd_ar_ar_asset_info(os);
    abi_gen_pxr_usd_ar_ar_filesystem_asset(os);
    abi_gen_pxr_usd_ar_ar_writable_asset(os);
    abi_gen_pxr_usd_ar_ar_asset(os);
    abi_gen_pxr_usd_ar_ar_notice(os);
    abi_gen_pxr_usd_ar_ar_resolver_scoped_cache(os);
    abi_gen_pxr_usd_sdf_sdf_layer_offset(os);
    abi_gen_pxr_usd_sdf_sdf_attribute_spec(os);
    abi_gen_pxr_usd_sdf_sdf_path(os);
    abi_gen_pxr_usd_sdf_sdf_value_type_name(os);
    abi_gen_pxr_usd_sdf_sdf_reference(os);
    abi_gen_pxr_usd_sdf_sdf_abstract_data(os);
    abi_gen_pxr_usd_sdf_sdf_time_code(os);
    abi_gen_pxr_usd_sdf_sdf_asset_path(os);
    abi_gen_pxr_usd_sdf_sdf_change_block(os);
    abi_gen_pxr_usd_sdf_sdf_allowed(os);
    abi_gen_pxr_usd_sdf_sdf_layer(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_mesh(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_metrics(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_xform(os);
    abi_gen_pxr_usd_usd_geom_usd_geom_sphere(os);
    abi_gen_pxr_base_vt_vt_value(os);
    abi_gen_pxr_base_vt_vt_dictionary(os);
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
}
