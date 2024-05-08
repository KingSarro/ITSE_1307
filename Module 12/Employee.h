

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Employee
{
private:
	string name;		// Employee name
	int number;		// Employee number
	string hireDate;	// Hire date

public:
	// Default constructor
	Employee();

	// Constructor
	Employee(string aName, int aNumber, string aDate);

	// Mutators
	void setName(string n);
	
	void setNumber(int n);

	void setHireDate(string date);

	// Accessors
	string getName() const;

	int getNumber() const;

	string getHireDate() const;
};


//The Employee class should throw an exception named InvalidEmployeeNumber when it receives an employee number 
//that is less than 0 or greater than 9999.