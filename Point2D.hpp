/** @file Point2D.hpp
 @brief Declares a Point 2D class
 @author Connor Hennen
 @date October 26, 2016
 */


#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <vector>
#include <string>

/** @class Point2D
 @brief Describes a 2D point with two variables of type double
 
 This class has variables for the position of a 2D point, and a function for printing the point
 */
class Point2D{
public:
    
    //Constructor
    Point2D(double x, double y);
    
    //Print procedure
    virtual void print() const;
    
    //deconstructor
    virtual ~Point2D();

private:
    //variables
    double x;
    double y;
};

#endif

