#include "atm.h"
#include <iostream>
#include <time.h>

using std::cout; using std::cin;

int main()
{

	srand (time(NULL));
	int menu_option;
	char cont;

	ATM atm;

	do
	{
		std::cout<<"\nACC Bank\n";
		std::cout<<"1-balance\n ";
		std::cout<<"2-deposit\n";
		std::cout<<"3-withdraw\n";
		std::cin>>menu_option;

		switch(static_cast<atm_menu>(menu_option-1))
		{
			case atm_menu::balance:
				atm.display_balance();
				break;
			case atm_menu::deposit:
				atm.make_deposit();
				break;
			case atm_menu::withdraw:
				atm.make_withdraw();
				break;
			default:
				std::cout<<"invalid selection";

		
		}
			std::cout<<"Continue type y \n";
			std::cin>>cont;
	}while(cont == 'y' || cont == 'Y');












	/*CheckingAccount checking;
	cout<<checking.get_balance();

	BankAccount account;
	display_balance(account);
	friend_display_balance(account);
	cout<<account;

	cin>>account;
	cout<<account;*/

	/*BankAccount account;
	cout<<"Account: "<< account.get_balance()<<"\n";

	BankAccount account1(100);
	cout<<"Account1 "<<account1.get_balance()<<"\n";

	display_balance(account);

	BankAccount account3 = get_account();
	display_balance(account3);*/

	return 0;
}