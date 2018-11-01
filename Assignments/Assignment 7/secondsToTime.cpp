#include <iostream>
using namespace std;

int totalSecs, hours, mins, secs, rem4mins, rem4secs; 
/* Assuming that seconds will be an integer value, everything else can also be declared as an integer. */

/* This program takes an input of seconds, calculates how much time that corresponds to in 
terms of hours, minutes, and seconds, and then prints that reformatted time to the command line. */

int main(){

    cout << "Enter a length of time in seconds: ";
    cin >> totalSecs; // Take an input of seconds

    hours = totalSecs/3600; // Make use of the int type's automatic truncation to get the floored integer value for the number of hours.
    rem4mins = totalSecs%3600; /* The integer remainder of the above calculation yields the seconds remaining to be transformed 
    into minutes, so to speak. */

    mins = rem4mins/60; /* Take the result of the modulo above and calculate the floored integer value for the number of minutes 
    with the same truncation technique as used above. */
    rem4secs = rem4mins%60; // The integer remainder is the leftover number of seconds that cannot be converted into any larger time unit.

    secs = rem4secs;

    // Print the results to the commmand line.
    cout << totalSecs << " seconds is equal to " << hours << " hours, " << mins << " minutes, and " << secs << " seconds." << endl;

    return 0;
}