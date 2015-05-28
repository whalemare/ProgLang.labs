#include <iostream>
using namespace::std;
#include <fstream>
#include <string>
#include <Windows.h> // ��� ������ SetConsoleCP, SetConsoleOutputCP

// prog1() -> �������� ������ ��������������� �������� ������
// prog2()




  string line, temp; // ���������� ��� ��������� �����
  string text; // ��� �������� ������ �� �����
  byte a; // ��� ������ ���������
  int i=2048;
  string *word = new string[i];
  string *lastWord = new string[i];


void prog1()
{
  string str;
  string strTemp; // ��� �������� ������ �����
  ifstream ifs;
  ofstream ofs;
  int k=0, n=0;
  ifs.open("text1.txt", ios::in);
  if (ifs)
  {
    cout << "### ����� �� ����� ###\n\n";
      while (!ifs.eof())
      {
          getline(ifs, word[k]); // ��������� ������ � ����������
          cout << word[k] << endl; // ����� �� �����
          k++; // ����� ������
      }
  ifs.close(); // ��������� ����
  }
  else
      cout << "�� ���!"; // �� ���� ����� ���� ���������

  cout << "\n������� ����� >> "; cin >> str; cout << endl;

  for (int z=0; z<=k; z++)
  {
  		n=word[z].rfind(' '); // ����� ���������� �������
  		//cout << n << endl;
  			if (n!=-1) // ���� ������ ��� ������
			{
  				lastWord[z]=word[z].substr(n+1); // �������� ��������� ����� ������ ������
  				if (lastWord[z]==str)
  					cout << word[z] << endl;
  			}
  }

  ofs.open("text1_out.txt"); // ��������� ���� ��� ������
    for (int z=0; z<=k; z++)
    {
      if (lastWord[z]==str)
        ofs << word[z];
        ofs << endl;
    }
  ofs.close(); // ��������� ����
}

void prog2()
{
  ifstream ifs; // ��� ������
  ofstream ofs; // ��� ������
  string symb; // c����� �� ������
  int k=0, z=0;

  ifs.open("text2.txt");
  if (ifs)
  {
    cout << "### ����� �� ����� ###\n\n";
      while (!ifs.eof())
      {
          ifs >> word[k]; // ��������� ����� � ����������
          cout << word[k] << endl; // ����� �� �����
          k++; // ����� �����
      }
  ifs.close(); // ��������� ����
  }
  else
      cout << "�� ���!"; // �� ���� ����� �� ��������

  cout << "\n������� ������ �� ������ >> "; cin >> symb;

ofs.open("text2_out.txt"); // ������� ���� ��� ������
  for (z=0; z<=k; z++) // ��������� ��� �����
  {
    for (int i=0; i<word[z].length(); i++) // ���������� ��� �����
    {
    	if (word[z].at(i) >= '0' && word[z].at(i) <= '9') // ���� �����
    		word[z].at(i)=symb;
    }
    ofs << word[z];  // ������ � ����
    ofs << " "; // ������ ����� ������� �����
  }
ofs.close(); // ������� ����
}

int main()
{
  SetConsoleCP(1251);          // ��������� ������� �������� win-cp 1251 � ����� �����
  SetConsoleOutputCP(1251);    // ��������� ������� �������� win-cp 1251 � ����� ������
  setlocale(LC_ALL, "Rus");    // ����������� �������� �����

  cout << "�������� ���������: " << endl;
  cout << "1. O������� ������ ��������������� �������� ������" << endl;
  cout << "2. �������� ��� ����� �����, �������� ��������.\n\n";

cin >> a;

  switch (a) {
    case '1':
      cout << "�� ������� ��������� 1.\n\n";
      prog1();
      cout << "\n�������� ���� text1_out.txt ����� ������� ���������";
    break;
    case '2':
      cout << "�� ������� ��������� 2.\n\n";
      prog2();
      cout << "\n�������� ���� text2_out.txt ����� ������� ���������";
      break;
  }

return 0;
}



