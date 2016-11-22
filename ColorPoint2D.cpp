/** @file ColorPoint2D.cpp
 @brief Implements a ColorPoint2D class
 @author Connor Hennen
 @date October 26, 2016
 */

#include "ColorPoint2D.hpp"
#include <string>

/** Constructor with three parameters
 
 @param init_x is the numeric value to be stored describing the point's position with respect to the x-axis. It will be implemented via the Point2D constructor and then initialized for a ColorPoint2D before the body of the ColorPoint2D constructor
 
 @param init_y is the numeric value to be stored describing the point's position with respect to the y-axis. It will be implemented via the Point2D constructor and then initialized for a ColorPoint2D before the body of the ColorPoint2D constructor
 
 @param init_color is the color value to be stored as a string
 */
ColorPoint2D::ColorPoint2D(double init_x, double init_y, std::string init_color):Point2D(init_x, init_y), color(init_color){}

/** Prints the color and then the position of the point. The position is printed via the Point2D class member print function
 */
void ColorPoint2D::print() const{
    std::cout<<color;
    Point2D::print();
    return;
}

ColorPoint2D::~ColorPoint2D()
{}
