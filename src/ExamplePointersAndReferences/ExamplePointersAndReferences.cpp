#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"


int main() 
{
    // Reference to an integer
    int A = 3;
    cout << "Variable is " << A << endl;

    int& rA = A;
    rA = 5;
    cout << "Variable is " << A << endl;

    // Reference to an object
    Person Kate("Kate", "Gregory", 123);
    Person& rKate = Kate;
    cout << "Person is " << rKate.getNumber() << endl;


    // Pointer to an integer
    int* pA = &A;
    *pA = 4;
    cout << "Variable is " << A << endl;

    int B = 100;
    pA = &B;
    (*pA)++;

    cout << "Variable is " << A << " Pointer content is " << *pA << endl;

    // Pointer to an Object
    Person* pKate = &Kate;
    pKate->setNumber(234);

    cout << "Person number is " << Kate.getNumber() << endl;
    cout << "Person number is " << pKate->getNumber() << endl;

    return 0;
}

