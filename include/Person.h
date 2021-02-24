#include <string>
using std::string;

class Person
{
    private:
        string firstName;
        string lastName;
        int arbitraryNumber;

    public:
        Person(string first, string last, int arbitraryNumber);
        string getName();

};