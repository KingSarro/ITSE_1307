#include "monkey.cpp"
#include <iostream>
#include <string>

class SpiderMonkey : public Monkey {
public:
    SpiderMonkey(){
        SetCanSwim(true);
    }

};

int main() {
    SpiderMonkey monkey;
    monkey.MakeSound();
    cout << monkey.GetLegs();
    cout << monkey.GetCanSwim();
    return 0;
}