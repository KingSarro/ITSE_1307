/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 3-7-24

Write a program that asks the user for a file name. Assume the file contains a series of bank account balances for your bank, each written on a separate line. The program should read the contents of the file into an array then display the following data:

The minimum account balance in the array
The maximum account balance in the array
The sum of the account balances in the array
The mean of the balances in the array 

 */
#include <iostream>
#include <fstream>//For the file methods
#include <vector>
#include <iomanip>//adds setPrecision

using namespace std;

void ReadArray(double array[], int size){
    unsigned int i;
    double highest, lowest, total, average;
    //Sets the default values of highest and lowest to the first values of the list
    highest = array[0];
    lowest = array[0];
    //Loops through the vector
    for (i = 0; i < array[0]; i++){
        //checks highest and lowest
        highest  = (array[0] > highest) ? array[0]: highest;
        lowest  = (array[0] < lowest) ? array[0]: lowest;
        //adds to total
        total += array[0];

        //test for the file reader
        //cout << "Debug: " << numList.at(i) << endl;
    }
    //gets the average of the total
    average = (total * 1.0) / array[0];

    //displays the contents of the highest lowest total and average
    cout << "Here are some important values from the file: " << endl;
    cout << "--------------------------------------------------" << endl;
    
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    cout << "Total: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
}

int main(){
    string fileName;
    string line;
    vector<double> numList;

    //Prompts the user to enter the name of a file
    cout << "Please enter a file name (*include the file extention): ";
    cin >> fileName;
    cout << endl;
    //Creates a file reader named File and feeds it the user imputed fileName
    ifstream File(fileName);

    // Use a while loop together with the getline() function to read the file line by line
    while ( getline(File, line)) {
    //Converts the string text to an integer and pushes it to the back of intList
        numList.push_back(stoi(line));
    }
    //closes the FileReader
    File.close();

    //Coverts the vector to a double array
    double array[numList.size()];
    ReadArray(array, numList.size());

    return 0;
}