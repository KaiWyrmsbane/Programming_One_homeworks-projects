// Programming_One_HW2P5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// James VanMeter
// jamesvanmeter1219@gmail.com

#include <iostream>

using namespace std;

int timeBetween(int hours, int minutes, int seconds) {
	int newTime = (hours * 3600) + (minutes * 60) + seconds;
	return newTime;
}

int main()
{
	int hour = 0;
	int minute = 0;
	int second = 0;
	int time1 = 0;
	int time2 = 0;
	cout << "Enter time one, hours: ";
	cin >> hour;
	cout << "Enter time one, minutes: ";
	cin >> minute;
	cout << "Enter time one, seconds: ";
	cin >> second;
	time1 = timeBetween(hour, minute, second);
	cout << "Enter time two, hours: ";
	cin >> hour;
	cout << "Enter time two, minutes: ";
	cin >> minute;
	cout << "Enter time two, seconds: ";
	cin >> second;
	time2 = timeBetween(hour,minute,second);

	if (time1 > time2) {
		time1 -= time2;
		cout << "Seconds in between: " << time1;
	}
	else if(time1 < time2) {
		time2 -= time1;
		cout << "Seconds in between: " << time2 << endl;
	}

}
