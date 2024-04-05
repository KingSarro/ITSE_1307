/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 2-18-24

Assignment Description: Calculates the percentage of how occupied 

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int main(){

    //====Initalizations====//
    int hotelLevels;
    int hotelRoomsTotal = 0;
    int hotelRoomsOccupied = 0;
    float hotelOccupancyRate = 0.0;

    int tempInt;
    //====Inputs====//
    cout << "How many floors does the hotel have? ";
    cin >> hotelLevels;
    cout << endl;

    //A loop to keep going until i reaches the value of hotelLevels...
    for (int i = 1; i <= hotelLevels; i++){
        //Asks them how many rooms are on the current level
        cout << "How many rooms does level " << i << " have? ";
        cin >> tempInt;
        cout << endl;
        hotelRoomsTotal += tempInt;
        //cout << "Debug: temp: +" << tempInt << endl; //debug
        //cout << "Debug: hotelRoomsTotal: " << hotelRoomsTotal << endl; //debug
        tempInt = 0;

        //Asks the user to say how many rooms are on the current level
        cout << "How many rooms are occupied on level " << i << "? ";
        cin >> tempInt;
        cout << endl;
        hotelRoomsOccupied += tempInt;
        //cout << "Debug: temp: +" << tempInt << endl; //debug
        //cout << "Debug: hotelRoomsOccupied: " << hotelRoomsOccupied << endl; //debug
        tempInt = 0;

    }

    //Displays the data to the user through the console
    cout << "Total number of rooms occupied: " << hotelRoomsOccupied << endl;
    cout << "Total number of rooms unoccupied: " << hotelRoomsTotal - hotelRoomsOccupied << endl;
    cout << "Total number of rooms in the hotel: " << hotelRoomsTotal << endl;
    
    hotelOccupancyRate = ((hotelRoomsOccupied*1.0) / (hotelRoomsTotal*1.0)) * 100;
    cout << "Percent of rooms occupied: " << hotelOccupancyRate << "%" << endl;


}