#ifndef LiniarEquations_hpp
#define LiniarEquations_hpp

#include <stdio.h>
#include <iostream>
#include "Base.hpp"


class LiniarEquations: public Base {
    double k, b;
public:
    LiniarEquations();
    LiniarEquations(double, double);
    virtual double* equation_roots();
    
    
    
};



#endif
