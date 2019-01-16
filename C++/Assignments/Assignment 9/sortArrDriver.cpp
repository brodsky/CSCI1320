// Code by Andrew Brodsky | SID: 107217786 | Lab 9
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
using namespace std;

// Function declarations:
void sortArr(int array[], int arraySize, bool direction); // function to be tested
void swap2(int array[], int index1, int index2); // sortArr relies on swap2, so include it here
void arrayDisp(int arrayA[], int arrayB[], int arraySize); // auxilary function to display the values of each array

int main(){
    // Declare two arrays with 7 elements to be sorted:
    int arrayA[]={0,1,2,2,3,4,5};
    int arrayB[]={0,1,2,2,3,4,5};

    // Display the values of each array to the command window:
    arrayDisp(arrayA, arrayB, 7);

    // Call sortArr with the two arrays from above:
    sortArr(arrayA, 7, 1); // will sort in ascending order
    sortArr(arrayB, 7, 0); // will sort in descending order

    // Call arrayDisp again to display the values of the arrays and see if they were sorted properly:
    arrayDisp(arrayA, arrayB, 7);
}

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

// Swaps the elements in the given indices of array[].
void swap2(int array[], int index1, int index2){
    int element1 = array[index1];
    int element2 = array[index2];
    array[index1]=element2;
    array[index2]=element1;
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