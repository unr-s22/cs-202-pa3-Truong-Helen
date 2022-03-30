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
	//Money& l(0,0);
	//deposit.push_back(l);

	//balUpdated = false;
}

void Account::makeWithdrawals(const Money& obj){
	withdraw.push_back(obj);
	numWithdraw++;
	//Money& l(0,0);
	//withdraw.push_back(l);

	//balUpdated = false;
}

void Account::checkBal(){

	for(i=0;numDeposit != i; i++){
		money[0] = money [0] + deposit[i];
	}
	numDeposit = 0;
	
	for (i=0; numWithdraw != i; i++){
		money[0] = money [0] - withdraw[i];
	}
	numWithdraw = 0;
}
	