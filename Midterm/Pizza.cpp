/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 2-23-24

Assignment Description: 

Write a program that asks the user for the meal purchase price and the tip percent (Example 10% or 15%).  
The program then computes the tax, and tip on a meal charge. The tax should be 8.25 percent of the meal cost. 
The tip should be the user percent of the total after adding the tax. Display the meal cost, tax rate, tax amount, 
tip rate, tip amount, and total bill on the screen.


Sample Output:

Enter the meal purchase price: 100

What percent would you like to tip: 10 for 10%:  20

Meal Purchase: $100.00

Tax Rate: 8.25%

Tax Amount: $8.25

Tip Rate: 20%

Tip Amount: $21.65

Total: $129.90

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int main(){

//====Initalize Variables====//
//Base Values
float mealCost;
int tipRateAsInteger;
//Modifier Values
float tipRate;
float taxRate = 8.25 / 100;
//newValues
float taxAmount;
float tipAmount;
float totalBill;
//Controller values
unsigned int i;


//====Prompt the user====//
//Asks for a value for meal cost from the user
cout << "Enter the meal purchase price:" ;
cin >> mealCost;
cout << endl;

//Asks for a value for meal cost from the user
cout << "What percent would you like to tip: 10 for 10%:" ;
cin >> tipRateAsInteger;
cout << endl;

//====Calculations====//
tipRate = tipRateAsInteger / 100.0;

taxAmount = mealCost * taxRate;
tipAmount = (mealCost + taxAmount) * tipRate;
totalBill = mealCost + taxAmount + tipAmount;

//Displays 
cout << fixed << setprecision(2);
cout << "Meal purchaced: $" << mealCost << endl;
cout << "Tax Rate: " << taxRate << "% " << endl;
cout << "Tax Amount: $" << taxAmount << endl;
cout << "Tip Rate: " << tipRateAsInteger << "% " << endl;
cout << "Tip Amount: $" << tipAmount << endl;
cout << "Total Bill: $" << totalBill << endl;
}