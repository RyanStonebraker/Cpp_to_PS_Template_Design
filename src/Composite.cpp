// Composite.cpp
// A Compositely drawn stack of shapes

#include "Composite.h"
#include "Shape.h"

Composite::Composite (std::vector <std::shared_ptr<Shape>> & shapes) : _xOrigin(0), _yOrigin(0) {
  for (auto & currentShape : shapes) {
      setSpacingIncrement(currentShape->getWidth(),currentShape->getHeight());
      currentShape->setY(_yOrigin);
      currentShape->setX(_xOrigin - double(currentShape->getWidth())/2);
      addSharedExpression(currentShape);
  }
}

Composite::Composite (std::initializer_list<std::shared_ptr<Shape>> & shapes) : _xOrigin(0), _yOrigin(0) {
  for (auto & currentShape : shapes) {
    setSpacingIncrement(currentShape->getWidth(),currentShape->getHeight());
    currentShape->setY(_yOrigin);
    currentShape->setX(_xOrigin - double(currentShape->getWidth())/2);
    addSharedExpression(currentShape);
  }
}

void Composite::setSpacingMultiplier(double xMult, double yMult) {
  _xMult = xMult;
  _yMult = yMult;
}

void Composite::setSpacingIncrement(double x, double y) {
  _xOrigin += x * _xMult;
  _yOrigin += y * _yMult;
}

std::string Composite::drawCurrentAboveToString() {
  return {};
}

std::string Composite::drawCurrentBelowToString() {

  return {};
}

void Composite::setPosition(double x, double y) {
  _xOrigin = x;
  _yOrigin = y;
}
