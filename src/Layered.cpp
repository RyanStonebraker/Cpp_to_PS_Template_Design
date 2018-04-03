//
//  Layered.cpp
//  cpp_to_ps
//
//  Created by Thatcher Lane on 4/1/18.
//  Copyright © 2018 Thatcher Lane. All rights reserved.
//

#include "Layered.h"
#include "Shape.h"

#include <iostream>
#include <algorithm>


Layered::Layered(std::initializer_list<std::shared_ptr<Shape>> shapes)
:Shape(0,0), _shapes(std::move(shapes))
{
    for(unsigned int i = 0; i < _shapes.size(); ++i)
    {
        if(getWidth() < _shapes[i]->getWidth())
            setWidth(_shapes[i]->getWidth());
        if(getHeight() < _shapes[i]->getHeight())
            setHeight(_shapes[i]->getHeight());
    }
}

std::string Layered::drawCurrentAboveToString(){
  std::stringstream ss;
  std::cout << this->getX() << std::endl;
  ss << psHeader(200,200);

	for(unsigned int i = 0; i < _shapes.size(); ++i)
	{
		ss << "gsave\n";
    ss << _shapes[i]->drawCurrentAboveToString();
    ss << "grestore\n";
	}

  ss << psFooter();

  return ss.str();

}

std::string Layered::drawCurrentBelowToString(){
  return {};
}
