#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPath__Hash_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_ctor(this_: *mut *mut pxr_SdfPathAncestorsRange_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_GetPath(this_: *const pxr_SdfPathAncestorsRange_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_begin(this_: *const pxr_SdfPathAncestorsRange_t, return_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_end(this_: *const pxr_SdfPathAncestorsRange_t, return_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor(this_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor_1(this_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_inc(this_: *mut pxr_SdfPathAncestorsRange_iterator_t, return_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_mul(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_operator__(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__eq(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut bool, o: *const pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__ne(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut bool, o: *const pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_copy(this_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t, rhs: *const pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_dtor(this_: *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_EmptyPath(return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AbsoluteRootPath(return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ReflexiveRelativePath(return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ctor(this_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_from_string(this_: *mut *mut pxr_SdfPath_t, path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetPathElementCount(this_: *const pxr_SdfPath_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsolutePath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsRootPrimPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPropertyPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPropertyPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsNamespacedPropertyPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimVariantSelectionPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPrimVariantSelection(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPropertyElements(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ContainsTargetPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsRelationalAttributePath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsTargetPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperArgPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsExpressionPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsEmpty(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetToken(this_: *const pxr_SdfPath_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetString(this_: *const pxr_SdfPath_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetText(this_: *const pxr_SdfPath_t, return_: *mut *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes(this_: *const pxr_SdfPath_t, return_: *mut *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes_1(this_: *const pxr_SdfPath_t, prefixes: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetName(this_: *const pxr_SdfPath_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetNameToken(this_: *const pxr_SdfPath_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetElementString(this_: *const pxr_SdfPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetElementToken(this_: *const pxr_SdfPath_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceName(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, new_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetTargetPath(this_: *const pxr_SdfPath_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetAllTargetPathsRecursively(this_: *const pxr_SdfPath_t, result: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_HasPrefix(this_: *const pxr_SdfPath_t, return_: *mut bool, prefix: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetParentPath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimPath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimOrPrimVariantSelectionPath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetAbsoluteRootOrPrimPath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_StripAllVariantSelections(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendPath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, new_suffix: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendChild(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, child_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendProperty(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, prop_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendVariantSelection(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, variant_set: *const std_string_t, variant: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendTarget(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, target_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendRelationalAttribute(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, attr_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceTargetPath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, new_target_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapper(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, target_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapperArg(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, arg_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendExpression(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementString(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, element: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementToken(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, element_tok: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ReplacePrefix(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, old_prefix: *const pxr_SdfPath_t, new_prefix: *const pxr_SdfPath_t, fix_target_paths: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetCommonPrefix(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_MakeAbsolutePath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, anchor: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_MakeRelativePath(this_: *const pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, anchor: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsValidNamespacedIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_TokenizeIdentifier(return_: *mut *mut std_vector_string_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier(return_: *mut *mut std_string_t, names: *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_1(return_: *mut *mut std_string_t, lhs: *const std_string_t, rhs: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_2(return_: *mut *mut std_string_t, lhs: *const pxr_TfToken_t, rhs: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace(return_: *mut *mut std_string_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace_1(return_: *mut pxr_TfToken_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsValidPathString(return_: *mut bool, path_string: *const std_string_t, err_msg: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath__eq(this_: *const pxr_SdfPath_t, return_: *mut bool, rhs: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_operator_(this_: *const pxr_SdfPath_t, return_: *mut bool, rhs: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetHash(this_: *const pxr_SdfPath_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetConciseRelativePaths(return_: *mut *mut std_SdfPathVector_t, paths: *const std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_RemoveDescendentPaths(paths: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_RemoveAncestorPaths(paths: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_copy(this_: *mut *mut pxr_SdfPath_t, rhs: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_op_assign(this_: *mut pxr_SdfPath_t, return_: *mut *mut pxr_SdfPath_t, rhs: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_dtor(this_: *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath__Hash__op_call(this_: *const pxr_SdfPath_Hash_t, return_: *mut usize, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath__Hash_ctor(this_: *mut *mut pxr_SdfPath_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath__Hash_copy(this_: *mut *mut pxr_SdfPath_Hash_t, rhs: *const pxr_SdfPath_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath__Hash_dtor(this_: *mut pxr_SdfPath_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan__op_call(this_: *const pxr_SdfPath_FastLessThan_t, return_: *mut bool, a: *const pxr_SdfPath_t, b: *const pxr_SdfPath_t) -> Exception;


} // extern "C"
