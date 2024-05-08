//#include "stdafx.h"
#include <iostream>
using namespace std;

class Animal
{
private: 
	int legs;
public:
	Animal()
	{
		legs = 0;
	}
	virtual void makeSound() 
	{ 
		cout << "rawr" << endl; 
	}
	int getLegs()
	{
		return legs;
	}
};
int main()
{
	Animal animal;
	animal.makeSound();
	cout << animal.getLegs() << endl;
}