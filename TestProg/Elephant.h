#pragma once

#include "Animal.h"

class Elephant : public Animal
{

public:
	Elephant();
	Elephant(string name);


	void Print() const override;
	void Stamp() const;

	void Move()  const override
	{
		cout << "I can stamp" << endl;
		Stamp();
	}


};