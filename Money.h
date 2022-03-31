#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money
{
private:
    int m_dollars = 0;
    int m_cents = 0;
public:
    Money(int dollars, int cents);
    Money();
    
    bool operator<(const Money& money);
    bool operator>(const Money& money);
    bool operator<=(const Money& money);
    bool operator>=(const Money& money);
    bool operator!=(const Money& money);
    bool operator==(const Money& money);
    Money operator+(const Money& money) const;
    Money operator-(const Money& money) const;
    friend std::ostream &operator<<(std::ostream &out, const Money &money);

    int getDollars() const;
    int getCents() const;
    void setDollars(int dollars);
    void setCents(int cents);

};

#endif 