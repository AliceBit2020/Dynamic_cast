#pragma once
#include <iostream>

using namespace std;

class Animal//�� ���� �����������, ��� ���� ��� ����������� � ����� �� ���� ����� ���������� �����

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

	virtual ~Animal() = 0;/////1.����� ���������� ���������� ������� ��� ���� ������ ������� ���� ����������� ��� ����� ���� ����� ������ ���� ������ ������� ����� �����������
	/////2. ���������� �� =0 ������� ��������� ���





};