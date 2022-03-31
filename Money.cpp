#include "Money.h"

Money::Money(int dollars, int cents):m_dollars(dollars),m_cents(cents)
{

}

Money::Money()
{

}
    
bool Money::operator<(const Money& money)
{
    if (m_dollars < money.getDollars())
    {
        return true;
    }
    else if(m_dollars == money.getDollars() && m_cents < money.getCents())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator>(const Money& money)
{
    if (m_dollars > money.getDollars())
    {
        return true;
    }
    else if(m_dollars == money.getDollars() && m_cents > money.getCents())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator<=(const Money& money)
{
    if ((m_dollars == money.getDollars() && m_cents <= money.getCents()) || (m_dollars < money.getDollars()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator>=(const Money& money)
{
    if ((m_dollars == money.getDollars() && m_cents >= money.getCents()) || (m_dollars > money.getDollars()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator!=(const Money& money)
{
    if ((m_dollars != money.getDollars()) || (m_cents != money.getCents()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator==(const Money& money)
{
    return ((m_dollars == money.getDollars()) && (m_cents == money.getCents()));
}

Money Money::operator+(const Money& money) const
{
    //int dollars = m_dollars + money.getDollars();
    //int cents = m_cents + money.getCents();

    int dollars = m_dollars + money.getDollars();
    int cents = m_cents + money.getCents();

    return Money(dollars, cents);
}

Money Money::operator-(const Money& money) const
{
    int dollars = m_dollars - money.getDollars();
    int cents = m_cents - money.getCents();

    return Money(dollars, cents);
}

std::ostream &operator<<(std::ostream &out, const Money &money)
{
   out << "$" << money.getDollars() << "." << money.getCents();
   return out;
}

int Money::getDollars() const
{
    return m_dollars;
}

int Money::getCents() const
{
    return m_cents;
}

void Money::setDollars(int dollars)
{
    m_dollars = dollars;
}

void Money::setCents(int cents)
{
    m_cents = cents;
}