#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"


int main()
{
    Person oPerson("German", "Mesa", 123);

    cout << oPerson.getName() << endl;
    
    return 0;
}