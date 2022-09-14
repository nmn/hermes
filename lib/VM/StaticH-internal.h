/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef HERMES_VM_STATICH_INTERNAL_H
#define HERMES_VM_STATICH_INTERNAL_H

#include "hermes/VM/Runtime.h"
#include "hermes/VM/static_h.h"

namespace hermes::vm {

inline Runtime &getRuntime(SHRuntime *shr) {
  return *((Runtime *)(void *)shr);
}
inline SHRuntime *getSHRuntime(Runtime &runtime) {
  return (SHRuntime *)(void *)&runtime;
}

inline PinnedHermesValue *toPHV(SHLegacyValue *shv) {
  return static_cast<PinnedHermesValue *>(shv);
}
inline const PinnedHermesValue *toPHV(const SHLegacyValue *shv) {
  return static_cast<const PinnedHermesValue *>(shv);
}

} // namespace hermes::vm

#endif // HERMES_VM_STATICH_INTERNAL_H
