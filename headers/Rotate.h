// Rotate.h
// An inherited expression that sets gsave/grestore flags on an object and
// rotates it by a given amount.

#ifndef ROTATE_H
#define ROTATE_H

#include "Expression.h"
// #include "Shape.h"
#include <utility>

class Rotate : Expression {
public:
  enum RotationAngle {Left = 90, FLIP = 180, Right = 270};
  // Rotate(Shape shape, RotationAngle rotationAmount);

  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  RotationAngle _rotationAmount;
  std::pair <int, int> _origin;
};

#endif
