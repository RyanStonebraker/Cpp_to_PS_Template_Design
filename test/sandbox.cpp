// sandbox.cpp
// Contains example code to test framework on the spot, rather than with structured
// tests

#include "Polygon.h"
#include "Rotate.h"

#include <iostream>
using std::cout;
using std::endl;

#include <memory>

int main () {
  // auto testShape = std::make_shared<Polygon>(3,3,4);
  Polygon testShape(3, 3, 4);

  std::shared_ptr<Shape> rShape = std::make_shared<Polygon>(testShape);

  Rotate rotateTest(rShape, Rotate::RotationAngle::FLIP);
  rShape->addExpression(std::make_shared<Rotate>(rotateTest));
  rShape->drawToFile("test.ps");
}
