// Programming_One_HW2P3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
	int payCode = 0;
	float pay = 0;
	float salary = 0;
	int pieces = 0;
	float hours = 0;

	cout << "Enter employee type (or -1 to quit): ";
	cin >> payCode;

	while(payCode != -1) {
		switch (payCode) {
		case 1:
			cout << "Manager selected. Enter weekly salary: ";
			cin >> salary;
			pay = salary;
			cout << "The manage's pay is: $" << pay << endl;
			break;
		case 2:
			cout << "Hourly worker selected. Enter hourly salary: ";
			cin >> salary;
			cout << "Enter amount of hours worked: ";
			cin >> hours;
			if (hours <= 40) {
				pay = salary * hours;
			}
			else if(hours > 40) {
				hours -= 40;
				hours = (hours * salary) * 1.5;
				pay = (salary * 40) + hours;
			}
			cout << "The hourly worker's pay is: $" << pay << endl;
			break;
		case 3:
			cout << "Commission worker selected. Enter gross weekly sales: ";
			cin >> salary;
			pay = 250 + (0.57 * salary);
			cout << "The commission worker's pay is: $" << pay << endl;
			break;
		case 4:
			cout << "Pieceworker selected. Enter wage per piece: ";
			cin >> salary;
			cout << "Enter number of pieces: ";
			cin >> pieces;
			pay = salary * pieces;
			cout << "The pieceworker's pay is: $" << pay << endl;

			break;
		default:
			cerr << "Invalid worker code" << endl;
			break;
		}
		cout << "Enter employee type (or -1 to quit): ";
		cin >> payCode; 
	}


}

