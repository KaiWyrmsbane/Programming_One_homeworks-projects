// Programming_One_HW1P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James Vanmeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int main()
{
	/*
	 Problem 2 of homework 1 wants a program that will take user 
	 input for a radius of a circle then calculate the diameter, 
	 circumference, and the area of the circle
	*/
	float radius = 0;
	float diameter = 0;
	float circumference = 0;
	float area = 0;

	cout << "Input the radius of the circle: ";
	cin >> radius;

	//diameter
	diameter = radius * 2;
	cout << "Diameter is " << diameter << endl;
	//circumference
	circumference = 2 * 3.14159 * radius;
	cout << "Circumference is " << circumference << endl;
	//Area
	area = (radius * radius) * 3.14159;
	cout << "Area is " << area << endl;
}
