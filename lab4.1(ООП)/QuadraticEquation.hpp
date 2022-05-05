#ifndef QuadraticEquation_hpp
#define QuadraticEquation_hpp

#include <stdio.h>
#include <iostream>
#include "Base.hpp"


class QuadraticEquation: public Base {
    
    double a, b, c;
    
public:
    
    QuadraticEquation();
    QuadraticEquation(double, double, double);
    virtual double* equation_roots();

};

#endif
