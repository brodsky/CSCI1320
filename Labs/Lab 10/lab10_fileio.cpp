// Code by Andrew Brodsky | SID: 107217786 | Lab 10
// Prof: Maciej Zagrodzki | Section 110 | anbr6390@colorado.edu

// Include necessary libraries:
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Functions for swapping two variables in a given array:
void swapInt(int array[], int index1, int index2);
void swapString(string array[], int index1, int index2);

int main(){

    // Create input stream object:
    ifstream inputStream;

    // Open the given .txt file with inputStream:
    string fileName = "lab10test.txt";
    inputStream.open(fileName);

    // Create an oversized array that will contain the individual words of the file:
    string wordsInFile[100];
    // Create an oversized array that will contain the ASCII sums of each word in the file:
    int asciiVals[100];

    // Create iterator for counting the number of words:
    int numWords=0;
    while(!inputStream.eof()){ // While the input stream hasn't reached the end of the file, write each word to a new element of wordsInFile:
        inputStream>>wordsInFile[numWords++];
    }

    // For each word in wordsInFile, find its ASCII sum.
    for(int i=0; i<numWords; i++){

        // Set the current word to an isolated string so we can index through its characters
        string currentWord = wordsInFile[i];

        // Sum the ASCII values of all the characters in the current word
        int sum=0;
        for(int j=0; j<currentWord.size();j++){
            sum+=int(currentWord[j]);
        }
        
        // Write the word's sum to the corresponding index of asciiVals:
        asciiVals[i]=sum;

    }

    // Create a variable for the last index that the sorting algorithm will parse through:
    int endIndex = numWords;
    
    for(int i=0; i<numWords; i++){ // Sort the words in order of ascending ASCII value

        // Create variables for the maximum value of an array and its index 
        int maxVal = 0;
        int maxIndex = 0;

        // Find the largest ASCII value in the given range of indices:
        for(int j=0; j<endIndex; j++){
            
            // If the current index of asciiVals is greater than maxVal, make it the new maxVal.
            if(asciiVals[j]>=maxVal){
                maxVal = asciiVals[j];
                maxIndex = j;
            }

        }

        // Swap the largest element with the element in endIndex in asciiVals. Do the same for the elements of corresponding indices in wordsInFile.
        swapInt(asciiVals, maxIndex, endIndex-1);
        swapString(wordsInFile, maxIndex, endIndex-1);
        // Decrease endIndex so that the next largest value won't overwrite the one we just placed.
        endIndex-=1;
        
    }   

    // Now, output the ordered words to the terminal.
    for(int i=0; i<numWords; i++){
        cout<<wordsInFile[i]<<" ("<<asciiVals[i]<<")"<<endl;
    }

    // Output the total number of words to the terminal.
    cout<<"Total words: "<<numWords<<endl;

    // Close input stream for good form:
    inputStream.close();

    return 0;
}

void swapInt(int array[], int index1, int index2){
    int element1 = array[index1];
    int element2 = array[index2];
    array[index1]=element2;
    array[index2]=element1;
}

void swapString(string array[], int index1, int index2){
    string element1 = array[index1];
    string element2 = array[index2];
    array[index1]=element2;
    array[index2]=element1;
}