/* Created by: Andrew Ingram*/

#include "account.h"

Account::Account(const Money& obj){
	money.push_back(obj);
	
	/*if(deposit[l] < deposit[obj]){
		money[obj] = money[obj] + deposit[obj]
		deposit[obj] = 0;
		numDeposit = 0;
	}*/
	
}

void Account::makeDeposit(const Money& obj){
	deposit.push_back(obj);
	numDeposit++;

	//money.at(0) = money.at(0) + obj;

	//Money& l(0,0);
	//deposit.push_back(l);

	balUpdated = false;
}

void Account::makeWithdrawals(const Money& obj){
	withdraw.push_back(obj);
	numWithdraw++;

	//money.at(0) = money.at(0) - obj;
	//Money& l(0,0);
	//withdraw.push_back(l);

	balUpdated = false;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
	/*
	if (account.numDeposit != 0 || account.numWithdraw != 0){
		checkBal();
	}
	*/
	if (account.balUpdated == false)
	{
		account.checkBal();
	}

	os << "Account Details" << std::endl
	<< "--------------------------" << std::endl
	<< "Current Balance: " <<  account.money[0] << std::endl
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


void Account::checkBal()
{

	for(i=0; numDeposit != i; i++){
		money.at(0) = (money.at(0) + deposit.at(i));
	}
	//numDeposit = 0;s
	
	for (i=0; numWithdraw != i; i++){
		money.at(0) = money.at(0) - withdraw.at(i);
	}
	//numWithdraw = 0;
}
