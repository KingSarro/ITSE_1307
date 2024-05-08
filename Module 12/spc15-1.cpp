// Chapter 15, Programming Challenge 1: Employee and ProductionWorker classes
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
	ProductionWorker pw("John Jones", "123", "10/12/2010", 2, 18.00);
	displayInfo(pw);
	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	cout << "Shift: " 
		 << e.getShiftName() << endl;
	cout << "Shift number: " 
		 << e.getShiftNumber() << endl;
	cout << "Pay rate: " 
		 << e.getPayRate() << endl;
}