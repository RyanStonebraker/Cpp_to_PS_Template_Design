// Rectangle.cpp
// Implementation of rectangle class

#include <sys/types.h>
#include "Canvas.h"
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) {
	_width = width;
	_height = height;
}

std::string Rectangle::drawCurrentAboveToString() {
	std::stringstream result;

	result << psHeader(getX(), getY());
	result << psLine(getWidth(), 0);
	result << psLine(getWidth(), getHeight());
	result << psLine(getHeight(), 0);
	result << psLine(0, 0);
	result << psFooter();

	return result.str();
}

std::string Rectangle::drawCurrentBelowToString() {
	return {};
}