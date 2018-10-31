// cicleAreaBuggy.cpp
// Program to calculate the area of a circle
// User is promted for the radius

#include <iostream>
using namespace std;

int main()
{
	double area;
	double radius;

	const double pi = 3.14;

	cout << "Please enter radius: ";
	cin >> radius;

	area = pi * radius * radius;

	cout << "The area of a circle with radius " << radius  <<
	  " is " << area << "." << endl;


    return 0;
}

