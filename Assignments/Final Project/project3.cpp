// Code by Andrew Brodsky | SID: 107217786 | Final Project Pt. 3
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Include necessary libraries:
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define UniqueWord struct as specified:
struct UniqueWord{
    string word;
    int numOccur;
};

int main(){

    // Create an input stream and open the cleaned Hunger Games file:
    ifstream inputStream;
    inputStream.open("cleanedHungerGames.txt");

    // Declare an array of UniqueWord structs with an excess of elements:
    UniqueWord wordArr[100000];

    // Declare indexing variable for use inside the while loop:
    int uniquePos=0;

    // Create a string called currentWord that will hold inputs from inputStream:
    string currentWord;

    // While loop runs as long as the filestream hasn't reached the end. This will effectively act like a for loop that runs over all the words in cleanedHungerGames.txt.
    while(!inputStream.eof()){

        // Write incoming data from inputStream to currentWord:
        inputStream >> currentWord;

        // Create a flag boolean that will record whether or not a struct already exists for a given word:
        bool flag = 0;

        // Every time that the while loop runs (i.e. every time it reads in a new word), check if there's already a struct in wordArr that has been created for that word. If there is, just increment the number of occurrences in that word's struct and set the flag. Note that uniquePos was set at 0 in its declaration, so we effectively start from a clean slate here.
        for(int i=0; i<uniquePos; i++){

            if (currentWord==wordArr[i].word){
                wordArr[i].numOccur++;
                flag = 1;
                break;
            }

        }

        // If the flag wasn't set (meaning that a pre-existing struct for currentWord wasn't found), create one for it in wordArr and set the number of occurrences to 1.
        if(!flag){
            wordArr[uniquePos].word = currentWord;
            wordArr[uniquePos].numOccur = 1;
            uniquePos++;
        }

    }


    // Sort wordArr in increasing order. First, declare a variable that will determine the position in the array at which the sorting algorithm will stop.
    int endPos=uniquePos;

    // Run the sorting algorithm a number of times equal to the number of unique words (and thus the number of structs that need to be sorted).
    for(int i=0; i<uniquePos; i++){

        // Create two variables that will store the index of the struct with the largest number of word occurrences and the actual number of occurrences.
        int maxOccur = 0;
        int maxIndex = 0;

        // Search from the 0th index to the endPos-1'th index to find the struct with the largest number of word occurrences:
        for(int j=0; j<endPos; j++){

            if(wordArr[j].numOccur>maxOccur){
                maxIndex=j;
                maxOccur=wordArr[j].numOccur;
            }

        }

        // In preparation for swapping, write all the data from the struct in the last index of wordArr to temporary variables:

        string lastWord = wordArr[endPos-1].word;
        int lastNum = wordArr[endPos-1].numOccur;

        // Now, write the data from the struct in index maxIndex to the struct in the final index. Then, write the data from the temporary variables to the struct in index maxIndex.
        wordArr[endPos-1].word = wordArr[maxIndex].word;
        wordArr[endPos-1].numOccur = wordArr[maxIndex].numOccur;
        wordArr[maxIndex].word = lastWord;
        wordArr[maxIndex].numOccur = lastNum;

        // Decrement the endPos so that the sorting algorithm won't mess with the now-sorted maximum index or any indices above it.
        endPos--;
    }

    // Display to the console the number of unique words, the 10 most frequently occurring, and 10 least frequently occurring.
    cout<<"Number of unique words: "<<uniquePos<<endl<<endl;

    // Print out the final 10 elements (w/ the largest # of occurrences) of wordArr that were written to (i.e. starting from index uniquePos-1 and going down).
    cout<<"Ten most frequent words:"<<endl;
    for(int i=0; i<10; i++){
        cout<<wordArr[uniquePos-1-i].word<<" ("<<wordArr[uniquePos-1-i].numOccur<<" occurrences)"<<endl;
    }

    // Print out the first 10 elements of wordArr (w/ the smallest # of occurrences)
    cout<<endl<<"Ten least frequent words:"<<endl;
    for(int i=0; i<10; i++){
        cout<<wordArr[9-i].word<<" ("<<wordArr[9-i].numOccur<<" occurrences)"<<endl;
    }

    return 0;
}