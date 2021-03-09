#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Accumulator.h"



int main()
{
    // Template class
    Accumulator integers(0);

    integers += 3;
    integers += 7;
    cout << integers.getTotal() << endl;

    Accumulator strings(string(""));

    strings += "Hello";
    strings += " World!";
    cout << strings.getTotal() << endl;
    

    // Template specialization
    Accumulator<Person> people(0);

    Person oPerson1("German", "Mesa", 123);
    Person oPerson2("Someone", "Else", 456);

    people += oPerson1;
    people += oPerson2;
    cout << people.getTotal() << endl;

    return 0;
}