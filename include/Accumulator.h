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


