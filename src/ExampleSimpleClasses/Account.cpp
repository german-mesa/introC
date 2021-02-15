#include "Account.h"

using std::string;
using std::vector;
using std::to_string;

Account::Account(): balance(0), limit(100) {}

vector<string> Account::getReport()
{
    vector<string> report;

    report.push_back("------------------");
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");

    for(auto t:log)
    {
        report.push_back(t.Report());
    }
    
    report.push_back("------------------");
    return report;
}

bool Account::postDeposit(int amount)
{
    if (amount <= 0)
    {
        return false;
    }

    balance += amount;
    balance -= 1;

    log.push_back(Transaction{ amount, "Deposit"});
    log.push_back(Transaction{ 1, "Service Charge"});
    return true;
}

bool Account::postWithraw(int amount)
{
    if (amount <= 0)
    {
        return false;
    }

    if ((balance + limit) >= amount + 1)
    {
        balance -= amount;
        balance -= 1;

        log.push_back(Transaction{ amount, "Withdraw"});
        log.push_back(Transaction{ 1, "Service Charge"});
        return true;
    }
    
    return false;
}