#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::make_shared;
using std::shared_ptr;

#include "Tweeter.h"

int main()
{
    Person German("German", "Mesa", 123);
    Person& rGerman = German;
    Person* pGerman = &German;

    Tweeter GermanMesaTweeter("German", "Table", 456, "@GermanTable");
    Tweeter& rGermanMesaTweeter = GermanMesaTweeter;
    
    Person& rPersonGermanMesaTweeter = GermanMesaTweeter;
    Person* pPersonGermanMesaTweeter = &GermanMesaTweeter;

    cout << "German - " << German.getName() << endl;
    cout << "rGerman - " << rGerman.getName() << endl;
    cout << "pGerman - " << pGerman->getName() << endl;

    cout << "GermanMesaTweeter - " << GermanMesaTweeter.getName() << endl;
    cout << "rGermanMesaTweeter - " << rGermanMesaTweeter.getName() << endl;

    cout << "rPersonGermanMesaTweeter - " << rPersonGermanMesaTweeter.getName() << endl;
    cout << "pPersonGermanMesaTweeter - " << pPersonGermanMesaTweeter->getName() << endl;


    shared_ptr<Person> spPerson = make_shared<Tweeter>("Someone", "Else", 456, "@SomeoneElse");
    cout << "spPerson - " << spPerson->getName() << endl;
    
    German = GermanMesaTweeter;
    cout << "German - " << German.getName() << endl;
    
    return 0;
}