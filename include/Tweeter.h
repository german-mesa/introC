#pragma once
#include <string>
#include "Person.h"


class Tweeter : public Person
{
    private:
        std::string tweeterHandle;

    public:
        Tweeter(std::string first, std::string last, int arbitraryNumber, std::string handle);
        ~Tweeter();
};