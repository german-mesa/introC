#include <string>

class Person
{
    private:
        std::string firstName;
        std::string lastName;
        int arbitraryNumber;

    public:
        Person()=default;
        ~Person();
        Person(std::string first, std::string last, int arbitraryNumber);
        std::string getName();

};