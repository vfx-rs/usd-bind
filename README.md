# Getting started

Make sure you have cppmm built/working.
https://github.com/vfx-rs/cppmm

Then run bash bind.sh. You need to make sure all the ```_ROOT``` environment variables are set.

Finally build the rust bindings.

```
env LD_LIBRARY_PATH=/home/luke/packages/usd-v20.05/lib CMAKE_PREFIX_PATH=/home/luke/packages/usd-v20.05 cargo test
```

You should be good to go after this.

# Checklist
- [x] You can create and open/save/export a stage.
- [x] You can define a prim and get/set attributes on it.
- [ ] All 30 basic types are supported + arrays of those types.
- [ ] You can create references under prims or as layers.
- [x] You can traverse the prims in a stage.

- [ ] Relationships
- [ ] Schemas
- [ ] Edit Targets
- [ ] Variant Sets
- [ ] Get/Set default root prim
- [ ] Asset resolver

# Supported value types in VtValue.
Some types have scalar support but no array, those are marked
as not done.
- [x] bool        bool
- [x] uchar       uint8_t    8 bit unsigned integer
- [x] int        int32_t    32 bit signed integer
- [x] uint        uint32_t    32 bit unsigned integer
- [x] int64       int64_t    64 bit signed integer
- [x] uint64      uint64_t    64 bit unsigned integer
- [ ] half        GfHalf    16 bit floating point
- [x] float      float    32 bit floating point
- [x] double      double    64 bit floating point
- [ ] timecode    SdfTimeCode    double representing a resolvable time
- [ ] string      std::string    stl string
- [x] token      TfToken    interned string with fast comparison and hashing
- [ ] asset       SdfAssetPath    represents a resolvable path to another asset
- [x] matrix3d    GfMatrix3d    3x3 matrix of doubles
- [x] matrix4d    GfMatrix4d    4x4 matrix of doubles
- [x] matrix3f    GfMatrix3f    3x3 matrix of floats
- [x] matrix4f    GfMatrix4f    4x4 matrix of floats
- [x] quatd       GfQuatd    double-precision quaternion
- [x] quatf       GfQuatf    single-precision quaternion
- [ ] quath       GfQuath    half-precision quaternion
- [x] double2     GfVec2d    vector of 2 doubles
- [x] float2     GfVec2f    vector of 2 floats
- [ ] half2       GfVec2h    vector of 2 half's
- [x] int2        GfVec2i    vector of 2 ints
- [x] double3     GfVec3d    vector of 3 doubles
- [x] float3     GfVec3f    vector of 3 floats
- [ ] half3       GfVec3h    vector of 3 half's
- [x] int3        GfVec3i    vector of 3 ints
- [x] double4     GfVec4d    vector of 4 doubles
- [x] float4      GfVec4f    vector of 4 floats
- [ ] half4       GfVec4h    vector of 4 half's
- [x] int4        GfVec4i    vector of 4 ints

# Running genbind
genbind.py  -v 2 --namespace pxrInternal_v0_20__pxrReserved__ --namespace-internal PXR_INTERNAL_NS --namespace-public pxr -a "-I/home/anders/packages/usd/20.05/include" -a "-I/home/anders/packages/boost/1.70.0/include" -a "-I/usr/include/python2.7" -a "-Wno-deprecated-register" -o bind -f /home/anders/packages/usd/20.05/include/pxr/usd/usdGeom/sphere.h

