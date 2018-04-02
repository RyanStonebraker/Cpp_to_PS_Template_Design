//
//  Canvas.hpp
//  cpp_to_ps
//
//  Created by Thatcher Lane on 3/31/18.
//  Copyright © 2018 Thatcher Lane. All rights reserved.
//

#ifndef Canvas_h
#define Canvas_h

#include <string>
using std::string;
using std::to_string;
#include <sstream>
using std::stringstream;


//functions that output ps code
string psBegin();
string psPageBreak();

//functions that generate ps code
string psLine(int,int);
string psMove(int,int);
string psArc(int,int,double,int,int);
string psHeader(int x, int y);
string psFooter();


#endif /* Canvas_h */
