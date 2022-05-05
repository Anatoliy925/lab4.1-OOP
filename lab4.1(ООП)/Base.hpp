#ifndef Base_hpp
#define Base_hpp

#include <iostream>
#include <stdio.h>
using namespace std;

class Base{
public:
    virtual double* equation_roots(){
        return 0;
    };
};



#endif 
