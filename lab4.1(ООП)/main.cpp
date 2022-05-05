#include <iostream>
#include <stdio.h>
#include "LiniarEquations.hpp"
#include "QuadraticEquation.hpp"
#include "Base.hpp"
using namespace std;

int main()
{
    Base **ptr = new Base*[3];
    double k, a, b, c;
    
    cout << "Коєфіцієнти лінійного рівняння" << endl;
    cout << " k = "; cin >> k;
    cout << " b = "; cin >> b;
    ptr[0] = new LiniarEquations(k, b);
    cout << "Корень лінійного рівняння: " << dynamic_cast<LiniarEquations*>(ptr[0])->equation_roots()[0] << endl << endl;

    cout << "Коєфіцієнти квадратного рівняння" << endl;
    cout << " a = "; cin >> a;
    cout << " b = "; cin >> b;
    cout << " c = "; cin >> c;
    ptr[1] = new QuadraticEquation(a, b, c);
    cout << "Корені квадратного рівняння: " << endl;
    cout << "Перший корінь: "<<dynamic_cast<QuadraticEquation*>(ptr[1])->equation_roots()[0] << endl;
    cout<<"Другий корінь: "<<dynamic_cast<QuadraticEquation*>(ptr[1])->equation_roots()[1] << endl << endl;
    
    return 0;
}
