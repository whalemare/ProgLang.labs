#include <iostream>
#include "Polynom.h"
using namespace std;
using Program::Polynom;

int main()
{
	Polynom polynom;

	setlocale(LC_ALL, "Russian");

	int degree; // ������� ����������
	cout << "������� ������� ����������: ";
	cin >> degree;
	polynom.setDegree(degree);
	
	cout << "������� ������������: " << endl;
	polynom.setCoefficient();
	
	system("cls");
	polynom.printPolynom(); // ����������� ���  ���������

	polynom.answering();

	system("pause");
	return 0;
}