// Code by Andrew Brodsky | SID: 107217786 | Final Project Pt. 1
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Include relevant libraries:
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // Create an input file stream object:
    ifstream inputStream;

    // Open HungerGames.txt with the input filestream object:
    inputStream.open("HungerGames.txt");

    // Count the number of words in HungerGames.txt by seeing how many times it writes a word to a given string:
    int wordCount = 0;
    string tempString;
    while(!inputStream.eof()){
        inputStream>>tempString;
        wordCount++;
    }

    cout<<"Word Count: "<<wordCount<<endl;

    // Create an output file stream object:
    ofstream outputStream;

    // Write to a new file called testText.txt:
    outputStream.open("testText.txt");

    // Reset the input stream to the beginning of the file:
    inputStream.seekg(0, inputStream.beg);

    // Write the first 100 words of HungerGames.txt to testText.txt. We can reuse tempString here to store incoming words from the file stream:
    for(int i=0; i<100; i++){
        inputStream>>tempString;
        outputStream<<tempString<<" ";
    }

    return 0;
}