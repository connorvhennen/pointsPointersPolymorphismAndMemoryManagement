/** @file Point2D.cpp
 @brief Implements a Point 2D class
 @author Connor Hennen
 @date October 26, 2016
 */

#include "Point2D.hpp"

/** Constructor with two parameters
 @param init_x is the numeric value to be stored describing the point's position with respect to the x-axis
 @param init_y is the numeric value to be stored describing the point's position with respect to the y-axis
 */
Point2D::Point2D(double init_x, double init_y){
    x = init_x;
    y = init_y;
}

/** Prints the position of the point
 */
void Point2D::print() const{
    std::cout << "(" << x << "," << y << ")";
    
    return;
}

Point2D::~Point2D()
{}
