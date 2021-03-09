#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

// Remind to implement left opperator in classes willing to use this template
template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}


int main()
{
    cout << "Max of 33 & 44 is " << ::max(33, 44) << endl;
    cout << "Max of 33.0 & 44.0 is " << ::max(33.0, 44.0) << endl;
    cout << "Max of 33 & 44.0 is " << ::max<float>(33.0, 44.0) << endl;
    
    string s1 = "Hello";
    string s2 = "World";
    cout << "Max of Hello & World is " << ::max(s1, s2) << endl;

    Person oPerson1("German", "Mesa", 123);
    Person oPerson2("Someone", "Else", 456);
    cout << "Max of " << oPerson1.getName() << " and " <<  oPerson2.getName() << " is " << ::max(oPerson1, oPerson2).getName() << endl;

    return 0;
}