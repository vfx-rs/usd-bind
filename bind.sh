#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' ERR

project_name="usd"
major_version=0
minor_version=1
patch_version=0

rm -rf build

astgen bind -u -v 2 \
    -o build/ast \
    -- \
    -Wno-deprecated-register \
    -Wno-deprecated-declarations \
    -I${USD_ROOT}/include \
    -I/usr/include/python2.7 \
    -I${OPENEXR_ROOT}/include \
    -I${IMATH_ROOT}/include \
    -I${BOOST_ROOT}/include

asttoc build/ast -v 2 -o build -p ${project_name} \
    -fp pxr \
    -tll usd \
    -tll tf \
    -tll gf \
    -tll vt \
    -tll sdf \
    -tll usdGeom \
    -major ${major_version} -minor ${minor_version} -patch ${patch_version}


sed \
    -e "s/PROJECT_NAME/${project_name}/g" \
    -e "s/MAJOR_VERSION/${major_version}/g" \
    -e "s/MINOR_VERSION/${minor_version}/g" \
    -e "s/PATCH_VERSION/${patch_version}/g" \
    scripts/build.rs > build/${project_name}-sys/build.rs

sed \
    -e "s/PROJECT_NAME/${project_name}/g" \
    -e "s/MAJOR_VERSION/${major_version}/g" \
    -e "s/MINOR_VERSION/${minor_version}/g" \
    -e "s/PATCH_VERSION/${patch_version}/g" \
    scripts/Cargo.toml > build/${project_name}-sys/Cargo.toml


