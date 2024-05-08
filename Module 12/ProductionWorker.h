// Specification file for the ProductionWorker Class

#include "Employee.h"

#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift = 0;	// The worker's shift
	double payRate = 0.0;	// The worker's hourly pay rate

public:
	// Default constructor
	ProductionWorker();

	// Constructor
	ProductionWorker(string aName, int aNumber, string aDate, int aShift, double aPayRate);

	// Mutators
	void setShift(int s);

	void setPayRate(double r);

	// Accessors
	int getShiftNumber() const;

	string getShiftName() const;
	
	double getPayRate() const;
};



/*
The ProductionWorker class should throw an exception named InvalidShift when it receives an invalid shift.

The ProductionWorker class should throw an exception named InvalidPayRate when it receives a negative number 
for the hourly pay rate.
*/