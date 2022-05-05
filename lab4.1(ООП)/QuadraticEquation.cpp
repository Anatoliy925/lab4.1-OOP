#include "QuadraticEquation.hpp"
#include <cmath>
QuadraticEquation::QuadraticEquation()
{
    a = 0;
    b = 0;
    c = 0;
}

QuadraticEquation::QuadraticEquation(double x, double y, double z)
{
    a = x;
    b = y;
    c = z;
}

double* QuadraticEquation::equation_roots()
{
    double x[] = {0, 0};
    double d = b*b - 4*a*c;
    x[0] = (-b + sqrt(d))/(2*a);
    x[1] = (-b - sqrt(d))/(2*a);
    
    return x;
}
