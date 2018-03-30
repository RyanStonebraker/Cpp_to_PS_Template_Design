// Expression.h
// Abstract base class following the Interpreter design pattern
// in order to implement a C++ to PostScript Framework
//
// NOTE: Every derived class MUST do all calculations with respect to defined units.
// drawCurrentAboveToString and drawCurrentBelowToString allow an expression to
// "draw" PostScript above and below children in _subExpressions if desired.
// expressionCount exists to create unique names.

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <sys/types.h>
#include <memory>
#include <vector>
#include <string>

class Expression {
public:
  Expression();
  ~Expression() = default;

  std::string drawFullExpressionToString();
  void setUnits(size_t units);
  size_t getUnits();

private:
  static size_t expressionCount;
  virtual std::string drawCurrentAboveToString() = 0;
  virtual std::string drawCurrentBelowToString() = 0;
  size_t _units;
  std::vector<std::unique_ptr<Expression>> _subExpressions;
};

#endif
