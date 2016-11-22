/** @file WeightedPoint2D.cpp
 @brief Implements a WeightedPoint2D class
 @author Connor Hennen
 @date October 26, 2016
 */

#include "WeightedPoint2D.hpp"
#include <string>

/** Constructor with three parameters
 
 @param init_x is the numeric value to be stored describing the point's position with respect to the x-axis. It will be implemented via the Point2D constructor and then initialized for a ColorPoint2D before the body of the ColorPoint2D constructor
 
 @param init_y is the numeric value to be stored describing the point's position with respect to the y-axis. It will be implemented via the Point2D constructor and then initialized for a ColorPoint2D before the body of the ColorPoint2D constructor
 
 @param init_weight is the weight value to be stored as a double
 */
WeightedPoint2D::WeightedPoint2D(double init_x, double init_y, double init_weight):Point2D(init_x, init_y), weight(init_weight){}

/** Prints the weight and then the position of the point. The position is printed via the Point2D class member print function
 */
void WeightedPoint2D::print() const{
    std::cout<<weight;
    Point2D::print();
    return;
}

WeightedPoint2D::~WeightedPoint2D()
{}
