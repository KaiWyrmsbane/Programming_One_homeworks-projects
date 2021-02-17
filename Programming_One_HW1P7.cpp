// Programming_One_HW1P7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James VanMeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
	int accountNumber = 0;
	float balance = 0;
	float charge = 0;
	float credit = 0;
	float creditLimit = 0;
	cout << "Enter account Number (-1 to quit): ";
	cin >> accountNumber;

	while (accountNumber != -1) {
		cout << "Enter beginning balance: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charge;
		cout << "Enter total credits: ";
		cin >> credit;

		balance = (balance + charge) - credit;

		cout << "Enter credit limit: ";
		cin >> creditLimit;

		if (balance > creditLimit) {
			cout << "Credit limit: " << creditLimit << " New balance is: " << balance << " credit limit exceeded!" << endl;
		}
		else if (balance < creditLimit) {
			cout << "Credit limit: " << creditLimit << " New balance is: " << balance << endl;
		}
		else if (balance == creditLimit) {
			cout << "Credit limit: " << creditLimit << " Balance: " << balance << " you're at the limit." << endl;
		}

		cout << "Enter account number (-1 to quit): ";
		cin >> accountNumber;
	}
}
