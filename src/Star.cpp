// Star.cpp
// Star class that will be the base class for all Stars

#include "Star.h"

Star::Star(double dimension) : _startingAngle(0) {
  setBounds(dimension, dimension);
}

double Star::getStartingAngle() const {
  return _startingAngle;
}
void Star::setStartingAngle(double angle) {
  _startingAngle = angle;
}

std::string Star::drawCurrentAboveToString () {
  std::string StarPath;
  StarPath += "newpath\n";
  // TODO: ADD STAR IMPLEMENTATION
  StarPath += "closepath\n";
  StarPath += "stroke\n";
  return StarPath;
}

std::string Star::drawCurrentBelowToString () {
  return {};
}
