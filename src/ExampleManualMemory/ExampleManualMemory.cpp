#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"


int main()
{
    Person German("German", "Mesa", 123);
    German.addResource();
    German.addResource();
    German.setFirstName("Juan");
    
    Person Sibling = German;
    return 0;
}