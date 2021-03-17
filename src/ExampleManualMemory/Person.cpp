#include <iostream>
#include <string>

#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary) : firstName(first), lastName(last), arbitraryNumber(arbitrary), pResource(nullptr)
{
    std::cout << "Constructing Person - " << this->getName() << std::endl;
}

Person::Person(Person const& otherPerson)
{
    std::cout << "Constructing Person Copy - " << otherPerson.getName() << std::endl;
    
    firstName = otherPerson.firstName;
    lastName = otherPerson.lastName;
    
    if(otherPerson.pResource != nullptr)
        pResource = new Resource(this->getName());

}

Person::~Person()
{
    if(pResource != nullptr)        // To avoid memory leak if pResource is already created
        delete pResource;

    std::cout << "Destructing Person - " << this->getName() << std::endl;
}

std::string Person::getName() const
{
    return firstName + " " + lastName;
}

void Person::addResource()
{
    if(pResource != nullptr)        // To avoid memory leak if pResource is already created
        delete pResource;
    
    pResource = new Resource(this->getName());
}

Person& Person::operator=(const Person& otherPerson)
{
    if(pResource != nullptr)        // To avoid memory leak if pResource is already created
        delete pResource;
    
    if(otherPerson.pResource != nullptr)
        pResource = new Resource(otherPerson.pResource->getName());
    
    return *this;
}