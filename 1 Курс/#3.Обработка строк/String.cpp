#include <iostream>
using namespace::std;
#include <string>;
#include <algorithm>
#include <cctype>
#include <Windows.h> // ��� ������ SetConsoleCP, SetConsoleOutputCP

void replace(string &str)
{
    int z=0;
    for (int i = 0; i < str.size(); ++i)
    {

        if (!isalpha(str[i]) && !ispunct(str[i]))
        {
            str[i] = ' ';
            z++;
                   if (z>=4)
        {
            cout << "����� ����� ��������� ������ 4 ��������";
            break;
        }
        }

    }
}

int main()
{
SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
setlocale(LC_ALL,"Rus"); // ����������� �������� �����
	string s1, s2;
	cout << "������� ��� ������, � ������� ������ ���� ���� ���� �����" << endl << endl;
	cout << "������ >> ";
	getline(cin, s1); cout << endl;
	cout << "������ >> ";
	getline(cin, s2); cout << endl;
	// ���������� ����� �����
	int i = 0;
	int l = s1.size();
	// ��������� ������ 1 ������
	while (l != 0)
	{
		l -= 1;
		i++;
	}
	cout << "����� ������ ������ " << i << " ��������." << endl;
	i = 0;
	l = s2.size();
	// ��������� ������ 1 ������
	while (l != 0)
	{
		l -= 1;
		i++;
	}
	cout << "����� ������ ������ " << i << " ��������." << endl;
	// ������ ������� � ������� � ��������� ��
	string k = s1 + s2;
	cout << "������������ ������: " << k << endl;
//�������� ��� ����� ���������
replace(k);
cout << endl << "������������ ������ >> " << k;
	cin >> i;
	return 0;
}
