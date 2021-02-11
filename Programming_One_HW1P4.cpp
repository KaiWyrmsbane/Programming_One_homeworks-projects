// Programming_One_HW1P4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
  /*
   Problem 4 of homework 1 wants a program that will take any
   5-digit integer that the user inputs and separates each digit
   of the integer with 3 spaces in between them
  */
	int userinteger = 0;
	cout << "Input a 5-digit number: ";
	cin >> userinteger;

	//separate them into digits
	/*
	 54354 % 10 = 5435.4 we have a remainder of .4 we only need 
		the remainder for the first digit
	 54354 % 100 = 543.54 we have a remainder of .54, 54/10=5.4 
		this will seperate the 5 from the other digits, we needed 
		to divide that way we can seperate the 5 from the 4.
	*/
	int digitOne = userinteger % 10;
	int digitTwo = (userinteger % 100)/10;
	int digitThree = (userinteger % 1000)/100;
	int digitFour = (userinteger % 10000) / 1000;
	int digitFive = (userinteger % 100000) / 10000;

	cout << digitFive << "   " << digitFour << "   " << digitThree << "   " << digitTwo << "   " << digitOne << endl;
	
}
