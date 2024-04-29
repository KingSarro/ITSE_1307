/*
Name: Sharri'a Sneed
Date: 4-23-24
class: ITSE 2331

Assume there are 356 days in a year
Make a class names DayofTheYear that takes an integer representing a day of the year
and translates them into a sting consisting of the month and the day of the year

Ex1: Day 2 is January 2nd
Ex2: Day 32 is February 1st
Ex3: Day 365 is December 31st

-The constructor should take in an integer as a parameter
-There should be a print function
-Have an integer variable to represent the day
-Have static string variables to assist translating the format from int to string 
*/
#include <iostream>
#include <string>
#include <iomanip> //Includes iomanip for the setprecision method


using namespace std;
class DayOfTheYear{
    public:
        DayOfTheYear(int _day){
            baseDay = _day;
        }
    private:
        int baseDay;
};