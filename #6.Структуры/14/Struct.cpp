#include <iostream>
using namespace::std;
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");

	struct Datalib{
		string reyc;
		string ddmmyy;
		string name;
		int num;
	};
	const int i=3;
	Datalib *data = new Datalib[i];
	Datalib dataTemp;

	for (int l = 0; l < i; l++) {
		cout << endl << "#" << l+1 << ".";
		cout << "������� ����� ����� >> ";
		cin >> data[l].reyc;
		cout << "\n������� ���� ������ (��.��.����) >> ";
		cin >> data[l].ddmmyy;
		cout << "\n������� ������� ��������� >> ";
		cin >> data[l].name;
		cout << "\n������� ����� ����� >> ";
		cin >> data[l].num;
		cout << endl;
	}

	int temp;
	for (int l = 0; l < i-1; l++)
	{
		if (data[l].num>0)
			for (int j = 0; j < i - 1; j++)
			{
				if (data[j + 1].num < data[j].num) // ��������� �� ����������� ������ �����
				{
					dataTemp = data[j + 1];
					data[j + 1] = data[j];
					data[j] = dataTemp;
				}
			}
	}

	cout << endl;
	// ������� ��������� (��� �������� ������ ���� ������ ��� ������� ���������)
	for (int l = 0; l < i; l++)
		cout << data[l].num << endl;

	system("pause");
	return 0;
}
