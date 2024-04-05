/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 3-1-24

   Minimum Goal
//--------------//
Create a project named Forensics with two major functions getHairType and getHeight.  
Be sure to use at least four variables, medullaDiameter, entireHair, femurHeight, and gender.
(50 pts)

Hair Type
----------------
The program should have a function named getHairType that receives two parameters, medulla diameter and entire hair diameter.  
The function should calculate the ratio of the diameter of the medulla to the diameter of the entire hair.  
Use millimeters as the unit of measure.  Animal hair exhibits ratio of .5 or higher.  
A ratio less than .5 is considered human hair.  
The program should return a 1 for human hair and a 0 for animal hair.
(20 pts)

Human Height
-----------------------
The program should also have a function named getHeight.  
Scientists measure the human body using proportions.  
In a crime scene investigation, a person's height can be estimated using the femur.  
A formula is used depending on the gender of the person. 
*************************************************************************
Male:  height = 69.089 + 2.238f (f stands for the femur length in cm)
****************************************************************************
Female: height = 61.412 + 2.317f  (f stands for the femur length in cm)
****************************************************************************
The function receives the gender as an integer 0 for Male and 1 for Female and the length of a femur in centimeters.  
The function should return the height of the victim in centimeters. 
(20 pts)

Validate your inputs.
(10 pts)


////////////////////////////// SAMPLE OUTPUT 1 ////////////////////////////////////

Welcome inspector,

Hair Analysis:
Please enter the medulla width in mm: 3
Please enter the entire hair width in mm: 10

Height Analysis:

Please enter the gender (0 for male 1 for female): 0
Please enter the femur length in cm: 10

The sample provided is from a Human
The height is estimated to be 91.469


================ SAMPLE OUTPUT 2 ================
Welcome inspector,

Hair Analysis:
Please enter the medulla width in mm: 5
Please enter the entire hair width in mm: 10

Height Analysis:

Please enter the gender (0 for male 1 for female: 1
Please enter the femur length in cm: 10

The sample provided is from an animal
The height is estimated to be 84.582 

 */
#include <iostream>
#include <fstream>//For the file methods
#include <vector>
#include <iomanip> //Includes iomanip for the setprecision method

using namespace std;

//The program should have a function named getHairType that receives two parameters, medulla diameter and entire hair diameter.
//The program should return a 1 for human hair and a 0 for animal hair. 
int GetHairType(int medullaDiameter = 1, int entireHairDiameter = 1){
    //The function should calculate the ratio of the diameter of the medulla to the diameter of the entire hair. mD/ehD
    //Use millimeters as the unit of measure.  Animal hair exhibits ratio of .5 or higher.  
    //A ratio less than .5 is considered human hair.
    double ratio;
    //caclculates the ration of  mD to ehD
    ratio = (medullaDiameter * 1.0)/entireHairDiameter;

    return (ratio >= 0.5) ? 0 : 1;
}

//The program should also have a function named getHeight.
//The function receives the gender as an integer 0 for Male and 1 for Female and the length of a femur in centimeters.  
//The function should return the height of the victim in centimeters.
double GetHeight(int gender, int femurLength){
    /*
    A formula is used depending on the gender of the person. 
    *************************************************************************
    Male:  height = 69.089 + 2.238f (f stands for the femur length in cm)
    ****************************************************************************
    Female: height = 61.412 + 2.317f  (f stands for the femur length in cm)
    */
   double height;


   if(gender == 0){
    height = 69.089 + (2.238 * femurLength);
   }
   else{
    height = 61.412 + (2.317 * femurLength);
   }

    return height;
}

int main(){
    int medullaDiameter, entireHair, femurLength, gender;

    int hairType;
    double heightIn_cm;

    cout << "Welcome inspector," << endl << endl;

    //Getting the hair analysis
    cout << "Hair Analysis: " << endl;
    cout << "-----------------------" << endl;
    cout << "Please enter the medulla width in mm: ";
    cin >> medullaDiameter;
    cout << endl;
    cout << "Please enter the entire hair width in mm: ";
    cin >> entireHair;
    cout << endl << endl;

    //Geting the height analysis
    cout << "Height Analysis: " << endl;
    cout << "-----------------------" << endl;
    cout << "Please enter the gender (0 for male, 1 for female): ";
    cin >> gender;
    cout << endl;
    cout << "Please enter the femur length in cm: ";
    cin >> femurLength;
    cout << endl << endl;

    //calculations and function calls
    hairType = GetHairType(medullaDiameter,entireHair);
    heightIn_cm = GetHeight(gender,femurLength);

    //displays the results
    cout << "The sample provided is from an " << ((hairType == 0) ? "animal" : "human") << endl;
    cout << fixed << setprecision(3);
    cout << "The height is estimated to be  " << heightIn_cm << "cm" <<endl;
}