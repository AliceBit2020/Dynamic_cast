#include <iostream>
#include"Dolphin.h"
#include "Elephant.h"
#include "Parrot.h"
#include "Animal.h"
using namespace std;


void main()
{
	

	//Animal** arr = new Animal * [3];
	//arr[0] = new Dolphin("Dolphin");
	//arr[1] = new Parrot("Parrot");
	//arr[2] = new Elephant("Elephant");

	////for (int i = 0; i < 3; i++)
	////	arr[i]->Print();///// 

	//arr[0]->Print();///// Dolphin::Print() ���� �� ����� virtual , Animal* arr[0]
	//arr[1]->Print();///// 
	//arr[2]->Print();///// 



	

	////����� ����� �������� �� ����������� ���� ������ �������� ������ ��������  �����(��� virtual)
	////arr[0] �������� �� ������ Dolphin, ��� �� �������� �� Animal*, ���� ���� ������� �� ������ Swim()
	////��������: ����� �������� �� ����������� ���� �� ������ ���������� ������ ���������� �����( ����� �� ������ Swim(),Fly(), Stamp()
	///����� �������� �� ����������� ���� ������ ���� � ������ ���� ��������� � ������������ ����

	///��� ������ ��������
	///1.������ � ����������� ����� �� ������� ������/�������� ���������������� ������������ �����

	///2. ������� ������������ ������������ ���� �� Animal*    ��  Dolphin*, ���������� �� ������ �� ���������� �����

	//arr[0].Swim();

	Animal* a_ptr= new Dolphin("Dolphin");////  ������� ����� ����������, �������� ����� �������� �� ����������� ����
	
	
	Dolphin* ptr = dynamic_cast<Dolphin*>(a_ptr);//////   �������� ����� ����������  ,������������ �� ������������ ����� �� ����������

	if (ptr)
	{
		ptr->Print();
		ptr->Swim();
	}


	Parrot* ptrParrot= dynamic_cast<Parrot*>(a_ptr);/////  return 0

	Parrot* ptrParrot1 = static_cast<Parrot*>(a_ptr);

	if (ptrParrot != nullptr)
	{
		ptrParrot->Fly();
	}
	else
		cout << "dynamic_cast<Parrot*>  Dolphin return 0" << endl;
	
	ptrParrot1->Fly();


	////��� �� ���������� �� ���������� ��������� �� Animal* � ���������� �� ����������� ���������� Dolphin* ptr, ��� ����� �� ���������� �� ��� �������������� �������������
	///  ������� ����� ����������



	/*
	������������ ������������-������������ ��������� ���� ������ �� ���� �������(���� 
	�������� �� ������ ����� �������� �� �������)
	1. ���� ������������ �� ������� - ������� 0 , � �� �������
	2. ������������ ������� ��� ���������� ���� (������� ���� �� ������ ���������� �����)
	2.a ������������ ������� ��� ����������� � �������������� public
	3. ������������ ������� �� 0 :
	
-	Base* ptr =new Child();
	Cild* ptr_ch=dynamic_cast<Child*>(ptr)

	4. ������� 0

	Base* ptr =new Base();
	Cild* ptr_ch=dynamic_cast<Child*>(ptr)
	*/


}