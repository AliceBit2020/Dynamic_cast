#pragma once


#include "Animal.h"

class Dolphin :public Animal
{

public:
	Dolphin();
    explicit Dolphin(string name);


	void Print()  const override;

	void Swim() const;

	void Move() const override
	{
		cout << "I can swim" << endl;
		Swim();
	}




};
