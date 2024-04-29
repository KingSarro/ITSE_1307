/*
Name: Sharri'a Sneed
Date: 4-23-24
class: ITSE 2331

Design an inventory class that can hold information and calculate data items in a retail store
private members needed:
-item number
-quantity
-cost
-total cost

public members needed:
-Default constructor
-Second Constructor (Accept item number, cost, and quantity)
-Get / Set Item Number
-Get / Set Quantity
-Get / Set Cost
-Get Total Cost
*/
#include <iostream>
#include <string>
#include <iomanip> //Includes iomanip for the setprecision method


using namespace std;

class Inventory{
    public:
        //Constructors
        Inventory(){
            int itemNumber = 0;
            int quantity = 0;
            double cost = 0.0;
            double totalCost = 0.0;
        }
        Inventory(int _itemNumber, int _quantity, double _cost){
            while(_itemNumber < 0){
                cout << "Item number cannot be negative" << endl;
                cout << "Enter a new number: ";
                cin >> _itemNumber;
                cout << endl;
            }
            while(_quantity < 0){
                cout << "Quantity cannot be negative" << endl;
                cout << "Enter a new number: ";
                cin >> _quantity;
                cout << endl;
            }
            while(_cost < 0){
                cout << "Cost cannot be negative" << endl;
                cout << "Enter a new number: ";
                cin >> _cost;
                cout << endl;
            }


            itemNumber = _itemNumber;
            quantity = _quantity;
            cost = _cost;
            SetTotalCost();
        }
        //Getters
        int GetItemNumber(){
            return itemNumber;
        }
        int GetQuantity(){
            return quantity;
        }
        double GetCost(){
            return cost;
        }
        double GetTotalCost(){
            return totalCost;
        }
        //Setters
        void SetItemNumber(int _itemNumber){
            while(_itemNumber < 0){
                cout << "Item number cannot be negative" << endl;
                cout << "Enter a new number: ";
                cin >> _itemNumber;
                cout << endl;
            }
            itemNumber = _itemNumber;
        }
        void SetQuantity(int _quantity){
            while(_quantity < 0){
                cout << "Quantity cannot be negative" << endl;
                cout << "Enter a new number: ";
                cin >> _quantity;
                cout << endl;
            }
            quantity = _quantity;
        }
        void SetCost(double _cost){
            while(_cost < 0){
                cout << "Cost cannot be negative" << endl;
                cout << "Enter a new number: ";
                cin >> _cost;
                cout << endl;
            }
            cost = _cost;
        }
        void SetTotalCost(){
            totalCost = quantity * cost;
        }    
    private:
        int itemNumber;
        int quantity;
        double cost;
        double totalCost;
};

int main(){
    Inventory item1;

    item1.SetItemNumber(-12345);
    item1.SetQuantity(-10);
    item1.SetCost(-2.50);
    item1.SetTotalCost();

    cout << "Item Number: " << item1.GetItemNumber() << endl;
    cout << "Quantity: " << item1.GetQuantity() << endl;
    cout << fixed << setprecision(2);
    cout << "Price: $" << item1.GetCost() << endl;
    cout << "Total Cost: $" << item1.GetTotalCost() << endl;

    cout << endl << "*********************************" << endl;

    Inventory item2(12345, 10, 12.99);

    cout << "Item Number: " << item2.GetItemNumber() << endl;
    cout << "Quantity: " << item2.GetQuantity() << endl;
    cout << fixed << setprecision(2);
    cout << "Price: $" << item2.GetCost() << endl;
    cout << "Total Cost: $" << item2.GetTotalCost() << endl;
}