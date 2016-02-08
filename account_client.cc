/*
@author Jonathan Vasquez
@date 2/5/2016
@account_client.cc
*/
#include <iostream>
#include <stdlib.h>
#include "Account.h"

using namespace std;

int main()
{
	
	double user_debit,user_debit2;
	double user_credit,user_credit2;
	/*
	object instantiations
	*/
	Account *account1;
	Account *account2;
	account1=new Account();
	account2=new Account(100);
	
	/*
	Tests
	*/
	cout<<"Enter a withdrawal amount for account1, enter $0 if no amount to be added: $";
	cin>>user_debit;
	account1->debit(user_debit);
	cout<<"\n";
	
	cout<<"Enter a withdrawal amount for account2, enter $0 if no amount to be added: $";
	cin>>user_debit2;
	account2->debit(user_debit2);
	cout<<"\n";
	
	cout<<"Your new account1 balance is:$";
	cout<<account1->getBalance();
	cout<<"\n";
	
	cout<<"Your new account2 balance is:$";
	cout<<account2->getBalance();
	cout<<"\n";
	///////////////////////////////////////
cout<<"Enter a deposit amount for account1, enter $0 if no amount to be added: $";
	cin>>user_credit;
	account1->credit(user_credit);
	cout<<"\n";
	
	cout<<"Enter a deposit amount for account2, enter $0 if no amount to be added: $";
	cin>>user_credit2;
	account2->credit(user_credit2);
	cout<<"\n";
	
	cout<<"Your new account1 balance is:$";
	cout<<account1->getBalance();
	cout<<"\n";
	
	cout<<"Your new account2 balance is:$";
	cout<<account2->getBalance();
	cout<<"\n";
	cout<<"Your combined account balance is:$";
	cout<<account1->addAccountBalance(account1,account2)<<"\n";
	
	
	delete account1;
	delete account2;
	
	return 0;
}