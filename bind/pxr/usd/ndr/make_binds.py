import re

template=\
'''#include <cppmm_bind.hpp>
#include <pxr/usd/{prefix}/{name}.h>

namespace cppmm_bind {{

namespace PXR_INTERNAL_NS {{

namespace pxr = ::PXR_INTERNAL_NS;

/// \class {pascal_name}
struct {pascal_name}
{{
public:
    using BoundType = pxr::{pascal_name};

}} CPPMM_OPAQUEPTR; // struct {pascal_name}

}} // namespace PXR_INTERNAL_NS

}} // namespace cppmm_bind

'''

prefix="ndr"
headers=[
    "discoveryPlugin",
    "nodeDiscoveryResult",
    "parserPlugin",
    "property",
    "registry",
]

def camel_to_snake(name):
    name = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', name).lower()

def snake_to_pascal(name):
    return name.replace("_", " ").title().replace(" ", "")

for name in headers:
    ns = prefix + "_" + camel_to_snake(name)
    pascal_name = snake_to_pascal(ns)
    with open(ns + ".cpp", "w") as f:
        f.write(template.format(name=name, pascal_name=pascal_name, prefix=prefix))
