// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes
//#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class PersonData
{
private:
	string lastName;     // The person's last name
	string firstName;    // The person's first name
	string address;      // The person's address
	string city;         // The person's city
	string state;        // The person's state
	string zip;          // The person's ZIP code

public:

	//**********************************************
	// Constructor                                 *
	//**********************************************

	PersonData(string ln, string fn, string addr,
		string c, string s, string z)
	{
		lastName = ln;
		firstName = fn;
		address = addr;
		city = c;
		state = s;
		zip = z;
	}

	//**********************************************
	// Default Constructor                         *
	//**********************************************

	PersonData()
	{
		lastName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		zip = "";
	}

	//**********************************************
	// Mutator functions                           *
	//**********************************************

	void setLastName(string ln)
	{
		lastName = ln;
	}

	void setFirstName(string fn)
	{
		firstName = fn;
	}

	void setAddress(string addr)
	{
		address = addr;
	}

	void setCity(string c)
	{
		city = c;
	}

	void setState(string s)
	{
		state = s;
	}

	void setZip(string z)
	{
		zip = z;
	}

	//**********************************************
	// Accessor functions                          *
	//**********************************************

	string getLastName() const
	{
		return lastName;
	}

	string getFirstName() const
	{
		return firstName;
	}

	string getAddress() const
	{
		return address;
	}

	string getCity() const
	{
		return city;
	}

	string getState() const
	{
		return state;
	}

	string getZip() const
	{
		return zip;
	}
};

class CustomerData : public PersonData
{
private:
	int customerNumber;     // Customer number
	bool mailingList;       // Include in mailing list?

public:

	//**********************************************
	// Constructor                                 *
	//**********************************************

	CustomerData(string ln, string fn, string addr,
		string c, string s, string z, int cn,
		bool ml) :
		PersonData(ln, fn, addr, c, s, z)
	{
		customerNumber = cn;
		mailingList = ml;
	}

	//**********************************************
	// Default Constructor                         *
	//**********************************************

	CustomerData() : PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}

	//**********************************************
	// Mutator functions                           *
	//**********************************************

	void setCustomerNumber(int cn)
	{
		customerNumber = cn;
	}

	void setMailingList(bool ml)
	{
		mailingList = ml;
	}

	//**********************************************
	// Accessor functions                          *
	//**********************************************

	int getCustomerNumber()
	{
		return customerNumber;
	}

	bool getMailingList()
	{
		return mailingList;
	}
};



////////// Function prototype
void displayCustomer(CustomerData);

int main()
{
	// Create a CustomerData object and pass arguments
	// to the constructor.
	CustomerData customer1("Smith", "Joan", "123 Main Street",
		"Smithville", "NC", "99999", 12345,
		true);
	
	// Display the object's data.
	cout << "Customer #1\n"
		<< "-----------\n";
	displayCustomer(customer1);

	// Create another CustomerData object using the default
	// constructor and mutator functions.
	CustomerData customer2;
	customer2.setLastName("Jones");
	customer2.setFirstName("Jenny");
	customer2.setAddress("555 East Street");
	customer2.setCity("Jonesville");
	customer2.setState("VA");
	customer2.setZip("88888");
	customer2.setCustomerNumber(77777);
	customer2.setMailingList(false);
	
	

	// Display the object's data.
	cout << "Customer #2\n"
		<< "-----------\n";


	displayCustomer(customer2);


	return 0;
}

void displayCustomer(CustomerData c)
{
   // Display all the data but mailing list...
   cout << "Last Name: " << c.getLastName() << endl
        << "First Name: " << c.getFirstName() << endl
        << "Address: " << c.getAddress() << endl
        << "City: " << c.getCity() << endl
        << "State: " << c.getState() << endl
        << "ZIP: " << c.getZip() << endl 
        << "Customer Number: " 
        << c.getCustomerNumber() << endl
	    << "Purchase Amount"  
        << "Mailing List? ";

	   // Dispaly Yes or No for mailing list.
	   if (c.getMailingList())
			cout << "Yes\n\n";
	   else
			 cout << "No\n\n";


  
   
}