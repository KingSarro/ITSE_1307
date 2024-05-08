/*
Name: Sharri'a Sneed
Date: 4-23-24
class: ITSE 2331

Design a save1 class that can hold information and calculate data for customers at a local bank. The class should have the following private member variables:

-balance                        //double holds the amount of money in the savings
-numWidthdraws         //int number of withdraws made
-numDeposits               //int number of deposits made
-interestRate                 //double holds the interest rate

-The class should have a default constructor and four parameter constructor for each of the four private members.

-The class should have accessors (getters) and mutators (setters) for each private member variable.

-The class should have a function named getTransactionCount that takes two parameters 
to add the number of withdraws and number of deposits and returns the integer result.
*/

#include <iostream>

using namespace std;

class MySaving{
    public:
        //Constructors
        MySaving(){
            balance = 0.0;
            numWidthdraws = 0;
            numDeposits = 0;
            interestRate = 0.0;
        }
        MySaving(double _balance, int _withdrawls, int _deposits, double _interestRate){
            balance = _balance;
            numWidthdraws = _withdrawls;
            numDeposits = _deposits;
            interestRate = _interestRate;
        }
        //Setters
        void SetBalance(double _balance){
            balance = _balance;
        }
        void SetWithdraws(int _withdrawls){
            numWidthdraws = _withdrawls;
        }
        void SetDeposits(int _deposits){
            numDeposits = _deposits;
        }
        void SetInterestRate(double _interestRate){
            interestRate = _interestRate;
        }
        //Getters
        double GetBalance(){
            return balance;
        }
        int SetWithdraws(){
            return numWidthdraws;
        }
        int GetDeposits(){
            return numDeposits;
        }
        double GetInterestRate(){
            return interestRate;
        }
        int GetTransactionCount(int _numWidthdraws, int _numDeposits){
            //The class should have a function named getTransactionCount that takes two parameters 
            //to add the number of withdraws and number of deposits and returns the integer result.
            numWidthdraws += _numWidthdraws;
            numDeposits += _numDeposits;

            return numWidthdraws + numDeposits;
        }
    private:
        double balance;
        int numWidthdraws;
        int numDeposits;
        double interestRate;
};

int main(){
    MySaving save1;
    save1.SetBalance(1000);
    save1.SetWithdraws(10);
    save1.SetDeposits(10);
    save1.SetInterestRate(0.05);

    cout << "Balance: " << save1.GetBalance() << endl;
    cout << "Withdraws: " << save1.SetWithdraws() << endl;
    cout << "Deposits: " << save1.GetDeposits() << endl;
    cout << "Interest Rates: " << save1.GetInterestRate() << endl;
    cout << "New Transaction Count: " << save1.GetTransactionCount(10, 10) << endl;

    return 0;
}