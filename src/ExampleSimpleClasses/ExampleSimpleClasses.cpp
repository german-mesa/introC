#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

int main()
{
    Account accountING;

    accountING.postDeposit(90);
    cout << "After depositing $90, balance is " << accountING.getBalance() << endl;
    for(auto s:accountING.getReport())
    {
        cout << s << endl;
    }

    accountING.postWithraw(50);
    if(accountING.postWithraw(100)) 
    {
        cout << "Second withdraw $100" << endl;
    }
    cout << "After withdrawing $50 then $100 balance is " << accountING.getBalance() << endl;
    for(auto s:accountING.getReport())
    {
        cout << s << endl;
    }

    return 0;
}
