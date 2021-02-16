#include <vector>
using std::vector;

#include <string>
using std::string;

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

        int getBalance() const {return balance; }

        vector<string> getReport() const;
};