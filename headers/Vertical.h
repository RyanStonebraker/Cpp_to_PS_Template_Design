// Vertical.h
// Container that stacks Shapes on top of each other

#ifndef VERTICAL_H
#define VERTICAL_H

#include "Expression.h"
#include "Shape.h"
#include <memory>
#include <vector>
#include <initializer_list>

class Vertical : public Expression {
public:
  Vertical (Vertical &) = default;
  Vertical (std::vector <std::shared_ptr<Shape>> & shapes);
  Vertical (std::initializer_list<std::shared_ptr<Shape>> & shapes);

  void setPosition(double x, double y);

  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  double _stackedHeight;
  double _xOrigin;
  double _yOrigin;
};

#endif
