// Rotate.cpp
// Inheritted class from Expression that takes a Shape and rotates it

#include "Rotate.h"
#include <memory>
#include <iostream>

Rotate::Rotate(std::shared_ptr<Shape> shape, RotationAngle rotationAmount) : _rotationAmount(rotationAmount) {
  _origin.first = shape->getX() + double(shape->getWidth())/2;
  _origin.second = shape->getY() + double(shape->getHeight())/2;
  setEnclosing();
}

std::string Rotate::drawCurrentAboveToString() {
  std::string topString;
  topString += "gsave\n";

  topString += convertUnits(_origin.first, 1) + " " + convertUnits(_origin.second, 1) + " translate\n";
  auto rotation = std::to_string(_rotationAmount);
  topString += rotation + " rotate\n";
  topString += convertUnits(-_origin.first, 1) + " " + convertUnits(-_origin.second, 1) + " translate\n";
  return topString;
}

std::string Rotate::drawCurrentBelowToString() {
  return {"grestore"};
}
