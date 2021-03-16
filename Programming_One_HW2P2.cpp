// Programming_One_HW2P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com
#include <iostream>
using namespace std;
int main()
{
	int quantitySold = 0;
	int product = 0;
	float totalSales = 0;
	cout << "Enter product number (or -1 to quit): ";
	cin >> product;
	while (product != -1) {
		cout << "Enter Quantity sold: ";
		cin >> quantitySold;
		switch (product)
		{
		case 1:
			totalSales += 2.98 * quantitySold;
			break;
		case 2:
			totalSales += 4.50 * quantitySold;
			break;
		case 3:
			totalSales += 9.98 * quantitySold;
			break;
		case 4:
			totalSales += 4.49 * quantitySold;
			break;
		case 5:
			totalSales += 6.87 * quantitySold;
			break;
		default:
			cerr << "Invalid product number" << endl;
			break;
		}
		cout << "Enter product number (or -1 to quit): ";
		cin >> product;
	}
	cout << "Total sales: " << totalSales;
}

