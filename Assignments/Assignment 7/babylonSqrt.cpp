// Code by Andrew Brodsky | SID: 107217786 | Assignment 7
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

/* Note to self: specifying the decimal precision of an output can also be 
accomplished with the <iomanip> library and the standard cout command. */

/* This script takes an integer input, runs through 5 iterations of the Babylonian algorithm 
for computing the square root of a number, and then prints the resulting approximation of the 
root to the command line. */

#include <iostream>
#include <stdio.h> // Include this library to get output controls similar to MATLAB's fprintf().
using namespace std;

int number, i; // Assuming integer input; using integer iterator
double guess, root; // These values will almost certainly not be integers and thus will require a more precise datatype.

int main(){

    cout << "Enter an integer to find the approximate square root of: ";
    cin >> number;  // Take input

    guess = double(number)/2.0; // Use input/2 as the initial seed for the algorithm

    // Run though the Babylonian algorithm five times!
    for (i=0;i<5;i++) {
        root = double(number)/guess;
        guess = (guess+root)/2;
    }

    // Print the result of the Babylonian algorithm to two decimal places.
    printf("The approximate square root of %i is %.2f. \n", number, root);
    return 0;
}