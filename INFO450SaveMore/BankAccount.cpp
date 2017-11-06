#include "stdafx.h"
#include <string>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount()
{
	acctNumber = 0;
	interestRate = 0;
	balance = 0;

}

BankAccount::BankAccount(int a, double i, double b)
{
	acctNumber = a;
	interestRate = i;
	balance = b;
}


