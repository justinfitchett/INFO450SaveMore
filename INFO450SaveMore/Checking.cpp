#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Checking.h"

using namespace std;

//Constructors
Checking::Checking() : BankAccount()
{
	OrderChecks = 0; //Gets checks 
}

Checking::Checking(int a, double i, double b, int c) : BankAccount(a, i, b)
{
	OrderChecks = c;
}

void Checking::Display()
{
	cout << "" << endl;
	cout << "----Checking Account Info----" << endl;
	cout << "Checking Account Number: " << acctNumber << endl;
	cout << "Checking Account Balance: $ " << balance << endl;
	cout << "Book of Checks: " << OrderChecks << endl;
	cout << "-------------------------------" << endl;

}

void Checking::GetInput()
{
	acctNumber = 7001;
	balance = 6000;
	interestRate = 0.2;
	OrderChecks = 15;

}

void Checking::OrderingChecks()
{
	cout << "Checks cost $15. Payment has been charged to your checking account. \n" << endl;

	balance -= 15;

	BalanceCheck();
}

//checks to see if balance is over 500, charges fee otherwise
void Checking::BalanceCheck()
{
	if (balance < 500)
	{
		balance -= 5;

		cout << "Your account has fallen below $500. A penalty fee of $5 has been deducted from your account.\n";
	}
}