use crate::value::*;

#[test]
fn test_u32() {
    let v = VtValue::from(&123_u32);
    assert!(*v.to::<u32>().unwrap() == 123_u32);
}

#[test]
fn test_f32() {
    let v = VtValue::from(&123_f32);
    assert!(*v.to::<f32>().unwrap() == 123_f32);
}

