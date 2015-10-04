#pragma once

namespace Program
{

class Polynom
{
private:
	int St;
	int* Kf;
	int degree; // ������� ����������
	int *coefficient = new int[degree + 1]; // ������ � �������������� ����������

public:
	Polynom(); // �����������

	~Polynom(); // ����������

	//Setters
	void setDegree(int degree); // ������������� ������� ����������

	void setCoefficient(); // ������������� ������������ ����������

	void printPolynom(); // ������� �� ����� ��� ���������

	//Getters
	int getDegree(); // ���������� ������� ����������
};

}