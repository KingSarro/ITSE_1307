//#include <iostream>
//#include <string>
//#include <stdexcept>
// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Employee.h"


	// Default constructor
	Employee::Employee()
		{ name = ""; number = 0; hireDate = ""; }

	// Constructor
	Employee::Employee(string aName, int aNumber, string aDate)
	{ 
		try{
			if(aNumber < 0 || aNumber > 9999){
				throw invalid_argument("Invalid Employee Number");
			}

			name = aName; 
			number = aNumber; 
			hireDate = aDate;
		}
		catch(invalid_argument invalid){
			cout << invalid.what() << endl;
            exit(1);
		} 
	}

	// Mutators
	void Employee::setName(string n)
		{ name = n; }

	void Employee::setNumber(int num)
	{ 
		try{
			if(num < 0 || num > 9999){
				throw invalid_argument("Invalid Employee Number");
			}

			number = num;
		}
		catch(invalid_argument invalid){
			cout << invalid.what() << endl;
            exit(1);
		}
	}

	void Employee::setHireDate(string date)
		{ hireDate = date; }

	// Accessors
	string Employee::getName() const
		{ return name; }

	int Employee::getNumber() const
		{ return number; }

	string Employee::getHireDate() const
		{ return hireDate; }
		
#endif