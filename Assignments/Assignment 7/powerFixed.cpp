// Code by Andrew Brodsky | SID: 107217786 | Assignment 7
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

/* This script takes an integer input and then calculates the value of that 
integer to the 2nd, 3rd, and 4th powers. */

#include <iostream>
#include <cmath> // If we're using the pow() function, we need this library

using namespace std;


int main()
{
	int x, a=2;
	cout << "Please enter a value for x = " ;
	cin >> x; // Arrows need to point towards the variable receiving the input

	cout << "x to the power of " << a;
	cout << " is equal to " << pow(x,a++) << endl; /* If the value of a that we print 
	above is to be the same as the value that we take x to the power of, a post-increment 
	should be used on a instead of a pre-increment. */

	cout << "x to the power of " << a;
	cout << " is equal to " << pow(x,a++) << endl;

	cout << "x to the power of " << a;
	cout << " is equal to " << pow(x,a++) << endl;

	return 0;
}

