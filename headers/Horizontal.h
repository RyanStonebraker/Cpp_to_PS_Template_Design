// Horizontal.h
// Container that puts shapes next to each other

#ifndef HORIZONTAL_H
#define HORIZONTAL_H

#include "Expression.h"
#include "Shape.h"
#include <vector>

class Horizontal : public Expression {
public:
	Horizontal() = default;
	Horizontal(std::vector<std::shared_ptr<Shape>> &shapes);

	void setPosition(double x, double y);

	std::string drawCurrentAboveToString() override;
	std::string drawCurrentBelowToString() override;

private:
	std::vector<std::shared_ptr<Shape>> _shapes;
	double _height;
	double _width;
};

#endif