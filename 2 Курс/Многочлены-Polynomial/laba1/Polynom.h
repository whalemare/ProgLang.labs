#pragma once

namespace Program
{

class Polynom
{
private:
	int St;
	int* Kf;
	int degree; // ������� ����������
	int *coefficient = new int[degree]; // ������ � �������������� ����������
	float x1, x2; // ����� ����������

public:
	Polynom(); // �����������

	~Polynom(); // ����������

	//Setters
	void setDegree(int degree); // ������������� ������� ����������

	void setCoefficient(); // ������������� ������������ ����������

	void printPolynom(); // ������� �� ����� ��� ���������

	//Getters
	int getDegree(); // ���������� ������� ����������

	float getX1();	// ���������� 1 ������ ��������� 
	float getX2();	// ���������� 2 ������ ��������� 

	void answering(); // ������ ��������� � ���������� ��� �����
};

}