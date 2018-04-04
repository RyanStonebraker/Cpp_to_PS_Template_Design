// Horizontal.cpp
// Implementation of Horizontal class

#include "Horizontal.h"
#include "Shape.h"
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

Horizontal::Horizontal(std::vector<std::shared_ptr<Shape>> &shapes) {
	_shapes = shapes;
	_height = 0;
	_width = 0;
	
	double nextX = shapes[0]->getX();
	double y = shapes[0]->getY();
	for (auto &shape : _shapes) {
		// Calculate height and width
		_height = std::max(_height, shape->getHeight());
		_width += shape->getWidth();
		// Set position for shape
		shape->setX(nextX);
		shape->setY(y);
		// Set x position for next shape
		nextX = nextX + shape->getWidth();
	}
}

std::string Horizontal::drawCurrentAboveToString() {
	std::stringstream ss;
	for (auto &shape : _shapes) {
		ss << shape->drawCurrentAboveToString();
		ss << shape->drawCurrentBelowToString();
	}
	return ss.str();
}

std::string Horizontal::drawCurrentBelowToString() {
	return "";
}