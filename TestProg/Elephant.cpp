#include "Elephant.h"

Elephant::Elephant():Animal()
{
}

Elephant::Elephant(string name):Animal(name)
{
}

void Elephant::Print() const
{
	Animal::Print();
	cout << "Elephant Info" << endl;
}

void Elephant::Stamp() const
{
	cout << "It can stamp" << endl;
}
