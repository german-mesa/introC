#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Person.h"


int main() 
{
    Person oPerson("German", "Mesa", 456);

    cout << oPerson.getName() << " " << oPerson.getNumber() << endl;
    oPerson.setNumber(124);
    cout << oPerson.getName() << " " << oPerson.getNumber() << endl;
    
    return 0;
}