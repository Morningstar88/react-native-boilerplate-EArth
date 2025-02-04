/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<d697a8ac9c347c63a5fd592bccbfb8b5>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags-update
 */

#include "JReactNativeFeatureFlagsCxxInterop.h"
#include <react/featureflags/ReactNativeFeatureFlags.h>

namespace facebook::react {

static jni::alias_ref<jni::JClass> getReactNativeFeatureFlagsProviderJavaClass() {
  static const auto jClass = facebook::jni::findClassStatic(
      "com/facebook/react/internal/featureflags/ReactNativeFeatureFlagsProvider");
  return jClass;
}

/**
 * Implementation of ReactNativeFeatureFlagsProvider that wraps a
 * ReactNativeFeatureFlagsProvider Java object.
 */
class ReactNativeFeatureFlagsProviderHolder
    : public ReactNativeFeatureFlagsProvider {
 public:
  explicit ReactNativeFeatureFlagsProviderHolder(
      jni::alias_ref<jobject> javaProvider)
      : javaProvider_(make_global(javaProvider)){};

  bool commonTestFlag() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("commonTestFlag");
    return method(javaProvider_);
  }

  bool batchRenderingUpdatesInEventLoop() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("batchRenderingUpdatesInEventLoop");
    return method(javaProvider_);
  }

  bool enableBackgroundExecutor() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableBackgroundExecutor");
    return method(javaProvider_);
  }

  bool enableCustomDrawOrderFabric() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableCustomDrawOrderFabric");
    return method(javaProvider_);
  }

  bool enableFixForClippedSubviewsCrash() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableFixForClippedSubviewsCrash");
    return method(javaProvider_);
  }

  bool enableMicrotasks() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableMicrotasks");
    return method(javaProvider_);
  }

  bool enableMountHooksAndroid() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableMountHooksAndroid");
    return method(javaProvider_);
  }

  bool enableSpannableBuildingUnification() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableSpannableBuildingUnification");
    return method(javaProvider_);
  }

  bool inspectorEnableCxxInspectorPackagerConnection() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("inspectorEnableCxxInspectorPackagerConnection");
    return method(javaProvider_);
  }

  bool inspectorEnableModernCDPRegistry() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("inspectorEnableModernCDPRegistry");
    return method(javaProvider_);
  }

  bool skipMountHookNotifications() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("skipMountHookNotifications");
    return method(javaProvider_);
  }

  bool useModernRuntimeScheduler() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("useModernRuntimeScheduler");
    return method(javaProvider_);
  }

 private:
  jni::global_ref<jobject> javaProvider_;
};

bool JReactNativeFeatureFlagsCxxInterop::commonTestFlag(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::commonTestFlag();
}

bool JReactNativeFeatureFlagsCxxInterop::batchRenderingUpdatesInEventLoop(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::batchRenderingUpdatesInEventLoop();
}

bool JReactNativeFeatureFlagsCxxInterop::enableBackgroundExecutor(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableBackgroundExecutor();
}

bool JReactNativeFeatureFlagsCxxInterop::enableCustomDrawOrderFabric(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableCustomDrawOrderFabric();
}

bool JReactNativeFeatureFlagsCxxInterop::enableFixForClippedSubviewsCrash(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableFixForClippedSubviewsCrash();
}

bool JReactNativeFeatureFlagsCxxInterop::enableMicrotasks(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableMicrotasks();
}

bool JReactNativeFeatureFlagsCxxInterop::enableMountHooksAndroid(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableMountHooksAndroid();
}

bool JReactNativeFeatureFlagsCxxInterop::enableSpannableBuildingUnification(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableSpannableBuildingUnification();
}

bool JReactNativeFeatureFlagsCxxInterop::inspectorEnableCxxInspectorPackagerConnection(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::inspectorEnableCxxInspectorPackagerConnection();
}

bool JReactNativeFeatureFlagsCxxInterop::inspectorEnableModernCDPRegistry(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::inspectorEnableModernCDPRegistry();
}

bool JReactNativeFeatureFlagsCxxInterop::skipMountHookNotifications(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::skipMountHookNotifications();
}

bool JReactNativeFeatureFlagsCxxInterop::useModernRuntimeScheduler(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::useModernRuntimeScheduler();
}

void JReactNativeFeatureFlagsCxxInterop::override(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/,
    jni::alias_ref<jobject> provider) {
  ReactNativeFeatureFlags::override(
      std::make_unique<ReactNativeFeatureFlagsProviderHolder>(provider));
}

void JReactNativeFeatureFlagsCxxInterop::dangerouslyReset(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  ReactNativeFeatureFlags::dangerouslyReset();
}

void JReactNativeFeatureFlagsCxxInterop::registerNatives() {
  javaClassLocal()->registerNatives({
      makeNativeMethod(
          "override", JReactNativeFeatureFlagsCxxInterop::override),
      makeNativeMethod("dangerouslyReset", JReactNativeFeatureFlagsCxxInterop::dangerouslyReset),
      makeNativeMethod(
        "commonTestFlag",
        JReactNativeFeatureFlagsCxxInterop::commonTestFlag),
      makeNativeMethod(
        "batchRenderingUpdatesInEventLoop",
        JReactNativeFeatureFlagsCxxInterop::batchRenderingUpdatesInEventLoop),
      makeNativeMethod(
        "enableBackgroundExecutor",
        JReactNativeFeatureFlagsCxxInterop::enableBackgroundExecutor),
      makeNativeMethod(
        "enableCustomDrawOrderFabric",
        JReactNativeFeatureFlagsCxxInterop::enableCustomDrawOrderFabric),
      makeNativeMethod(
        "enableFixForClippedSubviewsCrash",
        JReactNativeFeatureFlagsCxxInterop::enableFixForClippedSubviewsCrash),
      makeNativeMethod(
        "enableMicrotasks",
        JReactNativeFeatureFlagsCxxInterop::enableMicrotasks),
      makeNativeMethod(
        "enableMountHooksAndroid",
        JReactNativeFeatureFlagsCxxInterop::enableMountHooksAndroid),
      makeNativeMethod(
        "enableSpannableBuildingUnification",
        JReactNativeFeatureFlagsCxxInterop::enableSpannableBuildingUnification),
      makeNativeMethod(
        "inspectorEnableCxxInspectorPackagerConnection",
        JReactNativeFeatureFlagsCxxInterop::inspectorEnableCxxInspectorPackagerConnection),
      makeNativeMethod(
        "inspectorEnableModernCDPRegistry",
        JReactNativeFeatureFlagsCxxInterop::inspectorEnableModernCDPRegistry),
      makeNativeMethod(
        "skipMountHookNotifications",
        JReactNativeFeatureFlagsCxxInterop::skipMountHookNotifications),
      makeNativeMethod(
        "useModernRuntimeScheduler",
        JReactNativeFeatureFlagsCxxInterop::useModernRuntimeScheduler),
  });
}

} // namespace facebook::react
