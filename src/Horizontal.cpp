// Horizontal.cpp
// Implementation of Horizontal class

#include "Horizontal.h"

Horizontal::Horizontal(std::vector <std::shared_ptr<Shape>> & shapes) : Composite(shapes) {
	setSpacingMultiplier(1,0);
}

Horizontal::Horizontal(std::initializer_list<std::shared_ptr<Shape>> & shapes) : Composite(shapes) {
	setSpacingMultiplier(1,0);
}
