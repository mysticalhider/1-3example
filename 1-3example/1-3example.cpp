/*
File Name: 1-3example.cpp
Programmer: Perrin Dalgleish
Date: 1/24/25
Requirements:
	obtain hours worked for the week
	ask pay rate
	compute gross pay
	display it
*/
#include <iomanip>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
	double hoursworked;
	double payrate;
	double grosspay;
	cout << "How many hours of overtime did you work this week? \n";
	cin >> hoursworked;
	cout << "How much do you make per hour? \n";
	cin >> payrate;
	grosspay = hoursworked * payrate;
	cout << "You worked " << hoursworked << " hours this week while your hourly rate is $" << fixed << setprecision(2) << payrate << ". \n";
	cout << fixed << setprecision(2) << "You made $" << grosspay << " this week. WOW!";
} 