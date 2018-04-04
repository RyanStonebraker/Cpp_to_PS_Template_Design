// Rectangle.cpp
// Implementation of rectangle class

#include <sys/types.h>
#include "Canvas.h"
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) {
	_width = width;
	_height = height;
	_x = 0;
	_y = 0;
}

std::string Rectangle::drawCurrentAboveToString() {
	std::stringstream result;

	result << psHeader(getX() * getUnits(), getY() * getUnits());
	result << psMove(0, 0);
	result << psLine(getWidth() * getUnits(), 0);
	result << psLine(getWidth() * getUnits(), getHeight() * getUnits());
	result << psLine(0, getHeight() * getUnits());
	result << psFooter();

	return result.str();
}

std::string Rectangle::drawCurrentBelowToString() {
	return {};
}