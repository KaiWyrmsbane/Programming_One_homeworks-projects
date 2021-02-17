// Programming_One_HW1P6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James VanMeter
// jamesvanmter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
	/*
  create a program that calculates daily driving cost, the
  application should input the following info and display
  the user's cost per day of driving to work.
    */

	float milesPerDay = 0;
	float costPerGallon = 0;
	float averageMPG = 0;
	float parkingFees = 0;
	float tollsPerDay = 0;
	float totalCostPerDay = 0;

	cout << "Enter miles driven per day: ";
	cin >> milesPerDay;
	cout << "Enter cost per gallon: ";
	cin >> costPerGallon;
	cout << "Enter average Miles per Gallon: ";
	cin >> averageMPG;
	cout << "Enter total amount spent in parking fees: ";
	cin >> parkingFees;
	cout << "Enter tolls per day: ";
	cin >> tollsPerDay;
	milesPerDay = (milesPerDay / averageMPG) * costPerGallon;
	totalCostPerDay = milesPerDay + parkingFees + tollsPerDay;
	cout << "Total cost: " << totalCostPerDay << endl;

}

