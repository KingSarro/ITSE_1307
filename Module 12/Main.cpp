/*
Name: Sharri'a Sneed
Date: 5-3-24
class: ITSE 2331

This assignment assumes you have completed Employee and ProductionWorker Classes.

Modify the Employee and ProductionWorker classes so they throw exceptions when the following errors occur:

The Employee class should throw an exception named InvalidEmployeeNumber when it receives an employee number 
that is less than 0 or greater than 9999.

The ProductionWorker class should throw an exception named InvalidShift when it receives an invalid shift.

The ProductionWorker class should throw an exception named InvalidPayRate when it receives a negative number 
for the hourly pay rate.

Write a driver program (main function) that demonstrates how each of these exception conditions works.
*/

#include "Employee.h"
#include "ProductionWorker.h"

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main(){
    TestEmployeeDefaultConstructor(); // default
    TestEmployeeOverloadedConstructor(); // overloaded
    TestProductionWorkerDefaultConstructor(); // default
    TestProductionWorkerOverloadedConstructor(); // overloaded
}

void TestEmployeeDefaultConstructor(){
    Employee e1();
    Employee e2();

    e1.setName("Sharri\'a");
    e1.setNumber(1234);
    e1.setHireDate("1/2/34");

    cout << "Employee Name: " << e1.getName() << endl;
    cout << "Employee Number: " << e1.getNumber() << endl;
    cout << "Employee Hire Date: " << e1.getHireDate() << endl;

    e2.setName("Sarro");
    e2.setNumber(18749);
    e2.setHireDate("3/3/33");

    cout << "Employee Name: " << e2.getName() << endl;
    cout << "Employee Number: " << e2.getNumber() << endl;
    cout << "Employee Hire Date: " << e2.getHireDate() << endl;
}
void TestEmployeeOverloadedConstructor(){
    Employee e3("Sharri\'a", 1234, "1/2/34");

    cout << "Employee Name: " << e3.getName() << endl;
    cout << "Employee Number: " << e3.getNumber() << endl;
    cout << "Employee Hire Date: " << e3.getHireDate() << endl;

    Employee e4("Sarro", 18749, "3/3/33");

    cout << "Employee Name: " << e4.getName() << endl;
    cout << "Employee Number: " << e4.getNumber() << endl;
    cout << "Employee Hire Date: " << e4.getHireDate() << endl;

}

void TestProductionWorkerDefaultConstructor(){
    ProductionWorker e5();
    ProductionWorker e66();
    
    e5.setName("Sharri\'a");
    e5.setNumber(1234);
    e5.setHireDate("1/2/34");
    e5.setShift(1);
    e5.setPayRate(15.0);

    cout << "Employee Name: " << e5.getName() << endl;
    cout << "Employee Number: " << e5.getNumber() << endl;
    cout << "Employee Hire Date: " << e5.getHireDate() << endl;
    cout << "Employee Shift: " << e5.getShift() << endl;
    cout << "Employee Pay Rate: " << e5.getPayRate() << endl;

    e6.setName("Sarro");
    e6.setNumber(18749);
    e6.setHireDate("3/3/33");
    e6.setShift(5);
    e6.setPayRate(-15.0);

    cout << "Employee Name: " << e6.getName() << endl;
    cout << "Employee Number: " << e6.getNumber() << endl;
    cout << "Employee Hire Date: " << e6.getHireDate() << endl;
    cout << "Employee Shift: " << e6.getShift() << endl;
    cout << "Employee Pay Rate: " << e6.getPayRate() << endl;
}
void TestProductionWorkerOverloadedConstructor(){
    ProductionWorker e7("Sharri\'a", 1234, "1/2/34", 1, 15.0);

    cout << "Employee Name: " << e7.getName() << endl;
    cout << "Employee Number: " << e7.getNumber() << endl;
    cout << "Employee Hire Date: " << e7.getHireDate() << endl;
    cout << "Employee Shift: " << e7.getShift() << endl;
    cout << "Employee Pay Rate: " << e7.getPayRate() << endl;

    ProductionWorker e8("Sarro", 18749, "3/3/33", 5, -15.0);

    cout << "Employee Name: " << e8.getName() << endl;
    cout << "Employee Number: " << e8.getNumber() << endl;
    cout << "Employee Hire Date: " << e8.getHireDate() << endl;
    cout << "Employee Shift: " << e8.getShift() << endl;
    cout << "Employee Pay Rate: " << e8.getPayRate() << endl;
}