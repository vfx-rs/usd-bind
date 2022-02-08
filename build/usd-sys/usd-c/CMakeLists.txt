cmake_minimum_required(VERSION 3.5)
project(usd-c VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 14 CACHE STRING "")
set(SOURCES
    src/std_vector.cpp
    include/std_vector.h
    src/std_map.cpp
    src/pxr/usd/usd/usd_prim.cpp
    src/pxr/usd/usd/usd_references.cpp
    src/pxr/usd/usd/usd_prim_range.cpp
    src/pxr/usd/usd/usd_attribute.cpp
    src/pxr/usd/usd/usd_time_code.cpp
    src/pxr/usd/usd/usd_prim_flags.cpp
    src/pxr/usd/usd/usd_property.cpp
    src/pxr/usd/usd/usd_common.cpp
    src/pxr/usd/usd/usd_stage.cpp
    src/pxr/usd/pcp/pcp_arc.cpp
    src/pxr/usd/pcp/pcp_target_index.cpp
    src/pxr/usd/pcp/pcp_map_expression.cpp
    src/pxr/usd/pcp/pcp_map_function.cpp
    src/pxr/usd/pcp/pcp_errors.cpp
    src/pxr/usd/pcp/pcp_dynamic_file_format_interface.cpp
    src/pxr/usd/pcp/pcp_prim_index.cpp
    src/pxr/usd/pcp/pcp_namespace_edits.cpp
    src/pxr/usd/pcp/pcp_dependency.cpp
    src/pxr/usd/pcp/pcp_layer_stack.cpp
    src/pxr/usd/pcp/pcp_dynamic_file_format_context.cpp
    src/pxr/usd/pcp/pcp_changes.cpp
    src/pxr/usd/pcp/pcp_types.cpp
    src/pxr/usd/pcp/pcp_cache.cpp
    src/pxr/usd/pcp/pcp_site.cpp
    src/pxr/usd/pcp/pcp_strength_ordering.cpp
    src/pxr/usd/pcp/pcp_layer_stack_identifier.cpp
    src/pxr/usd/pcp/pcp_path_translation.cpp
    src/pxr/usd/pcp/pcp_compose_site.cpp
    src/pxr/usd/pcp/pcp_iterator.cpp
    src/pxr/usd/pcp/pcp_instance_key.cpp
    src/pxr/usd/pcp/pcp_layer_prefetch_request.cpp
    src/pxr/usd/pcp/pcp_property_index.cpp
    src/pxr/usd/ndr/ndr_node.cpp
    src/pxr/usd/ndr/ndr_parser_plugin.cpp
    src/pxr/usd/ndr/ndr_property.cpp
    src/pxr/usd/ndr/ndr_registry.cpp
    src/pxr/usd/ndr/ndr_discovery_plugin.cpp
    src/pxr/usd/ndr/ndr_node_discovery_result.cpp
    src/pxr/usd/kind/kind_registry.cpp
    src/pxr/usd/ar/ar_timestamp.cpp
    src/pxr/usd/ar/ar_resolver_context_binder.cpp
    src/pxr/usd/ar/ar_resolver.cpp
    src/pxr/usd/ar/ar_filesystem_writable_asset.cpp
    src/pxr/usd/ar/ar_resolver_context.cpp
    src/pxr/usd/ar/ar_default_resolver.cpp
    src/pxr/usd/ar/ar_resolved_path.cpp
    src/pxr/usd/ar/ar_package_resolver.cpp
    src/pxr/usd/ar/ar_default_resolver_context.cpp
    src/pxr/usd/ar/ar_asset_info.cpp
    src/pxr/usd/ar/ar_filesystem_asset.cpp
    src/pxr/usd/ar/ar_writable_asset.cpp
    src/pxr/usd/ar/ar_asset.cpp
    src/pxr/usd/ar/ar_notice.cpp
    src/pxr/usd/ar/ar_resolver_scoped_cache.cpp
    src/pxr/usd/sdf/sdf_layer_offset.cpp
    src/pxr/usd/sdf/sdf_path.cpp
    src/pxr/usd/sdf/sdf_declare_handles.cpp
    src/pxr/usd/sdf/sdf_value_type_name.cpp
    src/pxr/usd/sdf/sdf_reference.cpp
    src/pxr/usd/sdf/sdf_time_code.cpp
    src/pxr/usd/sdf/sdf_asset_path.cpp
    src/pxr/usd/sdf/sdf_layer.cpp
    src/pxr/usd/usd_geom/usd_geom_mesh.cpp
    src/pxr/usd/usd_geom/usd_geom_metrics.cpp
    src/pxr/usd/usd_geom/usd_geom_xform.cpp
    src/pxr/usd/usd_geom/usd_geom_sphere.cpp
    src/pxr/base/vt/vt_value.cpp
    src/pxr/base/vt/vt_dictionary.cpp
    src/pxr/base/vt/vt_array.cpp
    src/pxr/base/gf/gf_matrix.cpp
    src/pxr/base/gf/gf_ilmbase_half.cpp
    src/pxr/base/gf/gf_vec.cpp
    src/pxr/base/gf/gf_quat.cpp
    src/pxr/base/tf/tf_weak_ptr.cpp
    src/pxr/base/tf/tf_diagnostic_mgr.cpp
    src/pxr/base/tf/tf_type.cpp
    src/pxr/base/tf/tf_ref_ptr.cpp
    src/pxr/base/tf/tf_error.cpp
    src/pxr/base/tf/tf_token.cpp
    src/std_string.cpp
    src/std_list.cpp
    src/usd-errors.cpp
)
find_package(pxr REQUIRED)

add_subdirectory(abigen)
add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/std_vector.h
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include.in/std_vector.h 
    COMMAND abigen
    COMMAND python ARGS 
        ${CMAKE_CURRENT_SOURCE_DIR}/abigen/insert_abi.py 
        ${CMAKE_CURRENT_SOURCE_DIR}/include.in 
        ${CMAKE_CURRENT_BINARY_DIR}/include 
        ${CMAKE_CURRENT_BINARY_DIR}/abigen.txt
)
set(LIBNAME usd-c-0_1)
add_library(${LIBNAME} STATIC ${SOURCES})
add_library(${LIBNAME}-shared SHARED ${SOURCES})

set_target_properties(${LIBNAME} PROPERTIES CXX_VISIBILITY_PRESET hidden)
set_target_properties(${LIBNAME}-shared PROPERTIES CXX_VISIBILITY_PRESET hidden)


target_compile_definitions(${LIBNAME} PRIVATE USD_CPPMM_BUILD_EXPORT)

target_compile_definitions(${LIBNAME}-shared PRIVATE USD_CPPMM_BUILD_EXPORT)
if (WIN32)
target_compile_definitions(${LIBNAME} PRIVATE _Bool=bool)
target_compile_definitions(${LIBNAME}-shared PRIVATE _Bool=bool)
endif()
target_include_directories(${LIBNAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/include)
target_include_directories(${LIBNAME}-shared PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/include)
target_include_directories(${LIBNAME} PRIVATE /home/luke/packages/usd-v21.11/include)
target_include_directories(${LIBNAME}-shared PRIVATE /home/luke/packages/usd-v21.11/include)
target_include_directories(${LIBNAME} PRIVATE /include)
target_include_directories(${LIBNAME}-shared PRIVATE /include)
target_include_directories(${LIBNAME} PRIVATE /usr/include/python2.7)
target_include_directories(${LIBNAME}-shared PRIVATE /usr/include/python2.7)
target_include_directories(${LIBNAME} PRIVATE include)
target_include_directories(${LIBNAME}-shared PRIVATE include)
target_include_directories(${LIBNAME} PRIVATE private)
target_include_directories(${LIBNAME}-shared PRIVATE private)
target_include_directories(${LIBNAME} PRIVATE src)
target_include_directories(${LIBNAME}-shared PRIVATE src)
target_link_libraries(${LIBNAME} usd)
target_link_libraries(${LIBNAME}-shared usd)
target_link_libraries(${LIBNAME} tf)
target_link_libraries(${LIBNAME}-shared tf)
target_link_libraries(${LIBNAME} gf)
target_link_libraries(${LIBNAME}-shared gf)
target_link_libraries(${LIBNAME} vt)
target_link_libraries(${LIBNAME}-shared vt)
target_link_libraries(${LIBNAME} sdf)
target_link_libraries(${LIBNAME}-shared sdf)
target_link_libraries(${LIBNAME} usdGeom)
target_link_libraries(${LIBNAME}-shared usdGeom)
install(TARGETS ${LIBNAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
install(TARGETS ${LIBNAME}-shared DESTINATION ${CMAKE_INSTALL_PREFIX})
