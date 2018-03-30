// Expression.cpp
// Implements member functions of the abstract Expression class that are not
// virtual

#include "Expression.h"

static size_t expressionCount = 0;

Expression::Expression() {
  ++expressionCount;
}

std::string Expression::drawFullExpressionToString() {
  auto fullExpression = drawCurrentAboveToString();
  for (auto & expression : _subExpressions) {
    fullExpression += expression->drawFullExpressionToString();
  }
  fullExpression += drawCurrentBelowToString();

  return fullExpression;
}

void Expression::setUnits(size_t units) {
  _units = units;
}

size_t Expression::getUnits() {
  return _units;
}
