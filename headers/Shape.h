// Shape.h
// Abstract shape class inherited from Expression.
// All other shapes should inherit from this.

#ifndef SHAPE_H
#define SHAPE_H

#include <sys/types.h>
#include "Expression.h"

class Shape : public Expression {
public:
	Shape() = default;
	Shape(Shape &) = default;
    Shape(int x, int y, double width, double height): _x(x), _y(y), _width(width), _height(height) {}
    Shape(int x, int y) : _x(x), _y(y) {}
	void setX(size_t x);
	void setY(size_t y);
	void setPosition(size_t x, size_t y);
	size_t getX();
	size_t getY();
	void setWidth(size_t width);
	void setHeight(size_t height);
	void setBounds(size_t width, size_t height);
	size_t getWidth();
	size_t getHeight();
	virtual std::string drawCurrentAboveToString() = 0;
	virtual std::string drawCurrentBelowToString() = 0;
private:
	double _x;
	double _y;
	double _width;
	double _height;
};

#endif
