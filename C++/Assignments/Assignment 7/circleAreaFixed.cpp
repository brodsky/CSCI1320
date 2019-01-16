// Code by Andrew Brodsky | SID: 107217786 | Assignment 7
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

/* This script takes the radius of a circle as an input and then prints the area of 
the given circle to the command line. */

#include <iostream>
using namespace std;

int main()
{
	double area; // If we use a variable 'area' later in the code, we must first define it.
	double radius; // If radius is defined as a constant, we won't be able to write new values to it from cin!

	const double pi = 3.14;

	cout << "Please enter radius: ";
	cin >> radius;

	area = pi * radius * radius;

	cout << "The area of a circle with radius " << radius  <<
	  " is " << area << "." << endl;


    return 0;
}

