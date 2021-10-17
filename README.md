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
- [*] You can create and open/save/export a stage.
- [ ] You can define a prim and get/set attributes on it.
- [ ] All 30 basic types are supported + arrays of those types.
- [ ] You can create references under prims or as layers.
- [ ] You can traverse the prims in a stage.

- [ ] Relationships
- [ ] Schemas
- [ ] Edit Targets
- [ ] Variant Sets
- [ ] Get/Set default root prim
- [ ] Asset resolver

# Running genbind
genbind.py  -v 2 --namespace pxrInternal_v0_20__pxrReserved__ --namespace-internal PXR_INTERNAL_NS --namespace-public pxr -a "-I/home/anders/packages/usd/20.05/include" -a "-I/home/anders/packages/boost/1.70.0/include" -a "-I/usr/include/python2.7" -a "-Wno-deprecated-register" -o bind -f /home/anders/packages/usd/20.05/include/pxr/usd/usdGeom/sphere.h

