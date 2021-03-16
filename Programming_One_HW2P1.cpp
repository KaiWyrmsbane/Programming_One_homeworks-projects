// Programming_One_HW2P1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@yahoo.com

#include <iostream>

using namespace std;

int main()
{
    int product = 1;
    for (int i = 1; i <= 15; i = i + 2) {
        product *= i;
    }
    cout << "The product of odd integers from 1 to 15 is " << product << endl;
}
