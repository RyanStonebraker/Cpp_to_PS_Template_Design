// Rotate.cpp
// Inheritted class from Expression that takes a Shape and rotates it

#include "Rotate.h"

std::string Rotate::drawCurrentAboveToString() {
  std::string topString;
  topString += "gsave\n";

  auto xOrigin = std::to_string(_origin.first);
  auto yOrigin = std::to_string(_origin.second);
  topString += xOrigin + " " + yOrigin + " moveto\n";

  auto rotation = std::to_string(_rotationAmount);
  topString += rotation + " rotate\n";
  return topString;
}

std::string Rotate::drawCurrentBelowToString() {
  return {"grestore\n"};
}
