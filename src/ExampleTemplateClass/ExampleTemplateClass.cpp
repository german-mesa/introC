#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Accumulator.h"



int main()
{
    Accumulator integers(0);

    integers += 3;
    integers += 7;
    cout << integers.getTotal() << endl;

    Accumulator strings(string(""));

    strings += "Hello";
    strings += " World!";
    cout << strings.getTotal() << endl;
    
    return 0;
}