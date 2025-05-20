#include "Animal.h"

Animal::Animal()
{
	name = "Unknown";
}

Animal::Animal(string name)
{
	this->name = name;
}

void Animal::Print() const
{
	cout << name << endl;
}

string Animal::GetName() const
{
	return name;
}

Animal::~Animal(){}/////тіло деструктора фрмально існує
