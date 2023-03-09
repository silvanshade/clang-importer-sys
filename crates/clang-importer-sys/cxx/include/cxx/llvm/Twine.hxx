#pragma once

#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/Twine.h"

#include <memory>

namespace cxx {
namespace llvm {
namespace Twine {

[[gnu::always_inline]] static inline std::shared_ptr<::llvm::Twine>
make()
{
  return std::make_shared<::llvm::Twine>(::llvm::Twine::createNull());
}

[[gnu::always_inline]] static inline std::shared_ptr<::llvm::Twine>
from_cxx_string(std::string const& Str)
{
  return std::make_shared<::llvm::Twine>(::llvm::Twine(Str));
}

[[gnu::always_inline]] static inline std::shared_ptr<::llvm::Twine>
from_string_ref(::llvm::StringRef const& Str)
{
  return std::make_shared<::llvm::Twine>(::llvm::Twine(Str));
}

} // namespace Twine
} // namespace llvm
} // namespace cxx
