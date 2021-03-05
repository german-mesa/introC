#pragma once
#include <string>

class Person
{
    private:
        std::string firstName;
        std::string lastName;
        int arbitraryNumber;

        friend bool operator<(int otherPersonNumber, Person const& otherPerson);

    public:
        Person()=default;
        ~Person();
        Person(std::string first, std::string last, int arbitraryNumber);
        
        std::string getName() const;
        
        int getNumber() const {return arbitraryNumber;};
        void setNumber(int number) { arbitraryNumber = number;};

        bool operator<(Person const& otherPerson) const;
        bool operator<(int otherPersonNumber) const;
};

bool operator<(int otherPersonNumber, Person const& otherPerson);