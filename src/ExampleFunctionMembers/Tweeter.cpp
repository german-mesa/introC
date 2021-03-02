#include <iostream>

#include "Tweeter.h"


Tweeter::Tweeter(std::string first, std::string last, int arbitraryNumber, std::string handle) :
    Person(first, last,arbitraryNumber),
    tweeterHandle(handle)
{
    std::cout << "Constructing Tweeter" << tweeterHandle << std::endl;
}

Tweeter::~Tweeter()
{
    std::cout << "Destructing Tweeter" << tweeterHandle << std::endl;
}