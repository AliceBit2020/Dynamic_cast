#include "Parrot.h"

Parrot::Parrot():Animal()
{
}

Parrot::Parrot(string name):Animal(name)
{
}

void Parrot::Print() const
{
	Animal::Print();
	cout << "Parrot Info" << endl;
}

void Parrot::Fly()
{
	cout << "It can fly" << endl;
}
