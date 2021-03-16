#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

int DoubleIt(int const& x)
{
    return 2 * x;
}

int main()
{
    int i = 3;
    int j = 5;
    int const ci = 3;

    i = 4;
    // ci = 4;

    int& rI = i;
    // int& ncri = ci;                 // Cannot assign a non constant reference to a constant value
    int const& rci = i;             // Content cannot be changed

    rI = 5;
    // rci = 5;

    int doubleI = 0; 
    doubleI = DoubleIt(i);
    doubleI = DoubleIt(10);


    // Pointer to a variable. Both can be changed.
    int* pointer_to_variable = &i;

    // Pointer to a constant, i.e. pointer can be changed, but not constant itself
    int const* pointer_to_constant = &i;      

    // Const pointer to a variable, i.e. pointer cannot be changed    
    int* const constant_pointer_to_variable = &i; 

    // Const pointer to a constant, i.e. neither constant or pointer can be changed
    int const* const constant_pointer_to_constant = &ci;

    return 0;
}