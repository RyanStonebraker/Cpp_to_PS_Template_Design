//
//  Circle.cpp
//  
//
//  Created by Thatcher Lane on 4/1/18.
//

#include "Circle.h"
#include "Canvas.h"

double Circle::getRadius(){
    return _radius;
}

std::string Circle::draw() {
    return draw(getX(),getY());
}

std::string Circle::draw(int x, int y) const{
    std::stringstream ss;

    ss << psHeader(x,y);

    ss << psArc(0,0,_radius,0,360);

    ss << psFooter();

    return ss.str();
}
