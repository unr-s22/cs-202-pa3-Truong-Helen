/*
Created by: Andrew Ingram
Collaborated on by: Helen Truong
*/

#include "Account.h"

Account::Account(const Money& obj){
	money.push_back(obj);

}

void Account::makeDeposit(const Money& obj){
	deposit.push_back(obj);
	numDeposit++;

	balUpdated = false;
}

void Account::makeWithdrawals(const Money& obj){
	withdraw.push_back(obj);
	numWithdraw++;

	balUpdated = false;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{

	Money n((account.money[0].getDollars()), (account.money[0].getCents()));
	if (account.balUpdated == false)
	{
		for(int i=0; account.numDeposit != i; i++)
		{
			n = n + (account.deposit[i]);
		}

		for (int i=0; account.numWithdraw != i; i++)
		{
			n = n - (account.withdraw[i]);
		}
	}

	os << "Account Details" << std::endl
	<< "--------------------------" << std::endl
	<< "Current Balance: " <<  n << std::endl
	<< "--------------------------" << std::endl
	<< "Number of Deposits: "<< account.numDeposit << std::endl
	<<"-------------------"<< std::endl;

	for (int i=0; i<account.numDeposit; i++)
	{
		os << "(" << i+1 << ")" << account.deposit[i] << std::endl;
	}

	os << "-------------------------" << std::endl 
	<< "Number of Withdrawls: " << account.numWithdraw << std::endl
	<< "-------------------------" << std::endl;
	
	for (int i=0; i<account.numWithdraw; i++)
	{
		os << "(" << i+1 << ")" << account.withdraw[i] << std::endl;
	}
	
	return os;
}