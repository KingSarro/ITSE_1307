/*
Name: Sharri'a Sneed
Date: 4-22-24
class: ITSE 2331


Design a class named PersonData with the following member variables:

-lastName
-firstName
-address
-city
-state
-zip
-phone

Write the appropriate accessor and mutator functions for these member variables.

*******************************************************************************************************************************

Next, design a class named CustomerData, which is derived from the PersonData class. 
The CustomerData class should have the following member variables:

-customerNumber
-mailingList

The customerNumber variable will be used to hold a unique integer for each customer. 
The mailingList variable should be a bool. 
It will be set to true if the customer wishes to be on a mailing list, 
or false if the customer does not wish to be on a mailing list. 
Write appropriate accessor and mutator functions for these member variables. 
Demonstrate an object of the CustomerData class in a simple program.

Implement all Setters and setters for each data member. 
Implement a default constructor and 9 parameter constructor. 

For this assignment be sure to demonstrate your constructors, Setters, setters, and special functions. 

***********************************************************************************************************************

Sample Output: Input
--------------------------------------
Please enter the first name: Jake
Please enter the last name: State
Please enter the address: 123 Elm St.
Please enter the city: Houston
Please enter the state: TX
Please enter the zip code: 77582-4568
Please enter the phone number: (555) 555 - 5555
Please enter the customer number: 112358
Would the customer like to be added to mailing list: Yes

********************************************************

First Name: Jake
Last Name: State
Address: 123 Elm St Houston TX, 77582-4568
Phone Number: (555) 555 - 5555
Customer Number: 112358
The customer is on the mailing list.
*/
#include <iostream>
#include <string>

using namespace std;

class PersonData{
    public:
        void SetFullName(string _firstName, string _lastName){
            firstName = _firstName;
            lastName = _lastName;
        }
        void SetAddress(string _address, string _city, string _state, string _zipCode){
            address = _address;
            city = _city;
            state = _state;
            zipCode = _zipCode;
        }
        void SetPhoneNumber(string _phoneNumber){
            phoneNumber = _phoneNumber;
        }

        void PrintInformation(){
            cout << "First Name: " << firstName << endl;
            cout << "Last Name: " << lastName << endl;
            cout << "Address: " << address << " " << city << " " << state << ", " << zipCode << endl;
            cout  << endl << "Phone Number: " << phoneNumber << endl;
        }
    protected:
        
    private:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zipCode;
        string phoneNumber;
};

class CustomerData : public PersonData{
    public:
        void SetCustomerNumber(int _customerNumber){
            customerNumber = _customerNumber;
        }
        void SetMailingList(bool _mailingList){
            mailingList = _mailingList;
        }
        void PrintInformation(){
            //Calls parent class PrintInformation method
            PersonData::PrintInformation();
            cout << "Customer Number: " << customerNumber << endl;
            //Checks if to display if the user is on the mailing list or not
            string m;
            m = (mailingList == true) ? "The customer is on the mailing list.": "";
            cout << m << endl;
        }
    private:
        int customerNumber;
        bool mailingList;
};

int main(){
    //Variables for the Customer class
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zipCode;
    string phoneNumber;
    int customerNumber;
    string mailingList;
    bool isOnMailingList;

    string stringToNum;

    //Creates a PersonData object
    CustomerData c1;

    cout << "Please enter the first name: " ;
    cin >> firstName;

    cout << endl << "Please enter the last name: " ;
    cin >> lastName;

    cout << endl << "Please enter the address: " ;
    getline(cin, address);
    getline(cin, address);

    cout << endl << "Please enter the city: " ;
    cin >> city;

    cout << endl << "Please enter the state: " ;
    cin >> state;

    cout << endl << "Please enter the zip code: " ;
    getline(cin, zipCode);
    getline(cin, zipCode);

    cout << endl << "Please enter the phone number: " ;
    getline(cin, phoneNumber);
    
    cout << endl << "Please enter the custom number: " ;
    cin >> stringToNum;
    customerNumber = stoi(stringToNum);

    cout << endl << "Would the customer like to be added to the mailing list? (type Yes or No):  ";
    cin >> mailingList;
    if( mailingList.compare("Yes") == 0 || mailingList.compare("yes") == 0){
        isOnMailingList = true;
    }
    else{
        isOnMailingList = false;
    }

    cout << endl;


    //Calls all the Setter Methods
    c1.SetFullName(firstName, lastName);
    c1.SetAddress(address, city, state, zipCode);
    c1.SetPhoneNumber(phoneNumber);
    c1.SetCustomerNumber(customerNumber);
    c1.SetMailingList(isOnMailingList);

    c1.PrintInformation();

    return 0;
}