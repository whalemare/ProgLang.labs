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

	//cout << q << " = 0";
				

	/*
	//������� ���������

	int o,b,c;
	float x1,x2,D,d;

	o = b = c = x1 = x2 = 0;
	
		for (int i = sst+1; i != 0; --i) 
		{
			o = mas[i+2];
			b = mas[i+1];
			c = mas[i];
		}


	
	cout << endl;

	cout << o << " " << b << " " << c << endl;


	D=(b*b)-(4*o*c);

	if (D>=0) 
		{
		d=sqrt(D);
		x1=(-b+d)/(2*o);
		x2=(-b-d)/(2*o);
		}
	else cout << "������ ���" << endl;

	if (x1 == x2) 
		{
		cout << "����� ��������� " << endl;
		printf ("x=%4.2f",x1);
		}
	else printf ("x1=%4.2f",x1,"x2=%4.2f",x2);

	

		*/




	system("pause");
	return 0;
}