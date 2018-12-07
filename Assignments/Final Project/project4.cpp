// Code by Andrew Brodsky | SID: 107217786 | Final Project Pt. 4
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Include necessary libraries:
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define wordPairs struct with two words:
struct wordPairs{
    string word1;
    string word2;
    int numOccur;
};

int main(){

    // Create input stream and open the cleaned Hunger Games file:
    ifstream inputStream;
    inputStream.open("cleanedHungerGames.txt");

    // Declare an array of wordPairs structs with an excess of elements:
    wordPairs wordArr[100000];

    // Declare iterator variable for use inside the while loop:
    int uniquePos=0;
    // Declare a boolean called startup that will trigger selective parts of the while loop that must only run once for the algorithm to begin running properly.
    bool startup=1;
    // Declare two strings for use inside the while loop:
    string currentWord1;
    string currentWord2;

    // While loop runs as long as the filestream hasn't reached the end. This will effectively act like a for loop that runs over all the words in cleanedHungerGames.txt.
    while(!inputStream.eof()){

        // To get the algorithm running properly, we need to get two inputs from inputStrean during our first run of the loop; we use the startup boolean for this task.
        if(startup){
            inputStream >> currentWord1;
            inputStream >> currentWord2;
            startup=0;
        }
        else{
            inputStream >> currentWord2;
        }

        // Create a flag boolean value for later use:
        bool flag = 0;

        // Every time that the while loop runs (i.e. every time it reads in a new word), check if there's already a struct in wordArr that has been created for the current word combo. If there is, just increment the number of occurrences in that combo's struct and set the flag. Note that uniquePos was set at 0 in its declaration, so we effectively start from a clean slate here.
        for(int i=0; i<uniquePos; i++){

            if (currentWord1==wordArr[i].word1 && currentWord2==wordArr[i].word2){
                wordArr[i].numOccur++;
                flag = 1;
                break;
            }

        }

        // If the flag wasn't set (meaning that a pre-existing struct for the word pair wasn't found), create one for it in wordArr and increment the iterator that records how many unique word pairs we've found.
        if(!flag){
            wordArr[uniquePos].word1 = currentWord1;
            wordArr[uniquePos].word2 = currentWord2;
            wordArr[uniquePos].numOccur = 1;
            uniquePos++;
        }

        // Set currentWord1 equal to currentWord2 in preparation for the next run of the while loop, where we will write the next input from the stream to currentWord2.

        currentWord1=currentWord2;

    }


    // Sort wordArr in increasing order. First, declare a variable that will determine the position in the array at which the sorting algorithm will stop.
    int endPos=uniquePos;

    // Run the sorting algorithm a number of times equal to the number of unique word pairs (and thus the number of structs that need to be sorted).
    for(int i=0; i<uniquePos; i++){

        // Create two variables that will store the index of the struct with the largest number of word pair occurrences and the actual number of occurrences.
        int maxOccur = 0;
        int maxIndex = 0;

        // Search from the 0th index to the endPos-1'th index to find the struct with the largest number of word pair occurrences:
        for(int j=0; j<endPos; j++){

            if(wordArr[j].numOccur>maxOccur){
                maxIndex=j;
                maxOccur=wordArr[j].numOccur;
            }

        }

        // In preparation for swapping, write all the data from the struct in the last index of wordArr to temporary variables:

        string lastWord1 = wordArr[endPos-1].word1;
        string lastWord2 = wordArr[endPos-1].word2;
        int lastNum = wordArr[endPos-1].numOccur;

        // Now, write the data from the struct in maxIndex position to the struct in the final position and write the data from the temporary variables to the struct in maxIndex position.
        wordArr[endPos-1].word1 = wordArr[maxIndex].word1;
        wordArr[endPos-1].word2 = wordArr[maxIndex].word2;
        wordArr[endPos-1].numOccur = wordArr[maxIndex].numOccur;

        wordArr[maxIndex].word1 = lastWord1;
        wordArr[maxIndex].word2 = lastWord2;
        wordArr[maxIndex].numOccur = lastNum;

        // Decrement the endPos so that the sorting algorithm won't mess with the now-sorted maximum index or anything above it.
        endPos--;
    }

    // Display to the console the number of unique word pairs, the 10 most frequently occurring pairs, and 10 least frequently occurring pairs.
    cout<<"Number of unique word pairs: "<<uniquePos<<endl<<endl;

    // Print out the final 10 elements (w/ the largest # of occurrences) of wordArr that were written to (i.e. starting from index uniquePos-1 and going down).
    cout<<"Ten most frequent word pairs:"<<endl;
    for(int i=0; i<10; i++){
        cout<<wordArr[uniquePos-1-i].word1<<" "<<wordArr[uniquePos-1-i].word2;
        cout<<" ("<<wordArr[uniquePos-1-i].numOccur<<" occurrences)"<<endl;
    }

    // Print out the first 10 elements of wordArr (w/ the smallest # of occurrences)
    cout<<endl<<"Ten least frequent words:"<<endl;
    for(int i=0; i<10; i++){
        cout<<wordArr[9-i].word1<<" "<<wordArr[9-i].word2;
        cout<<" ("<<wordArr[9-i].numOccur<<" occurrences)"<<endl;
    }

    return 0;
}