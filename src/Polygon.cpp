// Polygon.cpp
// Polygon class that will be the base class for all polygons

#include "Polygon.h"

Polygon::Polygon(double numberOfSides, double dimension) : _sides(numberOfSides), _startingAngle(0) {
  setBounds(dimension, dimension);
}

double Polygon::getStartingAngle() const {
  return _startingAngle;
}
void Polygon::setStartingAngle(double angle) {
  _startingAngle = angle;
}

std::string Polygon::drawCurrentAboveToString () {
  std::string polygonPath;
  polygonPath += "newpath\n";
  polygonPath += "/xOrigin " + convertUnits(getX(), 1) + " def\n";
  polygonPath += "/yOrigin " + convertUnits(getY(), 1) + " def\n";
  polygonPath += "/radius " + convertUnits(getWidth()/2, 1) + " def\n";
  polygonPath += "/numberOfSides " + std::to_string(getSides()) + " def\n";
  polygonPath += "/angle " + convertUnits(getStartingAngle(), getUnits()) + " def\n";
  polygonPath += "/angleInc 360 numberOfSides div def\n";
  polygonPath += "/cosSide angle cos radius mul xOrigin add def\n";
  polygonPath += "/sinSide angle sin radius mul yOrigin add def\n";
  polygonPath += "cosSide sinSide moveto\n";
  polygonPath += "1 1 numberOfSides 1 add {\n";
  polygonPath += "  /cosSide angle cos radius mul xOrigin add def\n";
  polygonPath += "  /sinSide angle sin radius mul yOrigin add def\n";
  polygonPath += "  cosSide sinSide lineto\n";
  polygonPath += "  /angle angle angleInc add def\n";
  polygonPath += "} for\n";
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
