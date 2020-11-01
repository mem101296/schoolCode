#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

/*This program is written to show everything I have learn in my C++ class
Mike Martin - Code started on 10/29/200*/

int main(){

    //gloabl variables are declared here
    int userChoice;
    int exploredParts = 3;
    int loopNum;

    int storyLength = 72;
    int lengthGuess;
    int guessDifference;
    char storyLType;

    //intro taking the guess of the users
    cout << "Lets take a guess on how long this story is going to be: ";
    cin >> lengthGuess;
    cout << endl;
    cout << "You'll know how close your guess is shortly, before that lets have fun!" << endl << endl;
    /*if(lengthGuess > storyLength){
        guessDifference = lengthGuess-storyLength;
        cout << guessDifference << " >" << endl << endl;
    }

    else
    {
        guessDifference = storyLength-lengthGuess;
        cout << guessDifference << " <" << endl << endl;
    }*/
    
    //cout << setfill('=') << setw(30) << ("") << endl << endl;
    /*The commented code above is for testing purposes*/

    //The main loop
    while(loopNum < 3){ //This loop contains all the choices, as choices are add loopNum will be increased
        
        userChoice = 0; ///rests user choice to 0
        cout << "Please select what you would like to learn!\n";
        cout << "1.) Text Manipulation\n2.) Math\n3.) Number Manipulation\n";
        cin >> userChoice; //takes user input

        if(userChoice == 1){ //if userchoice is 1, this prints out

            cout << endl << endl;
            cout << setfill('*');
            cout << setw(8) << right << "" << " <-- This is called a fill! You can change how long it is!" << endl << endl;
            cout << setw(26) << "" << endl;
            cout << "See ^" << endl << endl;
            cout << "You can shift text!!" << endl << endl;
            cout << setw(6) << left << "left colum " << "|";
            cout << setw(8) << right << "right colum " << endl;
            cout << setfill('-') << setw(24) << "" << endl;
            cout << setfill(' ');
            cout << setw(6) << left << "left" << "|";
            cout << setw(8) << right << "right" << endl << endl;
            cout << endl << endl;
            loopNum++;

            
        }

        
        else if (userChoice == 2){ //if user choice is 2, this prints out

            cout << endl << endl;
            cout << "\nFor math, it's exactly what you'd expect!" << endl;
            cout << "+ - * \\ % " << endl << endl;
            cout << endl << endl;
            loopNum++;
        
        }


        else if (userChoice == 3){ //if user choice is 4, this prints out

            double scienceTT = 94783.009372;
            double pi = 3.14159265;
            double sPoint = 9.0;
            
            cout << endl << endl;
            cout << "\nIts time for number manipulation!" << endl;
            cout << "I have the first 9 numbers of pi, " << pi <<", lets mess with it!" << endl << endl;
            cout << "Lets print the first 3 numbers (ignoring decimial point): " << setprecision(3) << pi << endl << endl;
            cout << "Now lets print the first 3 numbers after the decimial point " << fixed << pi << endl << endl;
    
            cout << "You can show or hid point. " << noshowpoint << "Hide point " << sPoint << endl;
            cout << "Show point " << showpoint << sPoint << endl << endl;

            cout << "We have a new number to work with! Its: " << scienceTT << endl;
            cout << "How about scientic notation! " << scientific << scienceTT << endl;
            cout << "How about scientic notation of it with fixed applied! " << setprecision(6) <<fixed << scientific << scienceTT << endl << endl;
            cout << endl << endl;
            loopNum++;
        
        }
        
        else{

            cout << endl << endl;
            cout << "Wrong choise" << endl << endl;
            cout << endl << endl;
        }


    }

    cout << "You've complete all I have in this program!" << endl;

}