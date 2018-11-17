// Code by Andrew Brodsky | SID: 107217786 | Assignment 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
#include <cstdlib> // for rand()
#include <ctime> // for timing
using namespace std;

// Declare functions:
void randArrays(int arrayA[], int arrayB[], int arraySize);
void sortArr(int array[], int arraySize, bool direction);
void swap2(int array[], int index1, int index2);
void arrayMerge(int arrayA[], int arrayB[], int arrayC[], int smallArraySize);

// Declare variables to store timer values:
int startTime, stopTime;

int main(){

    // Declare the number of elements each array should have:
    int arraySize = 1000;

    // Declare two arrays with the above-specified number of elements:
    int arrayA[arraySize];
    int arrayB[arraySize];

    // Declare an array with twice the standard number of elements:
    int arrayC[arraySize*2];

    // Start code timer:
    startTime=clock();

    // Call randArrays with the two arrays from above:
    randArrays(arrayA, arrayB, arraySize);

    // Now, call sortArr with each array:
    sortArr(arrayA, arraySize, 1);
    sortArr(arrayB, arraySize, 0);

    // Call arrayMerge with all three arrays and the standard arraySize:
    arrayMerge(arrayA, arrayB, arrayC, arraySize);

    // Stop code timer. Calculate and display total elapsed time:
    stopTime=clock();
    double execTime = (double)(stopTime-startTime)/CLOCKS_PER_SEC;
    cout<<"Code executed in "<<execTime<<" seconds."<<endl;
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
    
    for(int i=0; i<arraySize; i++){ // will run a number of times equal to arraySize

        int maxVal = 0;
        int maxIndex = 0;

        for(int j=startIndex; j<endIndex; j++){ // will run a number of times equal to endIndex-startIndex
            if(array[j]>=maxVal){
                maxVal = array[j];
                maxIndex = j;
            }
        }
            
        if(direction==1){ // for ascending
            swap2(array, maxIndex, endIndex-1);
            endIndex-=1;
        }
        else{ // for descending
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

// Copies the elements of arrayA ​into first half of ​arrayC​ and elements of ​arrayB​ into second half of ​arrayC​.
void arrayMerge(int arrayA[], int arrayB[], int arrayC[], int smallArraySize){
    for(int i=0; i<smallArraySize; i++){
        arrayC[i]=arrayA[i];
        arrayC[i+smallArraySize]=arrayB[i];
    }
}