//Shape.cpp
// Implementation of shape class, see Shape.h for more details

#include <sys/types.h>
#include "Shape.h"

void Shape::setX(size_t x) {
	_x = x;
}

void Shape::setY(size_t y) {
	_y = y;
}

// Convenience method to set X and Y at the same time
void Shape::setPosition(size_t x, size_t y) {
	setX(x);
	setY(y);
}

size_t Shape::getX() {
	return _x;
}

size_t Shape::getY() {
	return _y;
}

void Shape::setWidth(size_t width) {
	_width = width;
}

void Shape::setHeight(size_t height) {
	_height = height;
}

// Convenience method to set width and height at the same time
void Shape::setBounds(size_t width, size_t height) {
	setWidth(width);
	setHeight(height);
}

size_t Shape::getWidth() {
	return _width;
}

size_t Shape::getHeight() {
	return _height;
}