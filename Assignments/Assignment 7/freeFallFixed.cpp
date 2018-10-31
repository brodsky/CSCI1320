// Program for calculating freefall distance as a function of time
// d = 1/2 * g * t^2


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main( )
{
	double d,t;
	const double g = 9.8;

	cout << "enter time: ";
	cin >> t; 

	d = 0.5 * g * pow(t,2); 

	cout << "distance = " << d << endl;

	return 0;
}
