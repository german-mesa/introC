#include <iostream>
#include <string>

#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary) : firstName(first), lastName(last), arbitraryNumber(arbitrary)
{
    std::cout << "Constructing Person" << std::endl;
}

Person::~Person()
{
    std::cout << "Destructing Person" << std::endl;
}

std::string Person::getName()
{
    return firstName + " " + lastName;
}