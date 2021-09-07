use std::marker::PhantomData;
use std::ops::{Deref, DerefMut};

/// This trait describes the relationship between an opaque pointer to a C++
/// object and the newtype we use to wrap it in Rust.
///
/// This trait is unsafe to implement because the associated types are used as
/// parameters to transmute() in the Ref and RefMut wrappers, so getting this
/// wrong would be very bad.
///
/// To be specific, `SysPointee` must be the pointee C++ type and `Pointee` must
/// be the newtype wrapper, which must be `#[repr(transparent)]`. For example,
/// for [`Header`](crate::core::header::Header):
///
/// #[repr(transparent)]
/// pub struct Header(pub(crate) *mut sys::Imf_Header_t);
///
/// the `SysPointee` is `sys::Imf_Header_t` and `Pointee` is `Header` and this
/// is valid because `Header` is a transparent newtype of `sys::Imf_Header_t`
///
pub unsafe trait OpaquePtr {
    type SysPointee;
    type Pointee;
}

/// Represents a pointer to a type that is owned by some C++ object, where the
/// pointer type is also newtyped and we wish to Deref to the newtype rather
/// than the pointer.
#[repr(transparent)]
pub struct Ref<'a, P>
where
    P: OpaquePtr,
{
    ptr: *const P::SysPointee,
    _o: PhantomData<&'a ()>,
    _p: PhantomData<P::Pointee>,
}

impl<'a, P> Ref<'a, P>
where
    P: OpaquePtr,
{
    pub(crate) fn new(ptr: *const P::SysPointee) -> Ref<'a, P> {
        Ref {
            ptr,
            _o: PhantomData,
            _p: PhantomData,
        }
    }
}

/// Represents a pointer to a type that is owned by some C++ object, where the
/// pointer type is also newtyped and we wish to Deref to the newtype rather
/// than the pointer.
#[repr(transparent)]
pub struct RefMut<'a, P>
where
    P: OpaquePtr,
{
    ptr: *mut P::SysPointee,
    _o: PhantomData<&'a ()>,
    _p: PhantomData<P::Pointee>,
}

impl<'a, P> RefMut<'a, P>
where
    P: OpaquePtr,
{
    pub(crate) fn new(ptr: *mut P::SysPointee) -> RefMut<'a, P> {
        RefMut {
            ptr,
            _o: PhantomData,
            _p: PhantomData,
        }
    }
}

impl<'a, P> Deref for Ref<'a, P>
where
    P: OpaquePtr,
{
    type Target = P::Pointee;

    fn deref(&self) -> &Self::Target {
        unsafe {
            &*(&self.ptr as *const *const <P as OpaquePtr>::SysPointee
                as *const <P as OpaquePtr>::Pointee)
        }
    }
}

impl<'a, P> Deref for RefMut<'a, P>
where
    P: OpaquePtr,
{
    type Target = P::Pointee;

    fn deref(&self) -> &Self::Target {
        unsafe {
            &*(&self.ptr as *const *mut <P as OpaquePtr>::SysPointee
                as *const <P as OpaquePtr>::Pointee)
        }
    }
}

impl<'a, P> DerefMut for RefMut<'a, P>
where
    P: OpaquePtr,
{
    fn deref_mut(&mut self) -> &mut Self::Target {
        unsafe {
            &mut *(&mut self.ptr as *mut *mut <P as OpaquePtr>::SysPointee
                as *mut <P as OpaquePtr>::Pointee)
        }
    }
}

impl<'a, P> AsRef<P::Pointee> for Ref<'a, P>
where
    P: OpaquePtr,
{
    fn as_ref(&self) -> &P::Pointee {
        unsafe {
            &*(&self.ptr as *const *const <P as OpaquePtr>::SysPointee
                as *const <P as OpaquePtr>::Pointee)
        }
    }
}
