// Expression.h
// Abstract base class following the Interpreter design pattern
// in order to implement a C++ to PostScript Framework
//
// NOTE: Every derived class MUST do all calculations with respect to defined units.
// drawCurrentAboveToString and drawCurrentBelowToString allow an expression to
// "draw" PostScript above and below children in _subExpressions if desired.
// expressionCount exists to create unique names.
//
// TODO: In order for rotate and scale to work in PS, gsave and grestore need to wrap
// everything. This wouldn't be possible from the scope of rotate or scale, so
// there should exist a flag in the inherited Shape class that wraps it in gsave
// and grestore

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

  void addExpression(std::unique_ptr<Expression> subExpression);
  std::string drawToString();
  void drawToFile(const std::string & file);
  void setUnits(size_t units);
  size_t getUnits() const;

private:
  static size_t expressionCount;
  virtual std::string drawCurrentAboveToString() = 0;
  virtual std::string drawCurrentBelowToString() = 0;
  size_t _units;
  std::vector<std::unique_ptr<Expression>> _subExpressions;
};

#endif
