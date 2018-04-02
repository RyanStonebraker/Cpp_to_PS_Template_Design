// Vertical.cpp
// A vertically drawn stack of shapes

#include "Vertical.h"
#include "Shape.h"

Vertical::Vertical (std::vector <std::shared_ptr<Shape>> & shapes) : _xOrigin(4), _yOrigin(2) {
  _stackedHeight = _yOrigin;
  for (auto & currentShape : shapes) {
      currentShape->setY(_stackedHeight + _yOrigin);
      _stackedHeight += currentShape->getHeight();
      currentShape->setX(_xOrigin - double(currentShape->getWidth())/2);
      addSharedExpression(currentShape);
  }
}

std::string Vertical::drawCurrentAboveToString() {
  // double currentHeight = 0;
  // for (auto i = 0; i < getNumberOfSubExpressions(); ++i) {
  //   (*this)[i]->setY(getY() + currentHeight);
  // }
  return {};
}

std::string Vertical::drawCurrentBelowToString() {

  return {};
}

void Vertical::setPosition(double x, double y) {
  _xOrigin = x;
  _yOrigin = y;
}
