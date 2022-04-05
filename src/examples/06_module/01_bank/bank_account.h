//bank_account.h
#include <stdlib.h>
#include <iostream>

//Header Guards
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H


class BankAccount 
{
/*friend void friend_display_blanace(BankAccount& account);
friend std::iostream& operator<<(std::iostream& out, const BankAccount &);
friend std::istream& operator>>(std::istream& in, BankAccount& account)*/
public:
    BankAccount(){balance = get_balance_from_db();}//Default sunthesized constructor -- creates it by default ONLY IF WE DON"T HAVE ANY OTHER CONSTRUCTORS!!
    BankAccount(int b) : balance(b){/* empty function code*/}
    int get_balance()const;//telling c++ we will provide function code later
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance;
    int get_balance_from_db();

};

#endif

//free function 
void display_balance(const BankAccount& account);//by value/copy
BankAccount get_account();