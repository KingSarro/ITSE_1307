#include "animal.cpp"
#include <iostream>
#include <string>

class Kangaroo : public Animal {
public:
    Kangaroo(){
        SetLegs(2);
        SetCanSwim(false);
    }
    void MakeSound(){
        cout << "cough" << endl;
    }
};

int main() {
    Kangaroo roo;
    roo.MakeSound();
    cout << roo.GetLegs();
    cout << roo.GetCanSwim();
    return 0;
}