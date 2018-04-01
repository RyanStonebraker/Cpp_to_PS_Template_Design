// Polygon.h
// The inheritted Polygon concrete class

#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

class Polygon : public Shape {
public:
  Polygon(size_t width, size_t height, size_t numberOfSides);
  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
  size_t getSides() const;
private:
  size_t _sides;
};

#endif