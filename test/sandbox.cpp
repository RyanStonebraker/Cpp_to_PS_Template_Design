// sandbox.cpp
// Contains example code to test framework on the spot, rather than with structured
// tests

#include "Polygon.h"
#include "Rotate.h"
#include "Spacer.h"
#include "Vertical.h"
#include "Layered.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Horizontal.h"
#include "Scale.h"
#include "Star.h"

#include <iostream>
using std::cout;
using std::endl;

#include <memory>

int main () {
  Polygon pentagon(5, 3);
  Polygon triangle(3, 4);
  Circle circle(200, 200, 50);
  Rectangle rectangle(100,100);
  Spacer space(200,200);

  Rotate(triangle, Rotate::FLIP);
  Scale(pentagon, 100, 50);

  // Rotate rotateTest(pentagon, Rotate::RotationAngle::FLIP);
  // pentagon.addExpression(rotateTest);
  // pentagon.setPosition(3,3);
  std::vector <std::shared_ptr<Shape>> shapes;
  shapes.push_back(std::make_shared<Polygon>(pentagon));
  shapes.push_back(std::make_shared<Polygon>(triangle));
  Vertical stacker(shapes);
  Horizontal horizontal(shapes);
  Layered layers{std::make_shared<Polygon>(pentagon), std::make_shared<Polygon>(triangle)};

  Star starShape (3);
  starShape.drawToFile("test2.ps");
  // space.drawToFile("test2.ps");
}
