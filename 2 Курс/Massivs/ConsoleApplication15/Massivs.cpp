#include "stdafx.h"
#include "Mass.h"
#include "Revert.h"
#include "Cycle.h"
#include <stdlib.h> // ��� system("pause");
#include <locale.h> // ��� ������� �������
#include <stdio.h>
#include "List.h"
#include <iostream>
#include <fstream> // ��� �����
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	/*
	int n; 

	cout << "������� ������ ��������: ";

	cin >> n;
	Mass x(n);

	cout << "������� �������� ������� 1:\n ";
	cin >> x;
	cout << "������: " << x << endl << endl;


	int a;
	cout << "����� ������� ������: ";
	cin >> a;
	cout << "������� ����� " << x.find(a) << endl << endl;

	cout << "������� ������� � �������� ";
	cin >> a;
	x.del(a);
	cout << "������: " << x << endl << endl;

	int b;
	cout << "�������� ������� ";
	cin >> a;
	cout << "��� �������� ";
	cin >> b;
	x.ins(b, a);
	cout << "������: " << x << endl << endl;

	cout << "�������� ������� �������: ";
	cin >> b;
	cout << "���������: ";
	cin >> a;
	x.rep(b, a);
	cout << "������: " << x << endl << endl;


	cout << "��������� ��� �������� ������� �� 1\n" ;
	cout << ++x;



	Mass x2(n);
	cout << "\n������� �������� ������� 2:\n";
	cin >> x2;
	cout << "������: " << x2 << endl << endl;

	cout << "C������ ��� �������\n";
	cout << x + x2;

	cout << "\n������� �������� ������� ������� �� ��������� ������� �������\n";
	cout << x - x2;

	cout << "����������� �������� ������� ������� � ���� mass.txt\n";
	ofstream f; 
	// ��������� ���� ��� ������
	f.open("mass.txt");
	if (!f)
	{
		cerr << "������ �������� �����";
		system("pause");
		system("cls");
	}
	else
		f << x2;
	f.close();

	cout << "������ � ����� ������ �������� �� ����� mass.txt\n";
	Mass newMas;
	ifstream ifs;
	ifs.open("mass.txt");
	if (!ifs)
	{
		cerr << "������ �������� �����";
		system("pause");
		system("cls");
	}
	else
		ifs >> newMas;
	system("pause");
	cout << endl << endl << (newMas=x2);

	cout << "������������ ������ �4\n";
	int sizeMassiv;
	cout << "������� ����������� ������ ��������: "; cin >> sizeMassiv;
	Cycle cycleMass(sizeMassiv);
	cout << "������ � ���� N-�� ���-�� ����. \n������� ����� ������� ��� �������, ����� ������� ������ ������������ �������.\n";
	int nNumbers; // ���-�� �������� ����
	cin >> nNumbers;
	cycleMass.add(nNumbers);

	cout << endl;
	cout << "\n ��� ������: " << cycleMass;
	system("pause");
	system("cls");

	cout << "������� ������-������� ��������: "; cin >> sizeMassiv;
	Revert revetMass;
	revetMass.entered(sizeMassiv);
	system("cls");

	cout << "������ � �������: " << revetMass.getFront() << endl;

	cout << "��������� � �������: " << revetMass.getBack() << endl;

	cout << "��� ������� �������: \n";
	revetMass.print();

	*/

cout << "������������ ������ �5\n\n";

List list; // �������� ������ ������;
int n; // ������ �������
int k; // ����� ��������

cout << "������� ���������� �������� ��������: ";
cin >> k;

cout << "������� ������� ��������: ";
cin >> n;
Mass massiv(n); // ������� ������ ������

for (int i = 0; i < k; i++)
{
	cin >> massiv; // ������ �������� �������
	list.add(massiv); // ������� �� � ������
}

cout << endl;
list.show(); // ������� ��� ������ ���������


	cout << "������� ����� �������� ������� ����� �������: \n";
	cin >> n; cout << endl;
	list.pop(n);
	cout << endl;


//	cout << "������� ����� �������� ������� ����� �������: \n";
//	cin >> n;

	cout << endl;
	list.clear();
	cout << "������� ������\n";
	list.show();



	system("pause");
	return 0;
}

