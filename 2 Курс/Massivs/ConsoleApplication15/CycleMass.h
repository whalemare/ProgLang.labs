#pragma once
#include "Mass.h"
class CycleMass : public Mass
{
private:
	int size;
	int *buff;
public:
	CycleMass();
	~CycleMass();

	CycleMass(int); // ����������� � ����������

	void add(int); // �������
};

