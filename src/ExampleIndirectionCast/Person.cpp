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

std::string Person::getName() const
{
    return firstName + " " + lastName;
}

bool Person::operator<(Person const& otherPerson) const
{
    return arbitraryNumber < otherPerson.arbitraryNumber;
}

bool Person::operator<(int otherPersonNumber) const
{
    return arbitraryNumber < otherPersonNumber;
}

bool operator<(int otherPersonNumber, Person const& otherPerson)
{
    // return otherPersonNumber < otherPerson.getNumber();  // Use if function is not friend
    return otherPersonNumber < otherPerson.arbitraryNumber; // Use if function is friend
}

Person& Person::operator=(const Person& otherPerson)
{   
    return *this;
}