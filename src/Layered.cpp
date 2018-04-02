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
:Shape(0,0), m_shapes(std::move(shapes))
{
    for(unsigned int i = 0; i < m_shapes.size(); ++i)
    {
        if(getWidth() < m_shapes[i]->getWidth())
            setWidth(m_shapes[i]->getWidth());
        if(getHeight() < m_shapes[i]->getHeight())
            setHeight(m_shapes[i]->getHeight());
    }
}

std::string Layered::drawCurrentAboveToString(){
    return "";
}

std::string Layered::drawCurrentBelowToString(){
    return "";
}

