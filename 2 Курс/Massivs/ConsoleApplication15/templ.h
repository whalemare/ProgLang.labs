#pragma once
#include <iostream>
using namespace std;

template <class T>
class templ
{
public:
	templ();
	~templ();

	T massiv[4]; // ������� ������ � 4 ��������� � ������ ����
	int size=0; // ������� ����������� ���������
	void add(T const &item); // ����� � ������� �� ���������� ���� � �� �������
	void show(); // ����� ��� ����������� �� ������ ��������� �������

};

template<class T> templ<T>::templ()
{
	size = 0;
}

template<class T> templ<T>::~templ()
{
}

template<class T>
void templ<T>::add(T const &item)
{
	if (size != 5)
	{
		massiv[size] = item;
		size++;
	}
	else
	{
		cerr << "������ �����";
	}
}

template<class T>
void templ<T>::show()
{
	cout << "����������\n";
	for (int i = 0; i < size; i++)
		cout << massiv[i] << endl;
}

