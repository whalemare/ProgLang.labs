#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;

class Mass {
private:
	int *buf; // ��������� �� ������� �������
	int sz; // ������ �������
public:
	Mass(); // ����������� �� ���������
	Mass(int); // ����������� � ����������
	Mass(Mass &); // ���������� �����������
	~Mass(); // ����������

	friend istream &operator>>(istream&, Mass&); //������������� �������� ��� ����� �������
	friend ostream &operator<<(ostream&, const Mass&); //������������� �������� ��� ������ �������

	Mass operator=(const Mass&); //������������� �������� ������������
	int operator[](int); //��� ����������� ������ ���������� � ��������� �������. �������� mas[2];
	
	int getSize(); // �������� ������ �������
	int find(int); // ����� ������� � �������
	void del(int); // ������� ������� �� �������
	void ins(int, int); // �������
	void rep(int, int); // ������
	
	Mass operator++(); // ���������� ��������� - ���������
	Mass operator+(Mass); // ���������� ��������� ��������
	friend Mass operator-(Mass, Mass ); // ���������� �������� �������� 
};