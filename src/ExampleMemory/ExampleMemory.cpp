#include <iostream>
using std::cout;
using std::endl;

#include "Resource.h"


int main()
{
    {
        Resource oLocal("Local resource");
        cout << oLocal.getName() << endl;
    }

    Resource* pResource = new Resource("Heap resource");
    cout << pResource->getName() << endl;
    delete pResource;

    return 0;
}