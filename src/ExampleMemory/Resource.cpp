#include <iostream>
#include <string>

#include "Resource.h"


Resource::Resource(std::string n):name(n)
{
    std::cout << "Creating Resource" << std::endl;
}

Resource::~Resource()
{
    std::cout << "Destroying Resource" << std::endl;
}
