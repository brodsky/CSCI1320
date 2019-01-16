// Code by Andrew Brodsky | SID: 107217786 | Lab 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
#include <cstdlib>
using namespace std;

// Function declarations:
void randArrays(int arrayA[], int arrayB[], int arraySize); // function to be tested
void arrayDisp(int arrayA[], int arrayB[], int arraySize); // auxilary function to display the values of each array

int main(){
    // Declare the number of elements each array should have:
    int arraySize = 5;

    // Declare arrays for the randArrays function:
    int arrayA[arraySize];
    int arrayB[arraySize];

    // Display the inital values in each array to the command window:
    arrayDisp(arrayA, arrayB, arraySize);

    // Call randArrays with the two arrays from above:
    randArrays(arrayA, arrayB, arraySize);

    // Call arrayDisp again to see if random numbers were written to each element of the arrays:
    arrayDisp(arrayA, arrayB, arraySize);
}

// Fills 2 arrays of a given length with random integers between 0 and 1000.
void randArrays(int arrayA[], int arrayB[], int arraySize){
    // Fills 2 arrays of a given length with random integers between 0 and 1000.
}

void arrayDisp(int arrayA[], int arrayB[], int arraySize){
    // Use a for loop to go through and print each element of arrayA:
    cout<<"arrayA: ";
    for(int i=0; i<arraySize; i++){
        cout<<arrayA[i]<<" ";
    }
    cout<<endl;

    // Use a for loop to go through and print each element of arrayB:
    cout<<"arrayB: ";
    for(int i=0; i<arraySize; i++){
        cout<<arrayB[i]<<" ";
    }
    cout<<endl;
}