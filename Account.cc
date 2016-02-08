/*
@author Jonathan Vasquez
@date 2/5/2016
@Account.cc
*/
#include <iostream>
#include <stdlib.h>
#include "Account.h"

using namespace std;

	/*
	Default Constructor
	*/
	Account::Account()
	{
		accountBal=0;	
	}
	/*
	Default Constructor with Parameter @accountBalance
	*/
	Account::Account(double accountBalance)
	{
		if(accountBalance<0)///makes sure input is inbounds(>0)
		{
			cout<<"ERROR, BALANCE MUST BE HIGHER THAN 0. SETTING TO 0";
			Account();	
		}
		accountBal=accountBalance;	
	}
	/*
	Adds a deposited user amount into @accountBal
	*/
	void Account::credit(double moneyAmount)
	{
		if(moneyAmount<0)///makes sure input is inbounds(>0)
		{
			cout<<"ERROR, CREDIT AMOUNT MUST BE HIGHER THAN 0";
			accountBal+=0;		
		}		
		accountBal+=moneyAmount;	
	}
	/*
	withdraws an amount from @accountBal
	*/
	void Account::debit(double moneyAmount)
	{
		
		if(moneyAmount<0)///makes sure input is inbounds(>0)
		{
			cout<<"ERROR, DEBIT AMOUNT MUST BE HIGHER THAN 0";		
			accountBal-=0;
		}	
		if(moneyAmount<=accountBal && moneyAmount>=0)///inbounds check
		{
			cout<<"Success!\n";	
			accountBal-=moneyAmount;
				
		}
		else if(moneyAmount>=accountBal)///inbounds check
		{
			cout<<"Error debit exceeds account balance!";	
			accountBal-=0;
		}

	}
	/*
		returns account balance 
	*/
	double Account::getBalance()
	{
			return accountBal;///returns account's balance
	}
	/*
	adds two account objects and returns their combined balance
	*/
	double Account::addAccountBalance(Account *first,Account *second)
	{
			
		return first->getBalance()+second->getBalance();///adds two accounts and returns their balance
		
	}
	
///Destructor initialized in header file
