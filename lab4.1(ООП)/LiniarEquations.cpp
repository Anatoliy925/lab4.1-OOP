#include "LiniarEquations.hpp"

LiniarEquations::LiniarEquations()
{
    k = 0;
    b = 0;
}

LiniarEquations::LiniarEquations(double s1, double s2)
{
    k = s1;
    b = s2;
}

double* LiniarEquations::equation_roots()
{
    double x[1] = {0};
    x[0] =(-b/k);
    return x;
}
