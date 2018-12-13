// Code by Andrew Brodsky | SID: 107217786 | Lab 11
// Prof: Maciej Zagrodzki | Section 110 | anbr6390@colorado.edu

// Include relevant libraries:
#include <iostream>
#include <string>
using namespace std;

// Define the AnimalPatient class as specified:
class AnimalPatient{
    public:

        // First instance of the constructor: takes in inputs for all of the object's member data, then passes those inputs to the corresponding mutator functions so that the inputs can be error-checked.
        AnimalPatient(string nameInput, string speciesInput, int ageInput, double weightInput){
            setName(nameInput);
            setSpecies(speciesInput);
            setAge(ageInput);
            setWeight(weightInput);
        }
        
        // Second instance of the constructor: if no inputs are given, all of the member data are written to default, meaningless values. The mutator functions are not called here to do error checking because the member data are intentionally declared as nonsensical values.
        AnimalPatient(){
            patientName = "LIGER";
            species = "LIGER";
            age = -1;
            weight = -1;
        }

        // Mutator and accessor functions for the member data are declared here and defined below for notational simplicity:
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
        // All of the object's data are defined as private members of the class:
        string patientName;
        string species;
        int age;
        double weight; // Intended input is in pounds. Declared as a double so we don't run into truncation when doing math with this datum.
};

// Declare a function that will display a given patient's data to the terminal:
void printPatient(AnimalPatient array[], int index);

int main(){

    // Create an array of AnimalPatient objects with 3 elements:
    AnimalPatient patientArray[3];

    // Since the objects in the above array were created without any given input values, check that they were constructed with meaningless data using the second instance of the constructor. endl is added here for output formatting.
    cout<<endl;
    for(int i=0; i<3; i++){
        printPatient(patientArray, i);
    }

    // Create temporary variables for cin to write to:
    string tempString;
    double tempNum;

    // Take inputs for the member data of all 3 AnimalPatient objects in the array. Use the mutator functions in the AnimalPatient class to write to the given object's member data:
    for(int i=0; i<3; i++){
        cout<<endl<<"Enter information for patient "<<i+1<<":"<<endl;

        // Write the input from cin to a temporary variable, then call the appropriate mutator function with the temporary variable as its argument.
        cout<<"Enter patient's name: ";
        cin>>tempString;
        patientArray[i].setName(tempString);

        cout<<"Enter patient's species: ";
        cin>>tempString;
        patientArray[i].setSpecies(tempString);

        cout<<"Enter patient's age: ";
        cin>>tempNum;
        patientArray[i].setAge(tempNum);

        cout<<"Enter patient's weight (lbs): ";
        cin>>tempNum;
        patientArray[i].setWeight(tempNum);
    }

    // endl added for output formatting:
    cout<<endl;

    // Display the member data for each of the 3 AnimalPatient objects using the printPatient function:
    for(int i=0; i<3; i++){
        printPatient(patientArray, i);
    }

    return 0;
}

// Definitions of all the mutator and accessor functions for the AnimalPatient class:

// No input verification is needed for the two string inputs, so they can be written straight to the appropriate member data. For every accessor functions, all that is required is to output the appropriate member data.
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

// For the two numerical inputs, a check is added to make sure that the given inputs are greater than 0. If an input is less than 0, the user receives an alert and the corresponding member datum is set to 0. 
void AnimalPatient::setAge(int input){
    if(input>=0){
        age=input;
    }
    else{
        age=0;
        cout<<"    Age must be a positive value! Patient age set as 0."<<endl;
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
        cout<<"    Weight must be a positive value! Patient weight set as 0."<<endl;
    }
}
double AnimalPatient::getWeight(){
    return weight;
}

// The convertToKilo function returns the patient's weight in kilograms by multiplying the weight member datum (which is in pounds) by the conversion factor between pounds and kilograms:
double AnimalPatient::convertToKilo(){
    return weight*0.453592;
}

// The printPatient function takes in an array of AnimalPatient objects and a particular index of said array, then outputs all of that object's member data to the terminal (including the patient's weight in kg).
void printPatient(AnimalPatient array[], int index){
    cout<<"Patient name: "<<array[index].getName()<<endl;
    cout<<"Patient species: "<<array[index].getSpecies()<<endl;
    cout<<"Patient age: "<<array[index].getAge()<<endl;
    cout<<"Patient weight (lbs): "<<array[index].getWeight()<<endl;
    cout<<"Patient weight (kg): "<<array[index].convertToKilo()<<endl<<endl;

}