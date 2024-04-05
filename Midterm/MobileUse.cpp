/*
Name: Sharri'a Sneed
Course: ITSE 1307
Date: 2-23-24

Average Mobile Use

Write a program that calculates the average number of hours one person spends on their mobile device within a 3 month period. 
The program should ask the user to enter the name of each month, such as June or July, and August, 
then ask the user to type in the number of hours they used each month. The program should display a message similar to the following:

 

Sample Output 

Enter the first month: June

Enter the second month: July

Enter the third month: August

Enter the number of hours spent on your mobile in June
10

Enter the number of hours spent on your mobile in July
5

Enter the number of hours spent on your mobile in August
4.5

The average time spent on your mobile device for June, July, and August is 6.5 hours.

 */

#include <iostream>
#include <iomanip> //Includes iomanip for the setprecision method
#include <vector>

using namespace std;

int main(){

//====Initalize Variables====//
//Base Values
vector<string> monthName(3);
vector<float> averageHoursPerMonth(3);
//newValues
float averageHoursTotal;
//Controller values
unsigned int i;


//====Prompt the user====//
for (i = 0; i < 3; i++){
    if (i == 0){
        cout << "Enter the first month: ";
        cin >> monthName.at(i);
        cout << endl;
    }
    else if (i == 1){
        cout << "Enter the second month: ";
        cin >> monthName.at(i);
        cout << endl;
    }
    else{
        cout << "Enter the third month: ";
        cin >> monthName.at(i);
        cout << endl;
    }  
}

for (i = 0; i < 3; i++){
    cout << "Enter the number of hours spent on your mobile in " << monthName.at(i) << ": ";
    cin >> averageHoursPerMonth.at(i);
    cout << endl;
}

//====Calculations====//
averageHoursTotal = (averageHoursPerMonth.at(0) + averageHoursPerMonth.at(1) + averageHoursPerMonth.at(2))  / 3;

//Displays 
cout << "The average time spent on your mobile device for " << monthName.at(0) << ", " << monthName.at(1) << ", and " << monthName.at(2);
cout << " is " << averageHoursTotal << " hours." << endl;
}