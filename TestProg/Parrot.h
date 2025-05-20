#pragma once


#include "Animal.h"

class Parrot :public  Animal
{

public:
	Parrot();
	Parrot(string name);


	virtual void Print() const;
	void Fly() const;

	void Move() const override
	{
		cout << "I can fly" << endl;
		Fly();
	}


};