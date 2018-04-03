//
//  Circle.cpp
//
//
//  Created by Thatcher Lane on 4/1/18.
//

#include <sys/types.h>
#include "Canvas.h"
#include "Circle.h"

double Circle::getRadius(){
    return _radius;
}

std::string Circle::drawCurrentAboveToString(){
  std::stringstream ss;

  ss << psHeader(getX(),getY());

  ss << psArc(0,0,_radius,0,360);

  ss << psFooter();

  return ss.str();
}

std::string Circle::drawCurrentBelowToString(){
  return {};
}
