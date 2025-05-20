#include "Dolphin.h"

Dolphin::Dolphin():Animal()
{
}

Dolphin::Dolphin(string name):Animal(name)
{
}

void Dolphin::Print() const
{
	Animal::Print();
	cout << "Dolphin Info" << endl;
}

void Dolphin::Swim() const
{
	cout << "It can swim" << endl;
}
