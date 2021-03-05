#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

int main()
{
    Person oPersonOne("German", "Mesa", 123);
    Person oPersonTwo("Someone", "Else", 456);
 
    cout << "1 - Person number one is ";
    if (!(oPersonOne < oPersonTwo))
        cout << "not ";
    cout << "less than Person number two" << endl;
    
    cout << "2 - Person number one is ";
    if (!(oPersonOne < 100))
        cout << "not ";
    cout << "less than Person number two" << endl;

    cout << "3 - Person number one is ";
    if (!(100 < oPersonOne))
        cout << "not ";
    cout << "greater than Person number two" << endl;

    return 0;
}