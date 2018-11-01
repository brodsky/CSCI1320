// The Babylonian algorithm to compute the square root of a number ​n​​ is as follows: 
//  1. Make a ​guess​​ at the answer (you can pick n/2 as your initial guess).
//  2. Compute ​r = n / guess
//  3. Set ​guess = (guess +r) / 2
//  4. Go back to step 2 for as many iterations as necessary. 
//  The more that steps 2 and 3 are repeated, the closer ​guess​​ will become to the square root of ​n​​.

//  Write a program that inputs an integer for ​n​​, iterates through the Babylonian algorithm five times, and outputs the answer as a double to two decimal places.  Your answer will be most accurate for small values of ​n​​.

#include <iostream>
#include <iomanip>
using namespace std;

int number, i;
double guess, root;

int main(){

    cout << "Enter an integer to find the approximate square root of: ";
    cin >> number;

    guess = double(number)/2.0;

    for (i=0;i<5;i++) {
        root = double(number)/guess;
        guess = (guess+root)/2;
    }

    cout << fixed;
    cout << "The approximate square root of " << number << " is " << setprecision(2) << root << endl;
    return 0;
}