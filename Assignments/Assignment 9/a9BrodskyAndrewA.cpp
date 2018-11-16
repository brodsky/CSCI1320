// Code by Andrew Brodsky | SID: 107217786 | Assignment 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
#include <cstdlib>
using namespace std;

// Declare functions:
void randArrays(int arrayA[], int arrayB[], int arraySize);


int main(){

    // Declare the number of elements each array should have:
    int arraySize = 10;

    // Declare arrays for the randArrays function:
    int arrayA[arraySize];
    int arrayB[arraySize];

    // Call randArrays with the two arrays from above:
    randArrays(arrayA, arrayB, arraySize);
}

// Fills 2 arrays of a given length with random integers between 0 and 1000.
void randArrays(int arrayA[], int arrayB[], int arraySize){

    // Seed random number generator with epoch time:
    srand(time(NULL));

    // Create for loop to iterate through the arrays and fill them with random numbers:
    for(int i=0; i<arraySize; i++){

        // Generate two random numbers to fill the arrays with:
        int randElementA = rand()%1001;
        int randElementB = rand()%1001;

        // Set the ith element of each array to the random number generated above:
        arrayA[i]=randElementA;
        arrayB[i]=randElementB;

    }

}