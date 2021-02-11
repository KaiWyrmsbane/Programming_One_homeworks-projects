// Programming_One_HW1P3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
	/*
	 Problem 3 in Homework 1 wants a program that will take any
	 integer the user inputs and tell whether its odd or if its
	 even.
	*/

	int userNumber = 0;

	cout << "Input a number: ";
	cin >> userNumber;

	if (userNumber % 2) {
		cout << userNumber << " is odd" << endl;
	}
	else {
		cout << userNumber << " is even" << endl;
	}

}

