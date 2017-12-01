//-*-C++-*-
#ifndef LLAIR_COMPILER_H
#define LLAIR_COMPILER_H

#include <llvm/ADT/StringRef.h>
#include <llvm/Support/Error.h>
#include <llvm/Support/MemoryBuffer.h>

#include <memory>

namespace llair {
  class LLAIRContext;
  class Module;

  llvm::Expected<std::unique_ptr<Module>> compileBuffer(llvm::MemoryBufferRef buffer, LLAIRContext& context);

} // End namespace llair

#endif
