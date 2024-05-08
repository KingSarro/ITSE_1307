//#include "stdafx.h"
#include <iostream>
#include <stdexcept>
using namespace std;

class Animal
{
protected:
    void SetLegs(int l){
		try{
            if (l < 0){
				throw invalid_argument("Invalid number of legs");
			}
			legs = l;
		}
		catch(invalid_argument e){
            cout << e.what() << endl;
			legs = 0;
        }
	}
	void SetCanSwim(bool s){
		canSwim = s;
	}
private: 
	int legs;
	bool canSwim;
public:
	Animal()
	{
		legs = 0;
	}
	virtual void MakeSound() 
	{ 
		cout << "rawr" << endl; 
	}
	int GetLegs()
	{
		return legs;
	}
	bool GetCanSwim(){
		return canSwim;
	}
};
int main()
{
	Animal animal;
	animal.MakeSound();
	cout << animal.GetLegs() << endl;
	cout << animal.GetCanSwim() << endl;
    return 0;
}