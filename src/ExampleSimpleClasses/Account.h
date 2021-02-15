#include <vector>
#include <string>

using std::string;
using std::vector;

#include "Transaction.h"

class Account
{
    private:
        int balance;
        int limit;
        vector<Transaction> log;

    public:
        Account(/* args */);

        bool postDeposit(int amount);
        bool postWithraw(int amount);

        int getBalance() {return balance; }

        vector<string> getReport();
};