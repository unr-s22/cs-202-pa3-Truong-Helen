/*
Created by: Andrew Ingram
Collaborated on by: Helen Truong
*/

#include "Money.h"
#include "Account.h"

int main() {

	// initial balance
	Money m(300,23);
	Account account(m);
	std::cout << account << std::endl;
	
	// deposit
	Money a(200,00);
	Money b(300,24);
	Money c(501,22);
	account.makeDeposit(a);
	account.makeDeposit(b);
	account.makeDeposit(c);
	std::cout << account << std::endl;
	
	// withdraw
	Money d(300,10);
	Money f(201,34);
	account.makeWithdrawals(d);
	account.makeWithdrawals(f);
	std::cout << account << std::endl;


	// relational operators

	// <
	if (a<b)
	{
		std::cout << a << " is less than " << b << std::endl;
	}
	else
	{
		std::cout << a << " is greater than " << b << std::endl;
	}

	// >
	if (c>b)
	{
		std::cout << c << " is greater than " << b << std::endl;
	}
	else
	{
		std::cout << c << " is less than " << b << std::endl;
	}

	// >=
	if (m>=b)
	{
		std::cout << m << " is greater than or equal to " << b << std::endl;
	}
	else
	{
		std::cout << m << " is less than " << b << std::endl;
	}

	// <=
	if (a<=b)
	{
		std::cout << a << " is less than or equal to " << b << std::endl;
	}
	else
	{
		std::cout << a << " is greater than " << b << std::endl;
	}

	// !=
	if (a!=b)
	{
		std::cout << a << " is not equal to " << b << std::endl;
	}
	else
	{
		std::cout << a << " is equal to  " << b << std::endl;
	}

	// ==
	Money n(300,23);
	if (m==n)
	{
		std::cout << m << " is equal to " << n << std::endl;
	}
	else
	{
		std::cout << m << " is not equal to  " << n << std::endl;
	}
	
	
	return 0;
}
		
