/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 3-7-24

In statistics, when the elements in a set are summed and divided by the total number of elements, it is called mean. Write a function that accepts as arguments the following:

-An array of integers
-An integer that indicates the number of elements in the array (for example 12)
The function should determine the mean of the array. This value should be returned as a double.

Create a main function to demonstrate your mean function. 

 */
#include <iostream>

using namespace std;

double GetMeanOfArray(int array[], int size){
    //Declaring variables
    int total = 0;
    double mean = 0;
    //Loops through each element in the array
    for (int i = 0; i < size; i++) {
        //Adds the value of the current element to the total variable
        total += array[i];
    }
    //Divides the total by the size of the array
    mean = (total * 1.0) / size;
    //Returns the value of mean to the main function
    return mean;
}

int main(){
    //Declaring variables
    unsigned int size;
    //Prompts the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    //Declaring an array of integers
    int array[size];
    //Loops through each element in the array
    for(unsigned int i = 0; i < size; i++){
        //Prompts the user to enter an integer
        cout << "Enter an integer: ";
        cin >> array[i];
    }
    //Prints the value of mean to the screen
    cout << "The mean of the array is: " << GetMeanOfArray(array, size) << endl;

    return 0;
}