#include <string>
using std::string;

#include "Person.h"

Person::Person(string first, string last, int arbitrary) : firstName(first), lastName(last), arbitraryNumber(arbitrary)
{

}

string Person::getName()
{
    return firstName + " " + lastName;
}