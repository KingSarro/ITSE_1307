/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 1-20-24

Assignment Description: Calculate the total of 5 items

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int main(){

    //Initalizes and instanciates variables for the problem
    double item1, item2, item3, item4, item5;
    double combinedCost, totalCost;
    double taxPercent = 0.07;
    double taxAmount;
    
    //Asking the users to input values and save them to their respective variables
    cout << "Enter the price of your first item: ";
    cin >> item1;
    cout << endl << "Enter the price of your second item: ";
    cin >> item2;
    cout << endl << "Enter the price of your third item: ";
    cin >> item3;
    cout << endl << "Enter the price of your fourth item: ";
    cin >> item4;
    cout << endl << "Enter the price of your fifth item: ";
    cin >> item5;

    //calculates the total price of all 5 Items
    combinedCost = item1 + item2 + item3 + item4 + item5;
    //calculates the ammount of tax
    taxAmount = combinedCost * taxPercent;
    //calculates the total end price of
    totalCost = combinedCost + taxAmount;

    //Displays the Cost of each Item to the user
    cout << endl << endl << fixed << setprecision(2);
    cout << "Item 1 cost = $" << item1 << " " << endl;
    cout << "Item 2 cost = $" << item2 << " " << endl;
    cout << "Item 3 cost = $" << item3 << " " << endl;
    cout << "Item 4 cost = $" << item4 << " " << endl;
    cout << "Item 5 cost = $" << item5 << " " << endl;
    //Displays the tax amount
    cout << "Taxes = $" << taxAmount << endl;
    //Displays the total purchase amount
    cout << "Total = $" << totalCost << endl;

    return 0;
}