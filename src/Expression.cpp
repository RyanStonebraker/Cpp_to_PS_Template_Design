// Expression.cpp
// Implements member functions of the abstract Expression class that are not
// virtual

#include "Expression.h"
#include <fstream>
#include <utility>

Expression::Expression() : _enclosingExpression(false), _units(72) {}

// template <typename InherittedExpression>
// void Expression::addExpression(InherittedExpression & subExpression) {
//   _subExpressions.emplace_back(std::move(std::make_shared<InherittedExpression>(subExpression)));
// }

std::string Expression::drawToString() {
  std::string topEnclosingExpression;
  std::string enclosedExpression;
  std::string bottomEnclosingExpression;

  enclosedExpression += drawCurrentAboveToString() + "\n";
  for (auto & expression : _subExpressions) {
    if (!expression->_enclosingExpression)
      enclosedExpression += expression->drawToString();
    else if (expression->_enclosingExpression) {
      topEnclosingExpression += expression->drawCurrentAboveToString() + "\n";
      bottomEnclosingExpression += expression->drawCurrentBelowToString();
    }
  }
  enclosedExpression += drawCurrentBelowToString() + "\n";
  return topEnclosingExpression + enclosedExpression + bottomEnclosingExpression;
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

void Expression::setEnclosing() {
  _enclosingExpression = true;
}

std::string Expression::convertUnits(double expr, size_t oppUnits) {
  auto convertedNum = std::to_string(expr * (getUnits() / oppUnits));
  if (convertedNum.find(".0") == std::string::npos)
    return convertedNum;
  for (int i = convertedNum.size() -1; i >= 0; --i) {
    if (convertedNum[i] == '0')
      convertedNum = convertedNum.substr(0, convertedNum.size()-1);
    else if (convertedNum[i] == '.') {
      convertedNum = convertedNum.substr(0, convertedNum.size()-1);
      break;
    }
    else
      break;
  }
  return convertedNum;
}
