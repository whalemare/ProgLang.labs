#include <iostream>
using namespace::std;
#include <string>
#include <algorithm>
#include <vector>
#include <Windows.h> // ��� ������ SetConsoleCP, SetConsoleOutputCP
    static int z=0;
    static int *zz = &z;

    bool comp(string a, string b) // Compare ��� �������� ����������
    {
        string *aa=&a, *bb=&b;
        if (a>b)
        {
            z++;
            return (true);
        }

    }


int main()
{
SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
setlocale(LC_ALL,"Rus"); // ����������� �������� �����
int i, j=0, z;
    cout << "������� ���������� ����� >> ";
    int COUNT;
    cin >> COUNT;
    string *str2 = new string[COUNT]; // c����� ����
    vector<string> myVector(COUNT);
    for (i=0; i<COUNT; i++) // ������� ��� COUNT ����� -1995993627
    {
        cout << i+1 << ". ";
        cin >> str2[i];
        myVector[i]=str2[i];
    }

    sort(myVector.begin(), myVector.end(), comp); // ����������� ������ ����� ������� ���������� � ������
    cout << endl << "<< ��������������� ������ >>" << endl << endl;
    for (i=0; i<COUNT; i++)
        cout << myVector[i] << endl;
    cout << endl << "����� ������ ������ " << str2[3] << " >> "<< str2[3].size() << endl;
    cout << endl << "���������� ������������: " << COUNT << endl;
    system("pause");
    return 0;
}
