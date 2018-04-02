// Expression.h
// Abstract base class following the Interpreter design pattern
// in order to implement a C++ to PostScript Framework

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

  // void addExpression(Expression & subExpression);
  template <typename InherittedExpression>
  void addExpression(InherittedExpression & subExpression) {
    _subExpressions.emplace_back(std::make_shared<InherittedExpression>(subExpression));
  }
  std::string drawToString();
  void drawToFile(const std::string & file);
  void setUnits(size_t units);
  size_t getUnits() const;
  std::string convertUnits(double expr, size_t oppUnits);
  void setEnclosing();
  virtual std::string drawCurrentAboveToString() = 0;
  virtual std::string drawCurrentBelowToString() = 0;
private:
  bool _enclosingExpression;
  size_t _units;
  std::vector<std::shared_ptr<Expression>> _subExpressions;
};

#endif
