// Code by Andrew Brodsky | SID: 107217786 | Final Project Pt. 2
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Include necessary libraries:
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    // Create input streams for the list of words to ignore and the file to be cleaned:
    ifstream ignoreWordsStm;
    ifstream dirtyFileStm;

    ignoreWordsStm.open("ignoreWords.txt");
    dirtyFileStm.open("HungerGames.txt");

    // Write the contents of ignoreWords.txt to an array: 
    string ignoreWordsArr[50];
    for(int i=0; i<50; i++){
        ignoreWordsStm>>ignoreWordsArr[i];
    }

    // Close the ifstream for the dirty words since we won't need it anymore:
    ignoreWordsStm.close();

    // Create a new array that will contain individual words of the cleaned file. Create an oversized array to be safe.

    int cleanWordCount = 100000;
    string cleanWordsArr[cleanWordCount];

    // Now, check every word in the dirty file to see if it's a word we should ignore. If it's not, write it to cleanFileArray.
    int cleanWordsPos = 0;
    while(!dirtyFileStm.eof()){
        // Write the stream from dirtyFileStm to a string called currentWord:
        string currentWord;
        dirtyFileStm>>currentWord;

        // Check if currentWord is equal to any of the words we are meant to ignore. If it is, set a flag.
        bool flag = 0;
        for(int i=0; i<50; i++){
            if(ignoreWordsArr[i]==currentWord){
                flag=1;
            }
        }

        // If the flag was set, don't write the word to the clean array. Otherwise, do so.
        if(!flag){
            cleanWordsArr[cleanWordsPos]=currentWord;
            cleanWordsPos++;
        }
    }

    // Now, create an output file stream.
    ofstream cleanTextStm;
    cleanTextStm.open("cleanedHungerGames.txt");

    // Pass all the values in cleanFileArr out to cleanTextStm.
    for(int i=0; i<cleanWordsPos; i++){
        cleanTextStm<<cleanWordsArr[i]<<" ";
    }

    return 0;
}