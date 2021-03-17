// Programming_One_HW2P4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>
using namespace std;
double roundingOne(double y) {
    int v = 0;
    v = floor(y + 0.5);
    cout << v << endl;
    return y;
}
double roundingTwo(double y) {
    
    double d = 0;
    d = floor(y * 10 + 0.5) / 10;
    cout << d << endl;
    d = 0;
    d = floor(y * 100 + 0.5) / 100;
    cout << d << endl;
    d = 0;
    d = floor(y * 1000 + 0.5) / 1000;
    cout << d << endl;

    return y;
 }
int main()
{
    //doubles are more percise than floats
    double decimalNumber = 0;
   
    cout << "Input a decimal number: ";
    cin >> decimalNumber;
    roundingOne(decimalNumber);
    roundingTwo(decimalNumber);
}
