/** @file Points.cpp
 @brief Implements a Points class
 @author Connor Hennen
 @date October 26, 2016
 */


#include "Points.hpp"

void Points::push_back(Point2D* pt){
    points.push_back(pt);
}

Points::~Points(){
    for(auto& x : points){
        delete x;
    }
}

void Points::print() const{
    for (size_t i = 0, n = points.size(), numberOfSelections = 1; i < n; ++i, ++numberOfSelections) {
        
        std::cout << numberOfSelections << ": ";
        
        points[i] -> print();
        
        std::cout << std::endl;
    }
}

