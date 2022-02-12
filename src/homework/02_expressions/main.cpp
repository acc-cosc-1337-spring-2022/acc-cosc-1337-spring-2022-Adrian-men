//write include statements
#include "expressions.h"
#include<iostream>


//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;
	cin >> meal_amount;
	double get_sales_tax_amount(double meal_amount);
	{
		return tax_amount;
	}
	cin >> tip_rate;
	double get_tip_amount(double meal_account, double tip_rate);
	{
		return tip_amount;
	}

	{
	double tip_amount, tax_amount, meal_amount;
	cout<<"Enter three numbers to add\n";
	cin>>tip_amount>> tax_amount>> meal_amount;

	double total = tip_amount + tax_amount + meal_amount;

	cout<<"\n the total is: " << total;
}
//meal amount: 20
//sales tax: 1.35
//tip amount: 3
//total: 24.35
	

	return 0;
}
