#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Tweeter.h"
#include "Resource.h"

int main()
{
    Tweeter oTweeter("German", "Table", 456, "@GermanTable");
    Person* pPerson = &oTweeter;
    Tweeter* pTweeter = static_cast<Tweeter*>(pPerson);

    return 0;
}