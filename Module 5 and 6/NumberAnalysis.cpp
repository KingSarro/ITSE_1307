/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 3-1-24

Write a program that asks the user for a file name. (20pts) 
Assume the file contains a series of numbers, each written on a separate line. 
The program should read the contents of the file into an array then display the following data: (20 pts)

The lowest number in the array (10 pts)
The highest number in the array (10 pts)
The total of the numbers in the array (20 pts)
The average of the numbers in the array (20 pts)

 */
#include <iostream>
#include <fstream>//For the file methods
#include <vector>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

void ReadFile(vector<int> numList){
    unsigned int i;
    double highest, lowest, total, average;
    //Sets the default values of highest and lowest to the first values of the list
    highest = numList.at(0);
    lowest = numList.at(0);
    //Loops through the vector
    for (i = 0; i < numList.size(); i++){
        //checks highest and lowest
        highest  = (numList.at(i) > highest) ? numList.at(i): highest;
        lowest  = (numList.at(i) < lowest) ? numList.at(i): lowest;
        //adds to total
        total += numList.at(i);

        //test for the file reader
        //cout << "Debug: " << numList.at(i) << endl;
    }
    //gets the average of the total
    average = (total * 1.0) / numList.size();

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
    vector<int> intList;

    //Prompts the user to enter the name of a file
    cout << "Please enter a file name (*include the file extention): ";
    cin >> fileName;
    cout << endl;
    //Creates a file reader named File and feeds it the user inputed fileName
    ifstream File(fileName);

    // Use a while loop together with the getline() function to read the file line by line
    while ( getline(File, line)) {
    //Converts the string text to an integer and pushes it to the back of intList
    intList.push_back(stoi(line));
    }
    //closes the Filereader
    File.close();

    //Call the ReadFile function
    ReadFile(intList);

}