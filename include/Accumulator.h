#include "Person.h"

// Template class
template <class T>
class Accumulator
{
private:
    T total;

public:
    Accumulator(T start): total(start) {};

    T operator+=(T const& t){ return total = total + t; };
    
    T getTotal() const {return total; };
};


// Template specialization
template <>
class Accumulator<Person>
{
private:
    int total;

public:
    Accumulator(int start): total(start) {};

    int operator+=(Person const& t){ return total = total + t.getNumber(); };
    
    int getTotal() const {return total; }
};
