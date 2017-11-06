#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Checking.h"

using namespace std;

Checking::Checking() : BankAccount()
{
	OrderChecks = 0;
}

Checking::Checking(int a, double i, double b, int c) : BankAccount(a, i, b)
{
	OrderChecks = c;
}

void Checking::Display()
{

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