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

    //===Auto vs Static===//
    //--Auto lets the compiler decide what the variable type is (in this case, int[])--//
    //auto newArray = new int[oriSize * 2]; //Added auto so th
    //--Static gives a variable a constant memory, no matter how many time the function is called--//
    static int* newArray;
    newArray = new int[oriSize * 2]; //Had to declare this array as a new array so it would the vla could hold a non static storage duration


    unsigned int i;

    //Runs through the original loop to copy values to new array
    for(i = 0; i < oriSize; i++){
        //Copies the original value to the the new array
        newArray[i] = original[i];
    }
    //Sets all the new array elements to 0
    for(i = oriSize; i < (oriSize*2); i++){
        //Copies the original value to the the new array
        newArray[i] = 0;
    }

    return newArray;//returns a pointer to the new array location
}


main(){
    //Creates the original array
    int oriArraySize = 5;
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
    //int* newArrayLoc = getDoubleCopyArray(oriArray, oriArraySize);
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
