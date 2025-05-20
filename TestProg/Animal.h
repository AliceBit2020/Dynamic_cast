#pragma once
#include <iostream>

using namespace std;

class Animal//має бути абстрактним, щоб клас був абстрактним в ньому має бути чисто віртуальний метод

	/////   
{
	string name;


public:

	Animal();
	Animal(string name);

	virtual void Print() const;
	string GetName() const;
	
	//virtual void Fly() const = 0;
	//virtual void Swim() const = 0;
	//virtual void Stamp() const = 0;


	virtual void Move() const = 0;   //// 

	virtual ~Animal() = 0;/////1.чисто віртуальний деструктор потрібен тоді коли хочемо зробити клас абстрактним при цьому нема інших методів котрі хочемо зробити чисто віртуальними
	/////2. незважаючи на =0 потрібно прописати тіло





};