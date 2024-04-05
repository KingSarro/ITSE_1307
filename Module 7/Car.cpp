/*
Write a class named Car that has the following member variables:

yearModel—an int that holds the car’s year model
make—a string that holds the make of the car
speed—an int that holds the car’s current speed
In addition, the class should have the following constructor and other member functions:

Constructor—The constructor should accept the car’s year model and make as arguments. These values should be assigned to the object’s yearModel and make member variables. The constructor should also assign 0 to the speed member variables.
Mutators—appropriate mutator functions to set the values in memory for every   object’s yearModel, make, and speed member variables.
Accessor—appropriate accessor functions to get the values stored in an object’s yearModel, make, and speed member variables
accelerate()—The accelerate function should add 5 to the speed member variable each time it is called.  
brake()—The brake function should subtract 5 from the speed member variable each time it is called.

Demonstrate the class in a program that creates a Car object, then calls the accelerate function five times. 
After each call to the accelerate function, get the current speed of the car and display it. 
Then, call the brake function five times. 
After each call to the brake function, get the current speed of the car and display it.  
Be sure to use your setters or mutators in your main function. 

Sample Output:

Increasing speed by 5       your speed is now 20

Increasing speed by 5      your speed is now 25

breaking....      your speed is now 20
*/

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method

#include "Car.h"

using namespace std;

int main(){
    Car myCar(2018, "Honda");//Create a Car object
    //Display the models and year of the car along with it's speed
    cout << "My car is a " << myCar.GetYearModel() << " " << myCar.GetMake() << " going at a speed of " << myCar.GetSpeed() << "." << endl;
    //Accelerating 5 times
    myCar.Accelerate();
    cout << "Increasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Accelerate();
    cout << "Increasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Accelerate();
    cout << "Increasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Accelerate();
    cout << "Increasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Accelerate();
    cout << "Increasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    //Breaking 5 times
    myCar.Brake();
    cout << "Decreasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Brake();
    cout << "Decreasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Brake();
    cout << "Decreasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Brake();
    cout << "Decreasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    myCar.Brake();
    cout << "Decreasing speed by 5. My speed is now " << myCar.GetSpeed() << "." << endl;
    //
    myCar.SetMake("Toyota");
    myCar.SetYearModel(2020);
    myCar.SetSpeed(10);
    //Display the models and year of the car along with it's speed
    cout << "My new car is a " << myCar.GetYearModel() << " " << myCar.GetMake() << " going at a speed of " << myCar.GetSpeed() << "." << endl;
    return 0;
}

Car::Car(int yearModel, string make){
    this->yearModel = yearModel;
    this->make = make;
    speed = 0;
}

void Car::SetYearModel(int yearModel){
    this->yearModel = yearModel;
}
int Car::GetYearModel() const{
    return yearModel;
}
void Car::SetMake(string make){
    this->make = make;
}
string Car::GetMake() const{
    return make;
}
void Car::SetSpeed(int speed){
    this->speed = speed;
}
int Car::GetSpeed() const{
    return speed;
}
void Car::Accelerate(){
    speed += 5;
}
void Car::Brake(){
    speed -= 5;
}