#include "animal.cpp"
#include <iostream>
#include <string>

class Monkey : public Animal {
public:
    Monkey(){
        SetLegs(2);
        SetCanSwim(false);
    }
    void MakeSound(){
        cout << "oo oo ah ah" << endl;
    }
};

int main() {
    Monkey monkey;
    monkey.MakeSound();
    cout << monkey.GetLegs();
    cout << monkey.GetCanSwim();
    return 0;
}