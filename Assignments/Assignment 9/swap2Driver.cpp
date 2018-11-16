// Code by Andrew Brodsky | SID: 107217786 | Lab 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
using namespace std;

// Function declarations:
void swap2(int array[], int index1, int index2); // function to be tested
void arrayDisp(int arrayA[], int arraySize); // auxilary function to display the values of each array

int main(){
    // Declare a test array of length 5:
    int arrayA[]={0,1,2,3,4};

    // Display the starting value of arrayA:
    arrayDisp(arrayA, 5);

    // Use swap2 to switch elements 0 and 4:
    swap2(arrayA,0,4);

    // Display the new value of arrayA:
    arrayDisp(arrayA, 5);

    // Now switch elements 1 and 3:
    swap2(arrayA,1,3);
    
    // Display the new value of arrayA:
    arrayDisp(arrayA, 5);
}

// Swaps the elements in the given indexes of array[].
void swap2(int array[], int index1, int index2){
    int element1 = array[index1];
    int element2 = array[index2];
    array[index1]=element2;
    array[index2]=element1;
}

void arrayDisp(int arrayA[], int arraySize){
    // Use a for loop to go through and print each element of arrayA:
    cout<<"arrayA: ";
    for(int i=0; i<arraySize; i++){
        cout<<arrayA[i]<<" ";
    }
    cout<<endl;
}