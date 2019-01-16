// Code by Andrew Brodsky | SID: 107217786 | Final Practicum
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Include relevant libraries:
#include <iostream>
using namespace std;

// Declare both the function to be tested and an auxilary function that displays the test function's output:
void finalPrac(int arr[], int aSize, int &x);
void arrDisp(int arr[], int aSize, int x);

int main(){

    // Dataset 1 with calls to test function and display function:
    int array1[] = {4,3,1,5,3,3,1,8,3};
    int size1 = 9;
    int special1 = 3;
    finalPrac(array1, size1, special1);
    arrDisp(array1, size1, special1);
   
    // Dataset 2 with calls to test function and display function:
    int array2[] = {2,2,7,0,1,9,8,5};
    int size2 = 8;
    int special2 = 8;
    finalPrac(array2, size2, special2);
    arrDisp(array2, size2, special2);

    // Dataset 3 with calls to test function and display function:
    int array3[] = {4,1,5,1,8};
    int size3 = 5;
    int special3 = 3;
    finalPrac(array3, size3, special3);
    arrDisp(array3, size3, special3);

    return 0;
}

void finalPrac(int arr[], int aSize, int &x){

    // Create variables for the position of x and a flag that will trip if we find x in the array: 
    int specialPos = 0;
    bool flag = 0;

    // Iterate through each element of the array to see if it contains x:
    for(int i=0; i<aSize; i++){

        // If the current element contains x; record the position of the element, set the flag, and break from the enclosing for loop. The break statement ensures that only the position of x's first occurrence is recorded if x appears more than once in the array:
        if(arr[i]==x){
            specialPos=i;
            flag=1;
            break;
        }

    }

    // If the flag was set (meaning that we found x in the array), iterate through the array and change its elements as specified in the writeup.
    if(flag){

        // For every element to the left of x, change its value to 1.
        for(int i=0; i<specialPos; i++){
            arr[i]=1;
        }

        // For every element to the right of x, change its value to 0.
        for(int i=(specialPos+1); i<aSize; i++){
            arr[i]=0;
        }

        // Reset the value of x that was passed into the function to 0. Note that because x was passed by reference into the function, this edits the original x from the main function.
        x=0;

        // Now, rewrite x as the sum of the newly changed array by iterating through each element and adding it to x. This function is specified to be void, so we can't return this sum, but since x was passed by reference, we can just write to the original variable x that was passed in from main.
        for(int i=0; i<aSize; i++){
            x+=arr[i];
        }

    }
    else{
        // If the flag was not set (meaning we didn't find x in the array), write x to 0.
        x=0;
    }

}

void arrDisp(int arr[], int aSize, int x){
    // Display the edited array and the updated value of x.
    cout<<"arr = { ";

    // Iterate through the array and print each element to the terminal.
    for(int i=0; i<aSize; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"} and x = "<<x<<"."<<endl;

}