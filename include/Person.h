#pragma once
#include <string>

#include "Resource.h"

class Person
{
    private:
        std::string firstName;
        std::string lastName;
        int arbitraryNumber;

        Resource *pResource;

        friend bool operator<(int otherPersonNumber, Person const& otherPerson);

    public:
        Person()=default;
        Person(std::string first, std::string last, int arbitraryNumber);
        Person(Person const& otherPerson);
        ~Person();

        std::string getName() const;
        
        void setFirstName(std::string newFirstName) { firstName = newFirstName; };

        int getNumber() const {return arbitraryNumber;};
        void setNumber(int number) { arbitraryNumber = number;};

        void addResource();
        
        Person& operator=(const Person& otherPerson);
        
        bool operator<(Person const& otherPerson) const;
        bool operator<(int otherPersonNumber) const;
};

bool operator<(int otherPersonNumber, Person const& otherPerson);