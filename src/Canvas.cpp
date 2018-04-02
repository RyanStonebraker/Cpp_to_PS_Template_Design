//
//  Canvas.cpp
//  cpp_to_ps
//
//  Created by Thatcher Lane on 3/31/18.
//  Copyright © 2018 Thatcher Lane. All rights reserved.
//

#include "Canvas.h"


/**
 * @brief generates ps code for ps file header
 * @details returns a string for ps file headers
 * @return string "%!\n"
 */
string psBegin()
{
    return "%!\n";
}

/**
 * @brief generates ps code for printing a page
 * @details returns a string containing the ps code for printing a page
 * @return string "showpage"
 */
string psPageBreak()
{
    return "showpage";
}

/**
 * @brief generates ps code for drawing a line
 * @details returns a string containing the ps code for drawing a line, in the form "x y lineto\n"
 *
 * @param x x coordinate of endpoint
 * @param y y coordinate of endpoint
 * @return string with ps code
 */
string psLine(int x, int y){
    return to_string(x) + " " + to_string(y) + " lineto\n";
}

/**
 * @brief generates ps code for moving the cursor
 * @details returns a string containing the ps code for moving the ps cursor, in the form "x y moveto\n"
 *
 * @param x x coordinate of target point
 * @param y y coordinate of target point
 *
 * @return string with ps code
 */
string psMove(int x, int y){
    return to_string(x) + " " + to_string(y) + " moveto\n";
}

/**
 * @brief generates ps code for drawing an arc
 * @details returns a string containing the ps code for drawing an arc, in the form 'x y r angle1 angle2 arc'
 *
 * @param x c position of the center
 * @param y y position of the center
 * @param r radius of the arc
 * @param startAngle start angle for the arc, from 0 to 360 degrees
 * @param endAngle end angle for the arc, from 0 to 360 degrees
 * @return string containing ps code
 */
string psArc(int x, int y, double r, int startAngle, int endAngle){
    return to_string(x) + " " + to_string(y) + " " + to_string(r) + " " + to_string(startAngle) + " " + to_string(endAngle) + " arc\n";
}

/**
 * @brief generates ps code for header
 * @details returns a string containing the ps code for a header for draw functions in this library
 *
 * @param x x position of the center of the shape
 * @param y y position of the center of the shape
 *
 * @return string containing ps code
 */
string psHeader(int x, int y){
    return "gsave\nnewpath\n" + to_string(x) + " " + to_string(y) + " translate\n";
}

/**
 * @brief generates ps code for footer
 * @details returns a string containing the ps code for a footer for draw functions in this library
 * @return string containing ps code
 */
string psFooter(){
    return "closepath\nstroke\ngrestore\n";
}
