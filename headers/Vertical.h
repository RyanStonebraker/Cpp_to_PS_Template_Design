// Vertical.h
// Container that stacks Shapes on top of each other

#ifndef VERTICAL_H
#define VERTICAL_H

#include "Expression.h"
#include "Shape.h"
#include <memory>
#include <vector>

class Vertical : public Expression {
public:
  // template <typename FirstShape, typename ... Shapes>
  // Vertical (FirstShape shape1, Shapes &... otherShapes) : _stackedHeight(0) {
  //   std::shared_ptr<FirstShape> currentShape = std::make_shared<FirstShape>(shape1);
  //   currentShape->setY(currentShape->getHeight() + _stackedHeight + _yOrigin);
  //   _stackedHeight += currentShape->getY();
  //   currentShape->setX(currentShape->getWidth()/2 + _xOrigin);
  //
  //   addExpression(currentShape);
  //   Vertical(otherShapes...);
  // }

  Vertical (Vertical &) = default;
  Vertical (std::vector <std::shared_ptr<Shape>> & shapes);

  void setPosition(double x, double y);

  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  double _stackedHeight;
  double _xOrigin;
  double _yOrigin;
};

#endif
