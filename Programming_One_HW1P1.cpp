// Programming_One_HW1P1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>

//if you aren't working with classes then use this
using namespace std;

//if you're working with classes then use this method
//using std::cin;
//using std::cout;
//std::endl;

int main()
{
    /*
    Problem one of programming 1 wants a program that has 
    the user inputs 3 different integers from KB and the 
    program prints the sum, average, product, smallest, and
    the largest.
    */
    int integerOne = 0;
    int integerTwo = 0;
    int integerThree = 0;
    int integer = 0;

    cout << "Input three different integers: ";
    cin >> integerOne;
    cin >> integerTwo;
    cin >> integerThree;
    //sum
    integer = integerOne + integerTwo + integerThree;
    cout << "Sum is: " << integer << endl;
    //average
    integer = (integerOne + integerTwo + integerThree) / 3;
    cout << "Average is: " << integer << endl;
    //Product
    integer = integerOne * integerTwo * integerThree;
    cout << "Product is: " << integer << endl;
    //Smallest
    if ((integerOne < integerTwo) && (integerOne < integerThree) ) {
        cout << "Smallest is: " << integerOne << endl;
    }
    else if ((integerTwo < integerOne) && (integerTwo < integerThree)) {
        cout << "Smallest is: " << integerTwo << endl;
    }
    else {
        cout << "Smallest is: " << integerThree << endl;
    }
    //Largest
    if ((integerOne > integerTwo) && (integerOne > integerThree)) {
        cout << "Largest is: " << integerOne << endl;
    }
    else if ((integerTwo > integerOne) && (integerTwo > integerThree)) {
        cout << "Largest is: " << integerTwo << endl;
    }
    else {
        cout << "Largest is: " << integerThree << endl;
    }
    return 0;
}
