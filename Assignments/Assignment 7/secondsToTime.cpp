#include <iostream>
using namespace std;

int totalSecs, hours, mins, secs, rem4mins, rem4secs;

int main(){

    cout << "Enter a length of time in seconds: ";
    cin >> totalSecs;

    hours = totalSecs/3600;
    rem4mins = totalSecs%3600;

    mins = rem4mins/60;
    rem4secs = rem4mins%60;

    secs = rem4secs;

    cout << totalSecs << " seconds is equal to " << hours << " hours, " << mins << " minutes, and " << secs << " seconds." << endl;

    return 0;
}