// Code by Andrew Brodsky | SID: 107217786 | Lab 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
using namespace std;

// Declare functions:
void arrayMerge(int arrayA[], int arrayB[], int arrayC[], int arraySize); // function to be tested
void arrayDisp(int arrayA[], int arrayB[], int arrayC[], int arraySize); // auxilary function to display the values of each array

int main(){
    
    // Declare two arrays with 4 elements:
    int arrayA[]={5,5,5,5};
    int arrayB[]={6,6,6,6};

    // Create an array with 8 elements:
    int arrayC[8];

    // Display the elements of all 3 arrays:
    arrayDisp(arrayA, arrayB, arrayC, 4);

    // Call arrayMerge to combine arrayA and arrayB into arrayC:
    arrayMerge(arrayA, arrayB, arrayC, 4);

    // Display the updated arrays to see if A and B were merged into C:
    arrayDisp(arrayA, arrayB, arrayC, 4);
}

void arrayMerge(int arrayA[], int arrayB[], int arrayC[], int arraySize){
    // Copies the elements of arrayA ​into first half of ​arrayC​ and elements of ​arrayB​ into second half of ​arrayC​.
    for(int i=0; i<arraySize; i++){
        arrayC[i]=arrayA[i];
        arrayC[i+arraySize]=arrayB[i];
    }
}

void arrayDisp(int arrayA[], int arrayB[], int arrayC[], int arraySize){
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

    cout<<"arrayC: ";
    for(int i=0; i<arraySize*2; i++){
        cout<<arrayC[i]<<" ";
    }
    cout<<endl;
}