
use crate::sdfassetpath_array::*;
use usd_sdf::asset_path::*;

#[test]
fn test_sdfassetpath_array() {
    let mut array = VtArraySdfAssetPath::new();

    array.push(SdfAssetPath::from_path("/foo/bar"));
    array.push(SdfAssetPath::from_path("/foo/baz"));

    assert_eq!(array.len(), 2);
    assert!(*array.at(0).unwrap().as_ref() == SdfAssetPath::from_path("/foo/bar"));
}
