/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 1-24-24

Assignment Description: Calculates the kenetic energy and potental energy with the inputed values

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

int main(){
    //Declares variables to hold the end results of the calculations of th
    double kineticEnergy;
    double potentialEnergy;
    //Initalizes variables to 0 to avoid getting compile errors
    double massInKilos = 0.0;
    double velocity = 0.0;
    double acceleration = 0.0;
    double height = 0.0;

    //----------------------------------------------------------------------------------- 

    //Displays which calculation is about to be completed to the user
    cout << "Kinetic Energy Calculator" << endl;
    cout << "====================================" << endl;

    //Promts to user to enter a value representing an objects mass in kilos
    cout << "Enter the mass (in Kilos): ";
    cin >> massInKilos;
    cout << endl;

    //Promts the user to enter a value representing an objects velocity in meters per second
    cout << "Enter the velocity (in Meters per Second): ";
    cin >> velocity;
    cout << endl;

    //Calculates the kinetic energy: KE=1/2 mv^2
    kineticEnergy = (1.0/2.0) * (massInKilos * (velocity * velocity));

    //Displays the result calculating kinetic energy
    cout << "Kinetic Energy = " << kineticEnergy << endl;

    //Stylizing the output of for the users
    cout << endl << "--------------------------------------------------" << endl << endl;
    //---------------------------------------------------------------------------------------

    //Displays which calculation is about to be completed to the user
    cout << "Potential Energy Calculator" << endl;
    cout << "====================================" << endl;

    //Promts to user to enter a value representing an objects acceloration
    cout << "Enter the acceleration (gravity being 9.08 m/s^2): ";
    cin >> acceleration;
    cout << endl;

    //Promts the user to enter a value representing an objects height
    cout << "Enter the height (in Meters): ";
    cin >> height;
    cout << endl;

    //Calculates the potential energy: PE = mgh
    potentialEnergy = massInKilos * acceleration * height;

    //Displays the result calculating kinetic energy
    cout << "Potential Energy = " << potentialEnergy << endl << endl;


    return 0;
}