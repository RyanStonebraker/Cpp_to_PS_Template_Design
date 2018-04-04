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
#include "Triangle.h"
#include "Canvas.h"

#include <iostream>
using std::cout;
using std::endl;

#include <memory>

int main () {
  Canvas testCanvas ("testCanvas.ps");
  Rectangle rectangle(2,2);
  rectangle.setPosition(1,1);
  testCanvas.addExpression(rectangle);

  Star starShape (3);
  starShape.setPosition(4,4);
  testCanvas.addExpression(starShape);

  Triangle triangle (2);
  Rotate triangleRotate(triangle, Rotate::LEFT);
  triangle.addExpression(triangleRotate);
  triangle.setPosition(6,6);
  testCanvas.addExpression(triangle);

  testCanvas.addNewPage();

  Polygon pentagon(5, 2);
  pentagon.setPosition(5,10);
  testCanvas.addExpression(pentagon);

  Spacer space(200,200);

  Circle circle(2, 2, 1);
  circle.setPosition(3,3);
  testCanvas.addExpression(circle);

  // testCanvas.addNewPage();
  // Rotate(triangle, Rotate::FLIP);
  // Scale(pentagon, 100, 50);

  // Rotate rotateTest(pentagon, Rotate::RotationAngle::FLIP);
  // pentagon.addExpression(rotateTest);
  // pentagon.setPosition(3,3);
  // std::vector <std::shared_ptr<Shape>> shapes;
  // shapes.push_back(std::make_shared<Polygon>(pentagon));
  // shapes.push_back(std::make_shared<Polygon>(triangle));
  // Vertical stacker(shapes);
  // Horizontal horizontal(shapes);
  // Layered layers{std::make_shared<Polygon>(pentagon), std::make_shared<Polygon>(triangle)};

  // starShape.drawToFile("test2.ps");
  // space.drawToFile("test2.ps");
}
