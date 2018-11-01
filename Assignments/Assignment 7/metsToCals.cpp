// One way to measure the amount of energy that is expended during exercise is to use metabolic equivalents (MET).  Here are some METS for various activities:
// Running 6 MPH:10 METS
// Basketball:8 METS
// Sleeping: 1 MET
// The number of calories burned per minute may be estimated using the formula: Calories/Minute = 0.0175  * MET *  Weight(Kg) Write a program that asks the user to enter a subject’s weight in pounds, the number of METS for an activity, and the number of minutes spent in that activity, and then outputs the estimate for total number of calories burned. One kilogram is equal to 2.2 pounds (you should declare this conversion factor as a constant.)

#include <iostream>
using namespace std;

const float lbToKg = 1.0/2.2;
double lbWeight, metEquiv, activeMins, calsPerMin; 

int main(){

    cout << "Enter the subject's weight in pounds: ";
    cin >> lbWeight;

    cout << "Enter the number of METs for an activity: ";
    cin >> metEquiv;

    cout << "Enter the number of minutes spent doing the activity: ";
    cin >> activeMins;

    calsPerMin = 0.0175*metEquiv*(lbWeight*lbToKg);
    cout << "Calories burned while doing the activity for the specified amount of time: " << calsPerMin*activeMins << endl; 

    return 0;
}