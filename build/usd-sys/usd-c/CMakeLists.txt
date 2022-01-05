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
    src/pxr/usd/ar/ar_asset_info.cpp
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
