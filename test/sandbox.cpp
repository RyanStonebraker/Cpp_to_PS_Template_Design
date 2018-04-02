// sandbox.cpp
// Contains example code to test framework on the spot, rather than with structured
// tests

#include "Polygon.h"
#include "Rotate.h"
#include "Spacer.h"
#include "Vertical.h"

#include <iostream>
using std::cout;
using std::endl;

#include <memory>

int main () {
  Polygon pentagon(5, 3);
  Polygon triangle(3, 4);

  // Rotate rotateTest(pentagon, Rotate::RotationAngle::FLIP);
  // pentagon.addExpression(rotateTest);
  // pentagon.setPosition(3,3);
  std::vector <std::shared_ptr<Shape>> shapes;
  shapes.push_back(std::make_shared<Polygon>(pentagon));
  shapes.push_back(std::make_shared<Polygon>(triangle));
  Vertical stacker(shapes);

  stacker.drawToFile("test2.ps");
}
