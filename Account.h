/*
Created by: Andrew Ingram
Collaborated on by: Helen Truong
*/

#ifndef CODE_ACCOUNT_H
#define CODE_ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account : public Money
{
	std::vector<Money> money;
	std::vector<Money> withdraw;
	std::vector<Money> deposit;
	int numDeposit = 0;
	int numWithdraw = 0;
	int balUpdated = true;
	int i = 0;
	
	
public:
	Account(const Money& obj);
	void makeDeposit(const Money& obj);
	void makeWithdrawals(const Money& obj);
	
	friend std::ostream &operator<<(std::ostream &os, const Account &account);
};

#endif //CODE_ACCOUNT_H
