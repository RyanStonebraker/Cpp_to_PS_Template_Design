// Expression.cpp
// Implements member functions of the abstract Expression class that are not
// virtual

#include "Expression.h"
#include <fstream>

static size_t expressionCount = 0;

Expression::Expression() {
  ++expressionCount;
}

std::string Expression::drawToString() {
  auto fullExpression = drawCurrentAboveToString();
  for (auto & expression : _subExpressions) {
    fullExpression += expression->drawToString();
  }
  fullExpression += drawCurrentBelowToString();

  return fullExpression;
}

void Expression::drawToFile(const std::string & file) {
  std::ofstream psWriter(file);

  psWriter << drawToString();
}

void Expression::setUnits(size_t units) {
  _units = units;
}

size_t Expression::getUnits() const {
  return _units;
}
