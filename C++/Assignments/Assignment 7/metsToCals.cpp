// Code by Andrew Brodsky | SID: 107217786 | Assignment 7
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

/* This script takes inputs for a subject's weight, the METS for a given activity, and the time (in minutes) 
that the subject spent doing that activity. It then computes the number of calories that the subject must have 
burned over the course of the activity and prints it to the command line. */

#include <iostream>
using namespace std;

const float lbToKg = 1.0/2.2; // Declare the conversion factor from pounds to kilograms as a constant.
double lbWeight, metEquiv, activeMins, calsPerMin; // Declare all the inputs and outputs as doubles for flexibility!

int main(){

    cout << "Enter the subject's weight in pounds: ";
    cin >> lbWeight; // Get weight input

    cout << "Enter the number of METs for an activity: ";
    cin >> metEquiv; // Get MET input

    cout << "Enter the number of minutes spent doing the activity: ";
    cin >> activeMins; // Get time spent doing activity

    calsPerMin = 0.0175*metEquiv*(lbWeight*lbToKg); // Perform calculation to determine calories burned!

    // Print results to command window.
    cout << "Calories burned while doing the activity for the specified amount of time: " << calsPerMin*activeMins << endl; 

    return 0;
}