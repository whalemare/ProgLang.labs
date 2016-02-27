#pragma once
#include "Polynom.h"
class List
{
private:
	Polynom *HEAD; // ��������� �� ������ ������ ����
public:
	List() :HEAD(NULL) {};
	~List();

	int size; // ������ �������
	void add(Polynom &polynom); // ������� ���������� ��������
	void addPos(Polynom polynom, int pos); // ������� ���������� �������� �� ��������� ������
	void show(); // ������� ���������� ������
	void del(int n); // ������ �������� �������� �� ������; n = ����� ��������
	void pop(int n); // �������� ������� �� ������; n = ����� ��������
	void clear(); // �������� ���� ������
	int getSize(); // ������ ������ ������
};

