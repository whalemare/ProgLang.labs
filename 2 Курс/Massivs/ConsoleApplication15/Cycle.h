#pragma once
#include "Mass.h"

class Cycle : Mass
{
private:
	int size;
	int *buff;
public:
	Cycle();
	~Cycle();

	Cycle(int); // ������������� 
	void add(int); // �������
	friend ostream &operator<<(ostream&, const Cycle&); //������������� �������� ��� ������ �������

};

