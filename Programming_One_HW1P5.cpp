// Programming_One_HW1P5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
	/*
	 Problem 5 of homework 1 wants a program that will obtain
	 mileage of a users auotmobile. Using a while statments we
	 want to keep track of multiple trips that the user goes on.
	 The user must input miles driven, and gallons used for each
	 trip.
	 formula: milesDriven / gallonsUsed = mileage
	 total MPG is the mileage for all the trips up to that point
	*/
	float perTripMPG = 0;
	float gallonsUsed = 0;
	float milesDriven = 0;
	//temp vars
	float tempGallonsUsed = 0;
	float tempMilesDriven = 0;
	float tempMPG = 0;
	cout << "Enter miles driven (-1 to quit): ";
	cin >> milesDriven;
	//keeps milesDriven from going negative
	if (milesDriven < -1) {
		cerr << "ERROR" << endl;
	}
	while (milesDriven != -1) {
		cout << "Enter gallons used: ";
		cin >> gallonsUsed;
		perTripMPG = milesDriven / gallonsUsed;
		cout << "MPG this trip: " << perTripMPG << endl;
		tempGallonsUsed += gallonsUsed;
		tempMilesDriven += milesDriven;
		tempMPG = tempMilesDriven / tempGallonsUsed;
		cout << "Total MPG: " << tempMPG << endl;
		cout << "Enter miles driven (-1 to quit): ";
		cin >> milesDriven;
	}

}
