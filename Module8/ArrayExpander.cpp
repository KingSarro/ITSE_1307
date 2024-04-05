/*
Name: Sharri'a Sneed
Course: ITSE 2331
Date: 4-4-24


*!Write a function that accepts an int array and the array’s size as arguments. 
*!The function should create a new array that is twice the size of the argument array. 
*!The function should copy the contents of the argument array to the new array and initialize the unused elements of the second array with 0. 
*!The function should return a pointer to the new array.

Sample Output:

Contents before expand function: 4 5 6 3 1

Contents after expand function:  4 5 6 3 1 0 0 0 0 0
*/

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int* GetNewArray(int original[], int oriSize){
    //creates a new array
    int newArray[oriSize * 2];
    unsigned int i;

    //Runs through the original loop to copy values to new array
    for(i = 0; i < (sizeof(original)/sizeof(int)); i++){
        //Copies the original value to the the new array
        newArray[i] = original[i];
    }
    //Sets all the new array elements to 0
    for(i = sizeof(original); i < (oriSize*2); i++){
        //Copies the original value to the the new array
        newArray[i] = 0;
    }

    //Returns the location of the first element in the new array
    return &newArray[0];
}

main(){
    //Creates the original array
    int oriArraySize = 4;
    int oriArray[oriArraySize] = {4, 5, 6, 3, 1};
    //Display the original array
    cout << "Contents before expand function: ";
    //...loop through the original array
    for(int i: oriArray){
        cout << i << " ";
    }
    cout << endl << endl;
    //Get a pointer to the new array
    int* newArrayLoc = GetNewArray(oriArray, oriArraySize);
    //Loop through the array saves at the pointer location
    unsigned int i;
    //Display the new array
    cout << "Contents after expand function: ";
    for(i = 0; i < (oriArraySize*2); i++){
        cout << newArrayLoc[i] << " ";
    }
    cout << endl;

    return 0;
}
