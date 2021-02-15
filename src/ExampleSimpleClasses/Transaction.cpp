#include "Transaction.h"

using std::string;
using std::to_string;

Transaction::Transaction(int amount, string type): amount(amount), type(type) 
{
}

string Transaction::Report()
{
    string report;

    report += " ";
    report += type;
    report += " ";    
    report += to_string(amount);

    return report;
}