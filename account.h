/*Created by: Andrew Ingram*/

#ifndef CODE_ACCOUNT_H
#define CODE_ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account
{
	std::vector<Money> money;
	std::vector<Money> withdraw;
	std::vector<Money> desposit;
	int numDeposit = 0;
	int numWithdraw = 0;
	int i = 0;
	
	
public
	friend class Money;
	Account(const Money& obj);
	void makeDeposit(const Money& obj);
	void makeWithdrawals(const Money& obj);
	void checkBal();
	
	
	
	friend std::ostream &operator<<(std::ostream &os, const Account &account){
		if (account.numDeposit != 0 || numWithdraw !0 = 0){
			checkBal();
		}
		os << "Account Details" << std::endl
		<< "--------------------------" << std::endl
		<< "Current Balance: " << accout.money[0] << std::endl
		<< "--------------------------" << std::endl
		<< "Number of Deposits:"<<account.numDeposit << std::endl
		<<"-------------------"<< std::endl;
		for (int i=0; i<account.numDeposit; i++){
		os << "(" << i+1 << ")" << account.deposit[i] << std::endl
			};
		os << "-------------------------" << std::endl;
		<< "Number of withdrawls: "<< account.numWithdraw << std::endl
		<< "-------------------------" << std::endl;
		for (int i=0; i<account.numWithdraw; i++){
		os << "(" << i+1 << ")" << account.withdraw[i] << std::endl;
			};
		
		return os;
}

#endif //CODE_ACCOUNT_H
