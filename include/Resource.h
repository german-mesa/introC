#pragma once

#include <string>

class Resource
{
    private:
        std::string name;
    public:
        Resource(std::string sName);
        ~Resource();

        std::string getName() const {return name;};
};
