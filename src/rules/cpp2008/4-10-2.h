//===--- 4-10-2.h - clang-tidy-misra ----------------------------*- C++ -*-===//
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef CLANG_TIDY_MISRA_CPP_2008_RULE_4_10_2_H
#define CLANG_TIDY_MISRA_CPP_2008_RULE_4_10_2_H

#include "ClangTidyMisraCheck.h"

namespace clang {
namespace tidy {
namespace misra {
namespace cpp2008 {

class Rule_4_10_2 : public ClangTidyMisraCheck {
public:
  Rule_4_10_2(StringRef Name, ClangTidyContext *Context);
  virtual void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  virtual void
  checkImpl(const ast_matchers::MatchFinder::MatchResult &Result) override;
};

} // cpp2008
} // namespace misra
} // namespace tidy
} // namespace clang

#endif // CLANG_TIDY_MISRA_CPP_2008_RULE_4_10_2_H
