#include "List.h"
#include <iostream>
using namespace std;
List::~List()
{
	while (HEAD != NULL) // ���� �� ������ ���� ���-�� ����
	{
		Polynom *temp = HEAD->Next; // ������� ��������� �� ����� ���������� �������� ���������
		delete HEAD; // ����������� ������ �� ����� ������ ������
		HEAD = temp; // ������ ����� ������ ������
	}
}

void List::add(Polynom &polynom)
{
	Polynom *temp = new Polynom(); // �������� ������ ��� ����� ������ 
	temp->Next = HEAD; // ������ ����� ������ ������ 

	temp->degree = polynom.degree;
	for (int i = 0; i <= polynom.getDegree(); i++)
		temp->coefficient[i] = polynom.coefficient[i];
	cout << *temp; // ������� ��� ����������

	size++; // ����������� ���������� �������� ������ �� 1
	HEAD = temp; // ������ ����� ������ ������
}

void List::addPos(Polynom polynom, int pos)
{
	if (pos == 0) // ������� � ������
		add(polynom);
	if (pos > 0 && pos < size)
	{
		Polynom* newPolynom = new Polynom();
		newPolynom->degree = polynom.degree;
		newPolynom->coefficient = polynom.coefficient;

		Polynom* temp = new Polynom(), *prev = NULL;

		temp = HEAD;
		for (int i = 0; i < pos; i++)
		{
			prev = temp;
			temp = temp->Next;
		}
		prev->Next = newPolynom;
		//newmass->Next = temp;
		size++;
	}
	// ������� � ����� (0, 1, 2, 3 => size = 4)
	if (pos = size)
	{
		Polynom* newlink = new Polynom();

		newlink->degree = polynom.degree;
		newlink->coefficient = polynom.coefficient;

		newlink->Next = NULL;

		Polynom* temp = new Polynom();

		if (HEAD != NULL)
		{
			temp = HEAD;
			while (temp->Next != NULL)
			{
				temp = temp->Next;
			}
			temp->Next = newlink;
		}
		else
			HEAD = newlink;
	}
	else
	{
		cout << "����������";
		return;
	}
	size++;
}

void List::show()
{
	Polynom *temp = HEAD; // ��������� ��������� � ����� �� ��������� �� ������ ������
	int i = 0;

	while (temp != NULL) // ���� ���� �� ��� ���������
	{
		cout << i << " �������: ";
		cout << *temp;
		cout << endl << endl;

		cout << endl;
		temp = temp->Next;
		i++;
	}
}

void List::pop(int n)
{
	Polynom *temp = HEAD; // ���������� � ������ ������

	if ((HEAD != NULL) && (n <= size) && (n >= 0)) // ���� �� ����� ������ ���-�� ����� � ���� ������� ������ ������
	{
		for (int i = 0; i < n; i++)
			temp = temp->Next;
		cout << *temp;
	}
}

void List::clear()
{
	while (HEAD != NULL) // ���� �� ������ ���� ���-�� ����
	{
		Polynom *temp = HEAD->Next; // ������� ��������� �� ����� ���������� �������� ���������
		delete HEAD; // ����������� ������ �� ����� ������ ������
		HEAD = temp; // ������ ����� ������ ������
	}
}

int List::getSize()
{
	return size;
}

void List::del(int n)
{
	if ((HEAD != NULL) && (n < size) && (n >= 0)) // ���� �� ����� ������ ���-�� ����� � ���� ������� ������ ������
	{
		Polynom *temp = HEAD, *prev = HEAD;

		for (int i = 0; i < n; i++)
		{
			prev = temp; // ���������� �������� temp
			temp = temp->Next;
		}

		if (temp == HEAD) // ���� ������� ������
			HEAD = temp->Next;
		else
			prev->Next = temp->Next;

		cout << "\n��������� �������: " << *temp;
		delete temp;
		size--;
	}
}