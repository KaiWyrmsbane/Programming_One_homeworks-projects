// Programming_One_HW1_allInOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James VanMeter
// jamesvanmeter1219@gmail.com
#include <iostream>
//math library
#include <cmath>
using namespace std;
/*
 We want a program that will allow the user to see all 
 the problems in homework one as many times as they want
 that way they can test multiple scenarios but they won't
 have to exit the program.
*/
void problemOne() {
	int NumberOne = 0;
	int NumberTwo = 0;
	int NumberThree = 0;
	int Integer = 0;
	cout << "Input three different integers: ";
	cin >> NumberOne;
	cin >> NumberTwo;
	cin >> NumberThree;
	Integer = NumberOne + NumberTwo + NumberThree;
	cout << "Sum is: " << Integer << endl;
	Integer = (NumberOne + NumberTwo + NumberThree) / 3;
	cout << "Average is: " << Integer << endl;
	Integer = NumberOne * NumberTwo * NumberThree;
	cout << "Product is: " << Integer << endl;
	if ((NumberOne < NumberTwo) && (NumberOne < NumberThree)) {
		cout << "Smallest is: " << NumberOne << endl;
	}
	else if ((NumberTwo < NumberOne) && (NumberTwo < NumberThree)) {
		cout << "Smallest is: " << NumberTwo << endl;
	}
	else {
		cout << "Smallest is: " << NumberThree << endl;
	}
	if ((NumberOne > NumberTwo) && (NumberOne > NumberThree)) {
		cout << "Largest is: " << NumberOne << endl;
	}
	else if ((NumberTwo > NumberOne) && (NumberTwo > NumberThree)) {
		cout << "Largest is: " << NumberTwo << endl;
	}
	else {
		cout << "Largest is: " << NumberThree << endl;
	}
 }
void problemTwo() {
	float circleRadius = 0;
	float circleDiameter = 0;
	float circleCircumference = 0;
	float circleArea = 0;
	cout << "Input the radius of a circle: ";
	cin >> circleRadius;
	circleDiameter = circleRadius * 2;
	cout << "Diameter is " << circleDiameter << endl;
	circleCircumference = 2 * 3.14159 * circleRadius;
	cout << "Circumderence is " << circleCircumference << endl;
	//using the pow(myNumber, powNumber) from the cmath library
	circleArea = 3.14159 * pow(circleRadius, 2);
	cout << "Area is " << circleArea << endl;
 }
void problemThree() {
	int number = 0;
	cout << "Input a number: ";
	cin >> number;
	if (number % 2) {
		cout << number << " is odd" << endl;
	}
	else {
		cout << number << " is even" << endl;
	}
 }
void problemFour() {
	int fiveDigitNumber = 0;
	int digitOne = 0;
	int digitTwo = 0;
	int digitThree = 0;
	int digitFour = 0;
	int digitFive = 0;
	cout << "Input 5-digit number: ";
	cin >> fiveDigitNumber;
	digitOne = (fiveDigitNumber % 100000) / 10000;
	digitTwo = (fiveDigitNumber % 10000) / 1000;
	digitThree = (fiveDigitNumber % 1000) / 100;
	digitFour = (fiveDigitNumber % 100) / 10;
	digitFive = (fiveDigitNumber % 10);
	cout << digitOne << "   " << digitTwo << "   " << digitThree << "   " << digitFour << "   " << digitFive << endl;
 }
void problemFive() {
	float milesPerGallon = 0;
	float milesDriven = 0;
	float gallonsUsed = 0;
	float tempMilesDriven = 0;
	float tempGallonsUsed = 0;
	cout << "Enter Miles driven (-1 to quit): ";
	cin >> milesDriven;
	while (milesDriven != -1){
		cout << "Enter gallons used: ";
		cin >> gallonsUsed;
		milesPerGallon = milesDriven / gallonsUsed;
		cout << "MPG this trip: " << milesPerGallon << endl;
		tempMilesDriven += milesDriven;
		tempGallonsUsed += gallonsUsed;
		milesPerGallon = tempMilesDriven / tempGallonsUsed;
		cout << "Total MPG: " << milesPerGallon << endl;
		cout << "Enter Miles driven (-1 to quit): ";
		cin >> milesDriven;
	}
 }
void problemSix() {
	float milesDriven = 0;
	float gallonCost = 0;
	float averageMPG = 0;
	float fees = 0;
	float tolls = 0;
	float tempMPG = 0;
	float total = 0;
	cout << "Input total miles driven per day: ";
	cin >> milesDriven;
	cout << "Input cost per gallon of gasoline in dollars: ";
	cin >> gallonCost;
	cout << "Input average miles per gallon: ";
	cin >> averageMPG;
	cout << "Input parking fees per day in dollars: ";
	cin >> fees;
	cout << "Input tolls per day: ";
	cin >> tolls;
	tempMPG = ((milesDriven / averageMPG) * gallonCost) + fees + tolls;
	cout << "Total cost: $" << tempMPG << endl;
 }
void problemSeven() {
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

int main()
{
	int answer = 0;
	cout << "Would you like to see a problem in homework 1 (-1 to quit): ";
	cin >> answer;
	while (answer != -1) {
		int answerTwo = 0;
		cout << "Which problem would you like to see (select one of the following 1-7): ";
		cin >> answerTwo;
		switch (answerTwo)
		{
		case 1:
			problemOne();
			break;
		case 2:
			problemTwo();
			break;
		case 3:
			problemThree();
			break;
		case 4:
			problemFour();
			break;
		case 5:
			problemFive();
			break;
		case 6:
			problemSix();
			break;
		case 7:
			problemSeven();
			break;
		default:
			cerr << "You've chosen an invalid option!!!" << endl;
			break;
		}
		cout << "would you like to see another problem in homework 1 (-1 to quit): ";
		cin >> answer;
	}
}
