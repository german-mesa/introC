#pragma once

#include <string>
using std::string;

class Transaction
{
    private:
        int amount;
        string type;

    public:
        Transaction(int amount, string type);
        string Report();
};
