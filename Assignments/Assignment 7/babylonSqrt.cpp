// Note that specifying the decimal precision of an output can also be
// accomplished with the <iomanip> library and the standard cout command.

#include <iostream>
#include <stdio.h>
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

    printf("The approximate square root of %i is %.2f. \n", number, root);
    return 0;
}