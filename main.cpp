/*Created by Andrew Ingram*/

#include "Money.h"
#include "account.h"

int main() {


	Money m(300,23);
	Account account(m);
	
	std::cout << account << std::endl;
	
	Money a(200,00);
	Money b(300,24);
	Money c(501,22);
	account.makeDeposit(a);
	account.makeDeposit(b);
	account.makeDeposit(c);
	std::cout << account << std::endl;
	Money d(300,10);
	Money f(201,34);
	account.makeWithdrawals(d);
	account.makeWithdrawals(f);
	
	
	
	std::cout << account << std::endl;
	
	
	
	return 0;
}
		
