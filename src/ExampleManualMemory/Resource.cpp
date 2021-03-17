#include <iostream>
#include <string>

#include "Resource.h"


Resource::Resource(std::string n):name(n)
{
    std::cout << "Creating Resource for " << this->getName() << std::endl;
}

Resource::~Resource()
{
    std::cout << "Destructing Resource of " << this->getName() << std::endl;
}
