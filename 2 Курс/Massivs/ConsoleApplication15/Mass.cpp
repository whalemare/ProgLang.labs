
#include "stdafx.h"
#include "Mass.h"
#include <ostream>
#include <iostream>
using std::ostream;
using namespace std;

Mass::Mass(){sz = 0; buf = new int[0];}

Mass::Mass(int a) { //������� ������ ������ � a ����������
	buf = new int[a];
	Mass::sz = a;
	sz = a;
}

Mass::Mass(Mass &a) { //����������� �����������. 
	buf = new int[a.sz];
	sz = a.sz;
	for (int i = 0; i < sz; ++i)
		buf[i] = a.buf[i];
	/* ������.
	���� ����� ������ A
	�� ����� ������� ��� ����� - ������ B
	��������� ����� ������������ ���������� ������� ���:
	Mas B = A;
	*/
}

Mass::~Mass() {
	delete buf; // ������� ������
}

istream& operator>>(istream &in, Mass &a) {
	for (int i = 0; i < a.sz; ++i)
		in >> a.buf[i]; // ������ �������� �������
	return in;
}

ostream& operator<<(ostream &out, const Mass &a) {
	if (a.sz <= 0) // ���� ������ ����
		out << "������ ����";
	else 
		for (int i = 0; i < a.sz; ++i)
			out << a.buf[i]; // ������� �������� �������
	return out;
}

Mass Mass::operator=(const Mass&a) {
	if (&a != this) {
		if (sz != a.sz) { //���� ������� ������, �� ����������
			delete buf;
			sz = a.sz;
			buf = new int [sz];
		}

		for (int i = 0; i < sz; ++i)
			buf[i] = a.buf[i]; //�������� ��������
	}
	return *this; // ��������� ������������� ������������ (a = b = c)
}

int Mass::operator[](int a) {
	if (a >= 0 && a < sz)
		return buf[a]; // ���������� ������� �� ������� (��� a[i])
	else
		cout << "�������� ������" << endl;
}

int Mass::getSize() {
	return sz; // ������ �������
}

int Mass::find(int a) { // ������� ������ ������� a � ������� � ������� ��� �����
	for (int i = 0; i < sz; ++i)
		if (buf[i] == a)
			return i;
	return -1;
}

void Mass::del(int a) {
	Mass t = *this; // ������� ����� ������ � �������� �� 1 ������
	delete buf; --sz;
	buf = new int[sz];
	int j = 0;
	for (int i =0; i < sz + 1; ++i)
		if (i != a) {
			buf[j] = t.buf[i]; // ������� ���� ��� ������ ��������, ����� ����������
			j++;
		}
}

void Mass::ins(int n, int a) {
	Mass t = *this;

	delete buf; sz++; // ������� ����� ������ � �������� �� 1 ������
	buf = new int [sz];

	int j = 0;
	for (int i = 0; i < sz; ++i) { // ������� ���� ��� ������ �������� � +1 ����� �����������
		if (i!=n) {
			buf[i] = t.buf[j];
			j++;
		}
		else buf[i] = a;
	}
}

void Mass::rep(int n, int a) {
	for (int i = 0; i < sz; ++i) {
		if (i == n)
			buf[i] = a; // �������� ������� ��� �������� n �� a
	}
}

Mass Mass::operator++() // ���������
{
	Mass mas(sz);
	for (int i=0; i<sz; i++)
	{
		buf[i]++;
		mas.buf[i] = buf[i];
	}

	return mas;
}

// m3 = m1 + mas
Mass Mass::operator+(Mass mas)
{
	Mass sum(sz);
	for (int i=0; i<sz; i++)
	{
		sum.buf[i] = buf[i] + mas.buf[i];
	}
	return sum;

}

// raz = buf - mas
Mass operator- (Mass mas, Mass mas2)
{
	int sz=mas.sz;
	Mass raz(sz);

	for(int i=0; i<sz; i++)
	{
		raz.buf[i] = mas.buf[i] - mas2.buf[i];
	}
return raz;
}

 
