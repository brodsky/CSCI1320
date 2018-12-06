// Code by Andrew Brodsky | SID: 107217786 | Final Project Pt. 3
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct UniqueWord{
    string word;
    int numOccur;
};

int main(){

    ifstream inputStream;
    inputStream.open("cleanedHungerGames.txt");

    UniqueWord wordArr[100000];
    int uniquePos=0;

    while(!inputStream.eof()){
        string currentWord;
        inputStream >> currentWord;

        bool flag = 0;
        for(int i=0; i<uniquePos; i++){

            if (currentWord==wordArr[i].word){
                wordArr[i].numOccur++;
                flag = 1;
                break;
            }

        }

        if(!flag){
            wordArr[uniquePos].word = currentWord;
            wordArr[uniquePos].numOccur = 1;
            uniquePos++;
        }

    }

    int endPos=uniquePos;
    for(int i=0; i<uniquePos; i++){

        int maxOccur = 0;
        int maxIndex = 0;

        for(int j=0; j<endPos; j++){

            if(wordArr[j].numOccur>maxOccur){
                maxIndex=j;
                maxOccur=wordArr[j].numOccur;
            }

        }

        string lastWord = wordArr[endPos-1].word;
        int lastNum = wordArr[endPos-1].numOccur;

        wordArr[endPos-1].word = wordArr[maxIndex].word;
        wordArr[endPos-1].numOccur = wordArr[maxIndex].numOccur;
        wordArr[maxIndex].word = lastWord;
        wordArr[maxIndex].numOccur = lastNum;

        endPos--;
    }

    // Display to the console the number of unique words, the 10 most frequently occurring, and 10 least frequently occurring.
    cout<<"Number of unique words: "<<uniquePos<<endl<<endl;

    cout<<"Ten most frequent words:"<<endl;
    for(int i=0; i<10; i++){
        cout<<wordArr[uniquePos-1-i].word<<" ("<<wordArr[uniquePos-1-i].numOccur<<" occurrences)"<<endl;
    }

    cout<<endl<<"Ten least frequent words:"<<endl;
    for(int i=0; i<10; i++){
        cout<<wordArr[9-i].word<<" ("<<wordArr[9-i].numOccur<<" occurrences)"<<endl;
    }

    return 0;
}