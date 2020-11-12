#include <iostream>
#include <ios>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

/*This program is written to show everything I have learn in my C++ class
Mike Martin - Code started on 10/29/200*/


/* Notes to self, add a break section */

int StoryLength(int lengthGuess){ //called after the while loop is broken
    int guessDifference;
    const int storyLength = 72;


    if(lengthGuess > storyLength){
        guessDifference = lengthGuess-storyLength;
        cout << "Your guess was: " << guessDifference << " >" << endl << endl; //Outputs the response to the beginning input if you guessed higher
    }

    else
    {
        guessDifference = storyLength-lengthGuess;
        cout << "Your guess was: " << guessDifference << " >" << endl << endl; //Outputs the response to the beginning input if you guessed lower
    }

    return(guessDifference);
}

int intro(){ //Intro to the program
    
    int lengthGuess;
    int guessDifference;
    cout << "CTRL C now and get chapter 3 examples done. Make sure you know functions first.\n";
    cout << "Lets take a guess on how long this story is going to be: ";
    cin >> lengthGuess;
    cout << endl;
    cout << "\nYou'll know how close your guess is shortly, before that lets have fun!" << endl << endl;
    guessDifference = StoryLength(lengthGuess);
    return guessDifference;
}

void textManipulation(){

string text = "Hello";
            int textSize;
            int textAt;
            int usrINPT;

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
            cout << "These are called escape sequences: \\n \\t \\' (\\ \")\n";
            cout << "If you want to input a multi-line string with whitespaces, this will get a 2 line with whitespace input: \ngetline(cin, firstString)\ngetline(cin, secondString)" << endl << endl;
            cout << "Note: getline(cin, variable) picks up whitespaces. Be sure to use a buffer getline if there's a white space after the input ex: \"Hello \" \n" << endl;
            cout << "You can compare string sizes by using the < > <= >= and so only. This allows for organizing by alphabitical sorting and so on.\n " << endl;
            cout << "If you would like to see the index of a character in a string us at() - For example string1.at(5), assume string1 is equal to 'tissue'. That would return 'u' \n" << endl;
            cout << "You can also assign a chacter in a string: string1.at(6)='!' would output 'tissu!'\n" << endl;
            cout << "The letter at(0-4): ";
            cin >> usrINPT;
            cout << "in hello is now: ";
            text.at(usrINPT)='z';
            cout << text;
            
            cout << "Not only can you change a letter, you can grab the size of the string with .size() or length() (last character is also .size() - 1) but also add characters with .append()." << endl;
            textSize = text.size();
            cout << textSize << " Is the size of " << text << endl << endl;

            cout << "If you use C-style access, it can overwrite a different variable: text[5] ='!' " << endl;
            cout << "\nThis is a personal note in comments" << endl;
            /*
                // If the user entered a name without a leading period, add one
                if ((searchName.size() > 0) && (searchName.at(0) != '.')) {
                     searchName = "." + inputName;
                 }

            */

           cout << "cctype library allows you to check a character. isalpha checks to see if character is a-z. isdigit checks if character is a number. isspace checks for space" << endl;
           cout << "toupper checks for uppercase version, tolower checks for lowercase, both will output numbers. " << endl << endl;

            cout << endl << endl;

}

void mathSection(){

    double zeroFloat = 2.0 / 0; //error will be thrown, ignore.
            double zeroDiv = 0.0 / 0.0;
            double squareRT;
            double powER;
            double absolute;
            double distFunction;
            double x1;
            double x2;
            double y1;
            double y2;
            double divisionNum;
            double modNum;
            double randomNum;


            cout << endl << endl;
            cout << "\nFor math, it's exactly what you'd expect!" << "\n+ - * \\ % " << endl << endl;
            cout << "Only a few days later and I\'ve been introduced to more math!" << endl;
            cout << "Math in C++ has its own version of PEMDAS: First (), next !, next -x, then * / % (in that order), then + -, then < <= > >=, then == !=, next &&, finally ||. Always left to right" << endl;
            cout << "We now have minus signs and compound operators: \n" << "-x is a negative. =+ -= *= /= %=" << endl;
            cout << "\nThis is what happens if a float is divided by 0: " << zeroFloat << endl;
            cout << "This is what happens when 0 / 0: " << zeroDiv << endl;
            cout << "You can import cmath to use things such as: sqrt(x), pow(x,y), fabs(x), and more. Examples below:" << endl;
            squareRT = sqrt(9.0);
            powER = pow(6.0, 2.0);
            absolute = fabs(-99.5);
            cout << squareRT << " | " << powER << " | " << absolute << endl;

            cout << "Please enter 4 valuse :" << endl;
            cin >> x1 >> x2 >> y1 >> y2;
            distFunction = sqrt(pow(x2 - x1, 2.0) + pow(y2 -y1, 2.0));

            cout << "Thats the distance of: " << distFunction << endl << endl;
            
            divisionNum = 13 / 3;
            modNum = 13 % 3;
            cout << "Well its division and mod time! 13/3 = " << divisionNum << " | 13 % 3 (13mod3) = " << modNum << endl;
            cout << "Mod only works with integer variables, it wouldn't make sense to have a remainder with a float" << endl << endl;
            cout << "In C++ theres also a random number generator, you can choose the range and yeild(Use RAND_MAX to get max range). Be sure to always call srand(time(0)) -the seed -before rand() Ex:\n";
            randomNum = rand() % 10;
            cout << "\nIf you rand at 10, it'll use 0-9, if you + 5 at the end of the problem it will change the range to 5-14. You can also use + -n to declair a negative range.\n" << endl;
            cout << randomNum;
            randomNum = rand() % 10 + 5;
            cout << "\n" << randomNum;
            cout << "\n rand() and srand(0) is not truly random. They produce the same numbers each program run.\n" << endl; 
            cout << "srand(time(0)) will call the time in seconds from Jan 1 1970 to now, thus being different each program run... truly random" << endl << endl;
            cout << endl << endl;
}

void numberManipulation(){

    double scienceTT = 94783.009372;
            double pi = 3.14159265;
            double sPoint = 9.0;
            
            //This part is number manipulation
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

}

void definitions(){

//This part is definitions
            //This part needs more work
            string word;
            cout << endl << endl;
            cout << "Please choice which word you'd like to know the definition of!\n" << endl;;
            cout << "variable\nassignment\nincreamenting\n" << endl;
            cin >> word;

            if (word == "variable"){
                cout << "a named item, such as numPeople" << endl << endl;

            }

            if (word == "assignment"){
                cout << "assigns a variable a value ex: x =5" << endl << endl;
            }

            if (word == "increamenting"){
                cout << "increasing a variable by 1. ex: x = x +1 or x++" << endl << endl;
            }

}

void typeConversion(){

//This part is type conversions
            int conInt = 25;
            double conDub = 4.9;
            cout << "\nThis is type conversion, which is exactly what it sounds like! It converts one data type to another. Ex: int to doublem\n" << endl;
            cout << "When converting an int to a double - 25 becomes 25.0\nWhile converting a double to an int drops the fraction - 4.9 becomes 4\n" << endl;
            cout << conInt << " Lets convert this to a double by multiplying conInt(25) by 1.245 and assigning it to conDub: ";
            conDub = conInt * 1.245;
            cout << conDub << endl << endl;
            cout << conDub <<" Lets convert this to an int by multiplyig conDub by conInt and assigning it to conInt: "; 
            conInt = conDub * conInt;
            cout << conInt << endl << endl;

            cout << "You can also force the item types conversion, instead of letting the compiler decide. Just put static_cast<type> in front of the variable.\n";
            cout << "Lets do the same conversion but with the new code: ";
            conInt = 25;
            conDub = static_cast<double>(conInt * 1.245);
            cout << conDub << endl << endl;

}

void binary(){

//This is binary. 
            //I plan to make a way to convert stuff to binary
            cout << "Welcome to binary, read the details carefully, it can get confusing.\n" << endl << endl;
            cout << "Here's how it works:\n 0  0  0  0  0 0 0 0\n128 64 32 16 8 4 2 1\n" << endl;
            cout << "Just add up the numbers to equal a base 10 number.\n10 is 00001010" << endl << endl;

}

void logicalOperators(){

//This part is logical operators
            cout << "This will cover Logical Operators: AND, OR, NOT\n" << endl << endl;
            cout << "I WILL FORMAT THIS LATER\n" << endl << endl;

            cout << "a AND B && true when both of its operands are true\n";
            cout << "=a b | a AND B=\n";
            cout << " \n";
            cout << "=fasle false | false=\n";
            cout << "=fasle true | false=\n";
            cout << "=true false | false=\n";
            cout << "=true true | true=\n";
            cout << endl << endl;

            cout << "a OR B || true when one of its two operands are true\n";
            cout << "a b | a OR B\n";
            cout << " \n";
            cout << "fasle false | false\n";
            cout << "fasle true | true\n";
            cout << "true false | true\n";
            cout << "true true | true\n";
            cout << endl << endl;

            cout << "NOT A ! true when one of its operands is false\n";
            cout << "a | NOT a\n";
            cout << " \n";
            cout << "fasle | true\n";
            cout << "true | false\n";

            cout << "Not can also be used to interperate booleans. I'll explain more late, but use bool to call it in C++\n" << endl;

            cout << "Bitwise operators: & and |   These preform AND or ORR and corresponding individual bits of the operands." << endl << endl;
            cout << "A short circuit is when evalution is skipped due to the first operand evalutating to false\n. "<< endl; 
            cout << "Assume minutes is 1: if ((minutes < 1) && (seconds < 10)) It could evalutate the first operand, return false, and then move on to the next line" << endl << endl;
            cout << endl << endl;

}

void extras(){

//This is extra information
            cout << "\nWelcome to the section that holds information that did not get its own selection!" << endl << endl;
            cout << "int can only hold 32 bits, if it goes over 3 billion, it will cause an overflow. Change to long long (64bits) if it overflows." << endl <<endl;
            cout << "Only use float (32bits) if memory is an issue, use double (64bits) 99% of the time " << endl << endl;
            cout << "unsigned integers mean the value will never be negative - unsigned {type} {variable}" << endl << endl;
            cout << "C++ has something called Auto, auto can detect the type specified based on what its fed. Ex: auto i = 5 could give it an int. auto j = 5.0 would be a double." << endl << endl;
            cout << "core generic top-level domain (cor gTLD) is .com .net .org and .info" << endl << endl;

            cout << endl << endl;

}

void mainLoop(){
    int loopNum;
    int userChoice;

    loopNum = 0;

    while(loopNum < 15){

        userChoice = 0; ///rests user choice to 0
        cout << "Please select what you would like to learn!\n";
        cout << "1.) Text Manipulation\n2.) Math\n3.) Number Manipulation\n4.) Definitions\n5.) Type Conversions\n6.) Binary\n7.) Logical Operators\n10.) Extras\n";
        cin >> userChoice; //takes user input
        
        if(userChoice == 1){
            textManipulation();

            loopNum++;
        }
        
        else if (userChoice == 2){ //if user choice is 2, this prints out
            mathSection();

            loopNum++;
        }

        else if (userChoice == 3){ //if user choice is 3, this prints out
            numberManipulation();

            loopNum++;
        }

        else if (userChoice == 4){
            definitions();

            loopNum++;
        }

        else if (userChoice == 5){
            typeConversion();
        
            loopNum++;
        }


        else if (userChoice == 6){
            binary();

            loopNum++;
        }

        else if (userChoice == 7){
            logicalOperators();

            loopNum++;
        }

        else if (userChoice == 10){
            extras();

            loopNum++;
        }

        else{

            cout << endl << endl;
            cout << "Wrong choise" << endl << endl;
            cout << endl << endl;

        }
    }

}

//declear funtions above

int main(){


    intro();
    mainLoop();


    cout << "You've complete all I have in this program!" << endl << endl;

}