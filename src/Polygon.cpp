// Polygon.cpp
// Polygon class that will be the base class for all polygons

#include "Polygon.h"

Polygon::Polygon(double numberOfSides, double dimension) : _sides(numberOfSides) {
  setBounds(dimension, dimension);
}

std::string Polygon::drawCurrentAboveToString () {
  std::string polygonPath;
  polygonPath += "newpath\n";
  polygonPath += convertUnits(getX(), 1) + " " + convertUnits(getY(), 1) + " moveto\n";
  polygonPath += convertUnits(getWidth(), 1) + " 0 rlineto\n";
  polygonPath += "0 " + convertUnits(getHeight(), 1) + " rlineto\n";
  polygonPath += "-" + convertUnits(getWidth(), 1) + " 0 rlineto\n";
  polygonPath += "closepath\n";
  polygonPath += "stroke";
  return polygonPath;
}

std::string Polygon::drawCurrentBelowToString () {
  return {};
}

size_t Polygon::getSides() const {
  return _sides;
}
