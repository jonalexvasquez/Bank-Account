/*
@author Jonathan Vasquez
@date 2/5/2016
@Account.h
*/


class Account{
	
	public:
			
			Account();///default constructor, usually given already 
			Account(double accountBal);///constructor with parameter
			~Account(){ }// frees memory after program finishes
			void credit(double amount);//////should ensure it is positive
			void debit(double amount);////should ensure it is positive, if amount is more than balnce print error Message
			double getBalance();///return accountBal
			double addAccountBalance(Account *first,Account *second);////returns total
			
	
	
	
	private:
		double accountBal;///account Balance
		double amount;////amount given or taken
	
};
