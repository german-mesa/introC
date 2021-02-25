#include <iostream>
using std::cout;
using std::endl;

// #include "Person.h"
#include "Tweeter.h"

int main()
{
    // Person oPersonDefault;

    Person oPerson("German", "Mesa", 123);
    cout << oPerson.getName() << endl;
    {
        Tweeter oTweeter("German", "Mesa", 123, "@German");
        cout << oTweeter.getName() << endl;
    }

    return 0;
}