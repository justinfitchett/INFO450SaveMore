// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BankAccount.h"
#include "Checking.h"
#include "Savings.h"
#include "Certificate.h"
#include "stdio.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string name;
	string answer = "";
	BankAccount *pBA = NULL;

	cout << "Welcome to the Save More Bank Interface Program.\n";

	cout << "Please enter your name: "; // Prompts user to ask for name.
	cin >> name;

	while (name != "") 
	{
		cout << "\nPlease choose which account that you want to view:\nSelect (c) for Checking, (s) for Savings, (cd) for Certificate of Deposit, or (e) to exit the program.  ";
		getline(cin, answer);

		if (answer == "c" || answer == "C")  // Displays input for checking 
		{
			pBA = new Checking();
			pBA->GetInput();
			pBA->Display();
		}
		else if (answer == "s" || answer == "S") //Displays input for savings
		{
			pBA = new Savings();
			pBA->GetInput();
			pBA->Display();
		}
		else if (answer == "cd" || answer == "CD") //Displays input for cd
		{
			pBA = new Certificate();
			pBA->GetInput();
			pBA->Display();
		}
		else if (answer == "e" || answer == "E")
		{
			cout << "\nThank you for choosing Save More!!!\n \nGoodbye :)" << endl;
		}
	}

	return 0;
}