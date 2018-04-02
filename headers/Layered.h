//
//  Layered.h
//  cpp_to_ps
//
//  Created by Thatcher Lane on 4/1/18.
//  Copyright © 2018 Thatcher Lane. All rights reserved.
//

#ifndef Layered_h
#define Layered_h

#include <stdio.h>
#include "Shape.h"
#include "Canvas.h"

#include <initializer_list>
using std::initializer_list;

class Layered : public Shape
{
public:
    Layered() = default;
    Layered(std::initializer_list<std::shared_ptr<Shape>> shapes);
    ~Layered() = default;
    std::string drawCurrentAboveToString();
    std::string drawCurrentBelowToString();
private:
    std::vector<std::shared_ptr<Shape>> m_shapes;
};


#endif /* Layered_h */
