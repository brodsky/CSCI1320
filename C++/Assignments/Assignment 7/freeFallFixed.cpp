// Code by Andrew Brodsky | SID: 107217786 | Assignment 7
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

/* This script takes an input of time, computes the distance that an object in freefall would 
have fallen during that time, and then prints it to the command line. */

#include <iostream>
#include <string>

using namespace std;

int main( )
{
	double d,t; /* t can't be declared as a constant if the program needs to 
	write an input to it! Also, d should be declared as a double so that it 
	can store values with greater precision. */
	const double g = 9.8; /* If g has decimal places, it should be stored in a 
	data type that can hold decimal places. */

	cout << "enter time: ";
	cin >> t; // If we need an input for t, we should probably have a line of code that does that.

	d = 0.5 * g * t * t; /* The formula for freefall distance specifies t^2; this 
	calculation should reflect that. */

	cout << "distance = " << d << endl;

	return 0;
}
