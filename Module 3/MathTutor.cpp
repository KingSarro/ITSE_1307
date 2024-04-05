/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 2-9-24

Assignment Description: Asks the user for a random operation, and then gives them a random problem for that operation

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int main(){
    //Instanciates the variables neccisery for this program
    int rNum1, rNum2;
    int userAnswer;
    int correctAnswer;
    int operationNum;
    //Displays a list of options the player is wanted to choose from
    cout << "(1) Addition" << endl;
    cout << "(2) Subtraction" << endl;
    cout << "(3) Multiplication" << endl;
    cout << "(4) Division" << endl;
    cout << "(5) Quit" << endl;
    //Prompts the user to input one of the listed options
    cout << endl << "Please choose your operation (1-4), or type 5 to Quit: ";
    cin >> operationNum;
    cout << endl;

    //Gets a random number for both random variables
    srand(time(0));
    rNum1 = (rand() % 1000) + 1;
    rNum2 = (rand() % 1000) + 1;
    //Creates a switch statement to check whick operation is wanted to be done
    switch (operationNum){
        //-Addition
        case 1:
            correctAnswer = rNum1 + rNum2;
            cout << rNum1 << " + " << rNum2 << " = ";
            cin >> userAnswer;

            if (userAnswer == correctAnswer){
                cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
            }
            else{
                cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
            }
            break;
        //-Subtraction
        case 2:
            correctAnswer = rNum1 - rNum2;
            cout << rNum1 << " - " << rNum2 << " = ";
            cin >> userAnswer;

            if (userAnswer == correctAnswer){
                cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
            }
            else{
                cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
            }
            break;
        //-Multiplication
        case 3:
            correctAnswer = rNum1 * rNum2;
            cout << rNum1 << " x " << rNum2 << " = ";
            cin >> userAnswer;

            if (userAnswer == correctAnswer){
                cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
            }
            else{
                cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
            }
            break;
        //-Division
        case 4:
            if(rNum1 > rNum2){
                correctAnswer = rNum1 / rNum2;
                cout << rNum1 << " / " << rNum2 << " = ";
            }
            else{
                correctAnswer = rNum2 / rNum1;
                cout << rNum2 << " / " << rNum1 << " = ";
            }
            
            cin >> userAnswer;

            if (userAnswer == correctAnswer){
                cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
            }
            else{
                cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
            }
            break;
        //-Quit program
        case 5:
            cout << "Thank you for using our program. Have a nice day!" << endl;
            break;
        //Tells the user to input a valid number and gives them one more chance to type a valid number
        //(copied and pasted the original switch statement)
        default:
            cout << "That is not a valid input. Please type a number between 1-5 for your operation." << endl;
            cout << "(1) Addition" << endl;
            cout << "(2) Subtraction" << endl;
            cout << "(3) Multiplication" << endl;
            cout << "(4) Division" << endl;
            cout << "(5) Quit" << endl;

            switch (operationNum){
                case 1:
                    correctAnswer = rNum1 + rNum2;
                    cout << rNum1 << " + " << rNum2 << " = ";
                    cin >> userAnswer;

                    if (userAnswer == correctAnswer){
                        cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
                    }
                    else{
                        cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
                    }
                    break;
                case 2:
                    correctAnswer = rNum1 - rNum2;
                    cout << rNum1 << " - " << rNum2 << " = ";
                    cin >> userAnswer;

                    if (userAnswer == correctAnswer){
                        cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
                    }
                    else{
                        cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
                    }
                    break;
                case 3:
                    correctAnswer = rNum1 * rNum2;
                    cout << rNum1 << " x " << rNum2 << " = ";
                    cin >> userAnswer;

                    if (userAnswer == correctAnswer){
                        cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
                    }
                    else{
                        cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
                    }
                    break;
                case 4:
                    if(rNum1 > rNum2){
                        correctAnswer = rNum1 / rNum2;
                        cout << rNum1 << " / " << rNum2 << " = ";
                    }
                    else{
                        correctAnswer = rNum2 / rNum1;
                        cout << rNum2 << " / " << rNum1 << " = ";
                    }

                    if (userAnswer == correctAnswer){
                        cout << endl << "Correct! " << correctAnswer << " is the right answer!" << endl;
                    }
                    else{
                        cout << endl << "Sorry! " << correctAnswer << " was the correct answer." << endl;
                    }
                    break;
                case 5:
                    cout << "Thank you for using our program. Have a nice day!" << endl;
                //tells the user that they typed too many errors and ends the program
                default:
                    cout << "Too many errors have occured. Shutting down." << endl;
                    break;
            }
            break;
    }
}