// Code by Andrew Brodsky | SID: 107217786 | Lab 11
// Prof: Maciej Zagrodzki | Section 110 | anbr6390@colorado.edu

#include <iostream>
#include <string>
using namespace std;

class AnimalPatient{
    public:
        AnimalPatient(string nameInput, string speciesInput, int ageInput, double weightInput){
            patientName = nameInput;
            species = speciesInput;
            age = ageInput;
            weight = weightInput;
        }
        
        AnimalPatient(){
            patientName = "LIGER";
            species = "LIGER";
            age = -1;
            weight = -1;
        }

        // Mutator and accessor functions are declared here and defined below for notational convenience:
        void setName(string input);
        string getName();

        void setSpecies(string input);
        string getSpecies();

        void setAge(int input);
        int getAge();

        void setWeight(double input);
        double getWeight();

        double convertToKilo();

    private:
        string patientName;
        string species;
        int age;
        double weight; // Meant to be in pounds. Declared as a double so we don't run into truncation when doing math with this datum.
};

int main(){
    AnimalPatient patientArray[3];

    // Create temporary variables for cin to write to:
    string tempString;
    double tempNum;

    for(int i=0; i<3; i++){
        cout<<endl<<"Enter information for patient "<<i+1<<":"<<endl<<endl;

        cout<<"Enter patient's name: ";
        cin>>tempString;
        patientArray[i].setName(tempString);

        cout<<"Enter patient's species: ";
        cin>>tempString;
        patientArray[i].setSpecies(tempString);

        cout<<"Enter patient's age: ";
        cin>>tempNum;
        patientArray[i].setAge(tempNum);

        cout<<"Enter patient's weight: ";
        cin>>tempNum;
        patientArray[i].setWeight(tempNum);
    }

    return 0;
}

void AnimalPatient::setName(string input){
    patientName=input;
}
string AnimalPatient::getName(){
    return patientName;
}

void AnimalPatient::setSpecies(string input){
    species=input;
}
string AnimalPatient::getSpecies(){
    return species;
}

void AnimalPatient::setAge(int input){
    if(input>=0){
        age=input;
    }
    else{
        age=0;
    }
}
int AnimalPatient::getAge(){
    return age;
}

void AnimalPatient::setWeight(double input){
        if(input>=0){
        weight=input;
    }
    else{
        weight=0;
    }
}
double AnimalPatient::getWeight(){
    return weight;
}

double AnimalPatient::convertToKilo(){ // Converts the "weight" member datum into kilograms, then outputs it.
    return weight*0.453592;
}