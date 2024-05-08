#include "personCustomer.cpp"  // Include the PersonCustomer.cpp file

#include <string>
#include <stdexcept>
#include <iostream>

using namespace std;

class RewardCustomer : public PersonCustomer {
public:
    // Add RewardCustomer specific methods and members here
    public:
        RewardCustomer();
        void SetPurchaseAmount(int i);
        void SetCouponSubscription(bool hasSubscription);
        int GetPurchasesAmount();
        int GetCouponSubscription();
    private:
        double purchasesAmount;
        bool couponSubscription;
};

RewardCustomer::RewardCustomer() {
    purchasesAmount = 0;
    couponSubscription = false;
}

void RewardCustomer::SetPurchaseAmount(int purchase){
    try{
        if(purchase < 0){
            purchasesAmount = 0;
            throw invalid_argument("Purchase amount cannot be negative");
        }
    }
    catch(invalid_argument& e){
        cout << e.what() << endl;
        exit(1);
    }

    purchasesAmount = purchase;  
}

void RewardCustomer::SetCouponSubscription(bool hasSubscription){
    couponSubscription = hasSubscription;
}
int RewardCustomer::GetPurchasesAmount(){
    return purchasesAmount;
}

int RewardCustomer::GetCouponSubscription(){
    return couponSubscription;
}

int main() {
    RewardCustomer c;
    c.SetPurchaseAmount(1000);
    c.SetCouponSubscription(true);
    cout << c.GetPurchasesAmount() << endl;
    cout << c.GetCouponSubscription() << endl;
    return 0;
}