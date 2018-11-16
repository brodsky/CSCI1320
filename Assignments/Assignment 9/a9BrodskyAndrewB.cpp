// Code by Andrew Brodsky | SID: 107217786 | Assignment 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
#include <cstdlib>
using namespace std;

// Declare functions:
void randArrays(int arrayA[], int arrayB[], int arraySize);
void sortArr(int array[], int arraySize, bool direction);
void swap2(int array[], int index1, int index2);


int main(){

    // Declare the number of elements each array should have:
    int arraySize = 10;

    // Declare arrays for the randArrays function:
    int arrayA[arraySize];
    int arrayB[arraySize];

    // Call randArrays with the two arrays from above:
    randArrays(arrayA, arrayB, arraySize);

    // Now, call sortArr with each array:
    sortArr(arrayA, arraySize, 1);
    sortArr(arrayB, arraySize, 0);
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

// Sorts an array of given length in either ascending or descending order, based on the 'direction' argument. (1 = ascending, 0 = descending)
void sortArr(int array[], int arraySize, bool direction){

    int startIndex = 0;
    int endIndex = arraySize;
    
    for(int i=0; i<arraySize; i++){

        int maxVal = 0;
        int maxIndex = 0;

        if(direction==1){ // for ascending
            for(int j=0; j<endIndex; j++){

                if(array[j]>=maxVal){
                    maxVal = array[j];
                    maxIndex = j;
                }

            }
            swap2(array, maxIndex, endIndex);
            endIndex-=1;
        }
        else{ // for descending
            for(int j=startIndex; j<endIndex; j++){

                if(array[j]>=maxVal){
                    maxVal = array[j];
                    maxIndex = j;
                }

            }
            swap2(array, maxIndex, startIndex);
            startIndex+=1;
        }
        
    }
}

// Swaps the elements in the given indexes of array[].
void swap2(int array[], int index1, int index2){
    int element1 = array[index1];
    int element2 = array[index2];
    array[index1]=element2;
    array[index2]=element1;
}