#pragma once
#include "Polynom.h"
class DegreeP : public Polynom
{
private:
	static const int n = 5; // ������ �������
	int *massivOfDegree = new int[n]; // ������ ��������

public:
	DegreeP();
	~DegreeP();
};

