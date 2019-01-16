// Code by Andrew Brodsky | SID: 107217786 | Assignment 6
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

#include <iostream>
#include <cmath>

using namespace std;

float input1;
float input2;

int main(){

    cout << "Enter a number: ";
    cin >> input1;

    cout << "Enter a second number: ";
    cin >> input2;

    cout << "The first number plus the second number is " << input1+input2 << endl;
    cout << "The first number minus the second number is " << input1-input2 << endl;
    cout << "The first number times the second number is " << input1*input2 << endl;
    cout << "The first number divided by the second number is " << input1/input2 << endl;
    cout << "The first number to the power of the the second number is " << pow(input1,input2) << endl;

    return 0;
}