#include <iostream>
// This is a preprocessor directive that directs the computer to include 
// libraries in the program before it is compiled.
//  iostream = input/output streaming to the command window
    
using namespace std;
// namespace std tells the compiler to use the standard set of commands`
// for the above libraries.


// The above two lines must ALWAYS be included.

// Everything inside main() is what actually gets compiled. Main has to be
// assigned a datatype; if it doesn't need to return anything, make it an
// int (integer) and just have it return 0.
int main()
{
    cout << "Hello world!" << endl;
    // Prints 'Hello world!' to the screen.
    
    return 0;
    // Since the main() function is defined as an integer, it has to return something;
    // therefore, return a default value (unless you want to return something).
}

