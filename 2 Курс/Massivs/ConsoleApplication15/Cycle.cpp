#include "stdafx.h"
#include "Cycle.h"


Cycle::Cycle()
{
}


Cycle::~Cycle()
{
}

Cycle::Cycle(int a)
{
	buff = new int[a];
	Cycle::size = a;
	size = a;
}

void Cycle::add(int add) // add = ���-�� ����������� ���������
{
	int number;
	for (int i = 0; i < add; i++)
	{
		if (i >= size)
		{
			add = add - size;
			i = 0;
		}
		cout << "�� ������� ������� ��� ������� " << i << endl;
		cin >> number;
		buff[i] = number;
	}

}

ostream& operator<<(ostream &out, const Cycle &a) {
	if (a.size <= 0) // ���� ������ ����
		out << "������ ����";
	else
		for (int i = 0; i < a.size; ++i)
			out << a.buff[i]; // ������� �������� �������
	return out;
}
