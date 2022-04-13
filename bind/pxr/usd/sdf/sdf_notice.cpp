#include <pxr/usd/sdf/notice.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfNotice
/// 
/// Wrapper class for Sdf notices.
struct SdfNotice {
    using BoundType = pxr::SdfNotice;

    /// \class Base
    /// 
    /// Base notification class for scene.  Only useful for type hierarchy
    /// purposes.
    struct Base {
        using BoundType = pxr::SdfNotice::Base;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const SenderPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        ~Base();

        Base(const pxr::SdfNotice::Base& );

        pxr::SdfNotice::Base& operator=(const pxr::SdfNotice::Base& );

        Base();

    } CPPMM_OPAQUEPTR; // struct Base

    /// \class BaseLayersDidChange
    /// 
    /// Base class for LayersDidChange and LayersDidChangeSentPerLayer.
    struct BaseLayersDidChange {
        using BoundType = pxr::SdfNotice::BaseLayersDidChange;

        BaseLayersDidChange(const pxr::SdfLayerChangeListVec& changeVec, size_t serialNumber);

        /// A list of layers changed.
        pxr::SdfLayerHandleVector GetLayers() const;

        /// A list of layers and the changes that occurred to them.
        const pxr::SdfLayerChangeListVec& GetChangeListVec() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator begin() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator cbegin() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator end() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator cend() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator find(const pxr::SdfLayerHandle& layer) const;

        bool count(const pxr::SdfLayerHandle& layer) const;

        /// The serial number for this round of change processing.
        size_t GetSerialNumber() const;

        BaseLayersDidChange(const pxr::SdfNotice::BaseLayersDidChange& );

        BaseLayersDidChange(pxr::SdfNotice::BaseLayersDidChange&& ) CPPMM_IGNORE;

        ~BaseLayersDidChange();

        pxr::SdfNotice::BaseLayersDidChange& operator=(const pxr::SdfNotice::BaseLayersDidChange& );

        pxr::SdfNotice::BaseLayersDidChange& operator=(pxr::SdfNotice::BaseLayersDidChange&& ) CPPMM_IGNORE;

    } CPPMM_OPAQUEPTR; // struct BaseLayersDidChange

    /// \class LayersDidChangeSentPerLayer
    /// 
    /// Notice sent per-layer indicating all layers whose contents have changed
    /// within a single round of change processing.  If more than one layer
    /// changes in a single round of change processing, we send this notice once
    /// per layer with the same changeVec and serialNumber.  This is so clients
    /// can listen to notices from only the set of layers they care about rather
    /// than listening to the global LayersDidChange notice.
    struct LayersDidChangeSentPerLayer {
        using BoundType = pxr::SdfNotice::LayersDidChangeSentPerLayer;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const SenderPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        /// A list of layers changed.
        pxr::SdfLayerHandleVector GetLayers() const;

        /// A list of layers and the changes that occurred to them.
        const pxr::SdfLayerChangeListVec& GetChangeListVec() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator begin() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator cbegin() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator end() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator cend() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator find(const pxr::SdfLayerHandle& layer) const;

        bool count(const pxr::SdfLayerHandle& layer) const;

        /// The serial number for this round of change processing.
        size_t GetSerialNumber() const;

        LayersDidChangeSentPerLayer(const pxr::SdfLayerChangeListVec& changeVec, size_t serialNumber);

        ~LayersDidChangeSentPerLayer();

        LayersDidChangeSentPerLayer(const pxr::SdfNotice::LayersDidChangeSentPerLayer& );

        pxr::SdfNotice::LayersDidChangeSentPerLayer& operator=(const pxr::SdfNotice::LayersDidChangeSentPerLayer& );

    } CPPMM_OPAQUEPTR; // struct LayersDidChangeSentPerLayer

    /// \class LayersDidChange
    /// 
    /// Global notice sent to indicate that layer contents have changed.
    struct LayersDidChange {
        using BoundType = pxr::SdfNotice::LayersDidChange;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const SenderPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        /// A list of layers changed.
        pxr::SdfLayerHandleVector GetLayers() const;

        /// A list of layers and the changes that occurred to them.
        const pxr::SdfLayerChangeListVec& GetChangeListVec() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator begin() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator cbegin() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator end() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator cend() const;

        pxr::SdfNotice::BaseLayersDidChange::const_iterator find(const pxr::SdfLayerHandle& layer) const;

        bool count(const pxr::SdfLayerHandle& layer) const;

        /// The serial number for this round of change processing.
        size_t GetSerialNumber() const;

        LayersDidChange(const pxr::SdfLayerChangeListVec& changeVec, size_t serialNumber);

        ~LayersDidChange();

        LayersDidChange(const pxr::SdfNotice::LayersDidChange& );

        pxr::SdfNotice::LayersDidChange& operator=(const pxr::SdfNotice::LayersDidChange& );

    } CPPMM_OPAQUEPTR; // struct LayersDidChange


    /// \class LayerInfoDidChange
    /// 
    /// Sent when the (scene spec) info of a layer have changed.
    struct LayerInfoDidChange {
        using BoundType = pxr::SdfNotice::LayerInfoDidChange;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const SenderPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        LayerInfoDidChange(const pxr::TfToken& key);

        ~LayerInfoDidChange();

        /// Return the key affected.
        const pxr::TfToken& key() const;

        LayerInfoDidChange(const pxr::SdfNotice::LayerInfoDidChange& );

        pxr::SdfNotice::LayerInfoDidChange& operator=(const pxr::SdfNotice::LayerInfoDidChange& );

    } CPPMM_OPAQUEPTR; // struct LayerInfoDidChange

    /// \class LayerIdentifierDidChange
    /// 
    /// Sent when the identifier of a layer has changed.
    struct LayerIdentifierDidChange {
        using BoundType = pxr::SdfNotice::LayerIdentifierDidChange;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const SenderPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        LayerIdentifierDidChange(const std::string& oldIdentifier, const std::string& newIdentifier);

        ~LayerIdentifierDidChange();

        /// Returns the old identifier for the layer.
        const std::string& GetOldIdentifier() const;

        /// Returns the new identifier for the layer.
        const std::string& GetNewIdentifier() const;

        LayerIdentifierDidChange(const pxr::SdfNotice::LayerIdentifierDidChange& );

        pxr::SdfNotice::LayerIdentifierDidChange& operator=(const pxr::SdfNotice::LayerIdentifierDidChange& );

    } CPPMM_OPAQUEPTR; // struct LayerIdentifierDidChange

    /// \class LayerDidReplaceContent
    /// 
    /// Sent after a menv layer has been loaded from a file.
    struct LayerDidReplaceContent {
        using BoundType = pxr::SdfNotice::LayerDidReplaceContent;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const SenderPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        ~LayerDidReplaceContent();

        LayerDidReplaceContent(const pxr::SdfNotice::LayerDidReplaceContent& );

        pxr::SdfNotice::LayerDidReplaceContent& operator=(const pxr::SdfNotice::LayerDidReplaceContent& );

    } CPPMM_OPAQUEPTR; // struct LayerDidReplaceContent

#if 0

    /// \class LayerDidReloadContent
    /// Sent after a layer is reloaded.
    struct LayerDidReloadContent {
        using BoundType = pxr::SdfNotice::LayerDidReloadContent;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const LPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        ~LayerDidReloadContent();

        LayerDidReloadContent(const pxr::SdfNotice::LayerDidReloadContent& );

        pxr::SdfNotice::LayerDidReloadContent& operator=(const pxr::SdfNotice::LayerDidReloadContent& );

    } CPPMM_OPAQUEPTR; // struct LayerDidReloadContent


    /// \class LayerDidSaveLayerToFile
    /// 
    /// Sent after a layer is saved to file.
    struct LayerDidSaveLayerToFile {
        using BoundType = pxr::SdfNotice::LayerDidSaveLayerToFile;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const LPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        ~LayerDidSaveLayerToFile();

        LayerDidSaveLayerToFile(const pxr::SdfNotice::LayerDidSaveLayerToFile& );

        pxr::SdfNotice::LayerDidSaveLayerToFile& operator=(const pxr::SdfNotice::LayerDidSaveLayerToFile& );

    } CPPMM_OPAQUEPTR; // struct LayerDidSaveLayerToFile


    /// \class LayerDirtinessChanged
    /// 
    /// Similar behavior to LayersDidChange, but only gets sent if a change
    /// in the dirty status of a layer occurs.
    struct LayerDirtinessChanged {
        using BoundType = pxr::SdfNotice::LayerDirtinessChanged;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const LPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        ~LayerDirtinessChanged();

        LayerDirtinessChanged(const pxr::SdfNotice::LayerDirtinessChanged& );

        pxr::SdfNotice::LayerDirtinessChanged& operator=(const pxr::SdfNotice::LayerDirtinessChanged& );

    } CPPMM_OPAQUEPTR; // struct LayerDirtinessChanged


    /// \class LayerMutenessChanged
    /// 
    /// Sent after a layer has been added or removed from the set of
    /// muted layers. Note this does not necessarily mean the specified
    /// layer is currently loaded.
    struct LayerMutenessChanged {
        using BoundType = pxr::SdfNotice::LayerMutenessChanged;

        /// Register a probe that will be invoked when notices are sent and
        /// delivered.  
        /// \see TfNotice::Probe
        static void InsertProbe(const pxr::TfNotice::WeakProbePtr& probe);

        /// Remove a probe that was previously registered with \c InsertProbe.
        /// \see TfNotice::Probe
        static void RemoveProbe(const pxr::TfNotice::WeakProbePtr& probe);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method);

        template <typename LPtr, typename MethodPtr, typename SenderPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const SenderPtr& sender);

        template <typename LPtr, typename MethodPtr>
        static pxr::TfNotice::Key Register(const LPtr& listener, MethodPtr method, const pxr::TfType& noticeType, const pxr::TfAnyWeakPtr& sender);

        /// Revoke interest by a listener.
        /// 
        /// This revokes interest by the listener for the particular notice type
        /// and call-back method for which this key was created.
        /// 
        /// \c Revoke will return a bool value indicating whether or not the key
        /// was successfully revoked.  Subsequent calls to \c Revoke with the same
        /// key will return false.
        static bool Revoke(pxr::TfNotice::Key& key);

        /// Revoke interest by listeners.
        /// 
        /// This revokes interest by the listeners for the particular
        /// notice types and call-back methods for which the keys were
        /// created.  It then clears the keys container.
        static void Revoke(pxr::TfNotice::Keys* keys);

        /// Deliver the notice to interested listeners, returning the number
        /// of interested listeners.  
        /// 
        /// For most clients it is recommended to use the Send(sender) version of
        /// Send() rather than this one.  Clients that use this form of Send
        /// will prevent listeners from being able to register to receive notices
        /// based on the sender of the notice.
        /// 
        /// ONLY listeners that registered globally will get the notice.
        /// 
        /// Listeners are invoked synchronously and in arbitrary order. The value
        /// returned is the total number of times the notice was sent to listeners.
        /// Note that a listener is called in the thread in which \c Send() is called
        /// and \e not necessarily in the thread that \c Register() was called in.
        size_t Send() const;

        template <typename SenderPtr>
        size_t Send(const LPtr& s) const;

        /// Variant of Send() that takes a specific sender in the form of a
        /// TfWeakBase pointer and a typeid.
        /// 
        /// This version is used by senders who don't have static knowledge of
        /// sender's type, but have access to its weak base pointer and its
        /// typeid.
        size_t SendWithWeakBase(const pxr::TfWeakBase* senderWeakBase, const void* senderUniqueId, const std::type_info& type) const;

        LayerMutenessChanged(const std::string& layerPath, bool wasMuted);

        ~LayerMutenessChanged();

        /// Returns the path of the layer that was muted or unmuted.
        const std::string& GetLayerPath() const;

        /// Returns true if the layer was muted, false if unmuted.
        bool WasMuted() const;

        LayerMutenessChanged(const pxr::SdfNotice::LayerMutenessChanged& );

        pxr::SdfNotice::LayerMutenessChanged& operator=(const pxr::SdfNotice::LayerMutenessChanged& );

    } CPPMM_OPAQUEPTR; // struct LayerMutenessChanged
#endif

} CPPMM_OPAQUEPTR; // struct SdfNotice


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

