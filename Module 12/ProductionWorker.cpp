//#include "Employee.h"
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "ProductionWorker.h"

//#include <iostream>
//#include <string>
//#include <stdexcept>

	// Default constructor
	ProductionWorker::ProductionWorker() : Employee()
		{ shift = 0; payRate = 0.0; }

	// Constructor
	ProductionWorker::ProductionWorker(string aName, int aNumber, string aDate, int aShift, double aPayRate) : Employee(aName, aNumber, aDate)
	{
		try{
			if(aShift != 1 || aShift != 2){
				throw invalid_argument("Invalid Shift");
			}
			if(aPayRate < 0){
                throw invalid_argument("Invalid Pay Rate");
            }
		}
		catch(invalid_argument invalid){
			cout << invalid.what() << endl;
            exit(1);
		}
		shift = aShift; 
		payRate = aPayRate; 
	}

	// Mutators
	void ProductionWorker::setShift(int s)
	{ 
		try{
			if(s != 1 || s != 2){
				throw invalid_argument("Invalid Shift");
			}
		}
		catch(invalid_argument invalid){
			cout << invalid.what() << endl;
            exit(1);
		}
		shift = s; 
	}

	void ProductionWorker::setPayRate(double r)
	{ 
		try{
			if(r < 0){
				throw invalid_argument("Invalid Pay Rate");
			}
		}
		catch(invalid_argument invalid){
			cout << invalid.what() << endl;
            exit(1);
		}
		payRate = r; 
	}

	// Accessors
	int ProductionWorker::getShiftNumber() const
		{ return shift; }

	string ProductionWorker::getShiftName() const
		{ if (shift == 1)
			 return "Day";
		  else if (shift == 2)
			 return "Night";
		  else
			return "Invalid";
		}
	
	double ProductionWorker::getPayRate() const
		{ return payRate; }

#endif
