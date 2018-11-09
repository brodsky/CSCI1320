// Code by Andrew Brodsky | SID: 107217786 | Lab 8
// Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

// Standard setup:
#include <iostream>
#include <cstdlib>

using namespace std;

// Declare functions as specified in writeup:
int roll();
int oneTurn(bool whoseTurn);
bool loopGame(int targetPoints);

// The main loop sets up basic parameters for the game, calls the function that contains the game, and then prints the winner of the game (which is returned by loopGame) to the console.
int main(){
    cout << "Welcome to Dirty Dice! How many points do you want to play to? ";
    
    // Take input for the number of points to play to:
    int targetPoints;
    cin >> targetPoints;
    cout << "The game will be played to " << targetPoints << " points." << endl;

    // Call loopGame with the number of points that the game will be played to. We expect loopGame to return the winner.
    bool winner = loopGame(targetPoints);

    // Announce who has won, depending on the returned value from loopGame.
    if (winner==0){
        cout<<"The computer has won!"<<endl;
    }
    else{
        cout<<"You've won - congratulations!"<<endl;
    }
}

// loopGame is the core of the game, and will run until someone wins. Winner is returned as a boolean value (0 = computer win, 1 = human win).
bool loopGame(int targetPoints){
    // Declare variables for the current player and the starting points for each player.
    bool currentPlayer = 0;
    int compPoints = 100;
    int humanPoints = 100;

    // Choose who rolls first. This need only be done once.
    srand(time(NULL)); // Seed random number generator with epoch time
    int whoseTurn = rand()%2; // Get a random number that's either 0 or 1

    // Based on whichever player was selected, assign startingPlayer to that player's identifier.
    if(whoseTurn==0){
        cout<<endl<<"The computer has been randomly selected to go first." << endl;
        currentPlayer = 1;
    }
    else{
        cout<<endl<<"You have been randomly selected to go first!" << endl;
        currentPlayer = 1;
    }

    // This is the only code that should be run for the remainder of this function; use an infinite while loop until someone wins and the function returns a winner.
    while(1){
        if(currentPlayer==0){ // The computer's turn
            int turnScore = oneTurn(currentPlayer); // Call oneTurn to play out the turn and return the number of points gained by the player
            compPoints+=turnScore; // Add the turn score to the computer's score
            humanPoints-=turnScore; // Subtract the turn score from the human's score

            if(compPoints>=targetPoints){ // If the computer has won, break out of loopGame and return 0.
                return 0;
            }
            currentPlayer=1; // Otherwise, change the player to the human.
        }
        if(currentPlayer==1){ // The human's turn
            int turnScore = oneTurn(currentPlayer); // Call oneTurn to play out the turn and return the number of points gained by the player
            humanPoints+=turnScore; // Add the turn score to the human's score
            compPoints-=turnScore; // Subtract the turn score from the computer's score
            
            if(humanPoints>=targetPoints){ // // If the human has won, break out of loopGame and return 1.
                return 1;
            }
            currentPlayer=0; // Otherwise, change the player to the computer.
        }
    }
}


// oneTurn takes in a single boolean variable that tells it whether it’s the user’s turn or the computer’s turn (1 = human turn, 0 = computer turn). It then guides the player through their turn until a 3 is rolled or the player chooses to hold. At every important step, the function prints game data (turn total, player decision) to the console. When the turn is over, it returns the turn total as an integer value.
int oneTurn(bool whoseTurn){
    int turnTotal = 0; // Reset the turn total to 0; this should only be done once for every time the function is called.
    
    while(1){ // Create an infinite loop that runs until a player's turn ends and their turn total is returned.
        int currentRoll = roll(); // Roll the die

        if (currentRoll==3){ // If the player rolled a 3, return 3 and end their turn.
            return 3;
        }
        if (whoseTurn==0){ // If a 3 wasn't rolled and it's the human's turn, add the value of the roll to turnTotal and prompt them whether to roll or hold. If they roll, simply allow the fctn to continue running; if they hold, then  return their turn total to loopGame.
        }
        else{ // If a 3 wasn't rolled and it's the computer's turn, add the value of the roll to turnTotal and use crude AI to determine whether to roll again or hold. The plan for crude AI is this: turnTotal will be plugged into a quadratic function. The chance that the computer rolls again will be set as 1/<result of quadratic function>, so the computer will be exponentially less likely to roll again depending on how many points it has gained.
        }
    }
}

// roll simulates a die and returns a random int between 1 and 6.
int roll(){ 
   return 4;
}



