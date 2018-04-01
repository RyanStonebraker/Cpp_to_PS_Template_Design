// Rotate.h
// An inherited expression that sets gsave/grestore flags on an object and
// rotates it by a given amount.

#ifndef ROTATE_H
#define ROTATE_H

#include "Expression.h"
#include "Shape.h"
#include <utility>
#include <memory>

class Rotate : public Expression {
public:
  enum RotationAngle {Left = 90, FLIP = 180, Right = 270};
  Rotate(std::shared_ptr<Shape> shape, RotationAngle rotationAmount);

  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  RotationAngle _rotationAmount;
  std::pair <double, double> _origin;
};

#endif
