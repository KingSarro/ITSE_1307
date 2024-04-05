/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 2-23-24

Assignment Description: 

Largest/Smallest

Write a program that asks the user to enter two numbers. 
The program should use the conditional operator to determine which number is the larger and which is the smaller of the two. 
If the number are the same it should indicate they are the same.

 

Please enter the first number: 10

Please enter the second number: 5

The first number 10 is the larger number and number 5 is the smaller.

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int main(){

//====Initalize Variables====//
//Base Values
int num1;
int num2;


//====Prompt the user====//
cout << "Please enter the first number:" ;
cin >> num1;
cout << endl;


cout << "Please enter the second number:" ;
cin >> num2;
cout << endl;

//====Calculations====//
if (num1 > num2){
    cout << "The first number " << num1 << " is the larger number and number " << num2 << " is the smaller.";
}
else if (num1 < num2){
    cout << "The second number " << num2 << " is the larger number and number " << num1 << " is the smaller.";
}
else{
    cout << "The first number " << num1 << " and second number " << num2 << " are equal.";
}

//Displays 
}