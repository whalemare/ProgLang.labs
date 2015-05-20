#include <iostream>
using namespace::std;
#include <fstream>
#include <string>
#include <Windows.h> // ��� ������ SetConsoleCP, SetConsoleOutputCP

  string line, temp; // ���������� ��� ��������� �����
  string text; // ��� �������� ������ �� �����
  byte a; // ��� ������ ���������
  int i=2048;
  string *word = new string[i];


void prog1()
{
  string str;
  string strTemp; // ��� �������� ������ �����
  ifstream ifs;
  ofstream ofs;
  int k=0;
  ifs.open("text1.txt", ios::in);
  if (ifs)
  {
    cout << "### ����� �� ����� ###\n\n";
      while (!ifs.eof())
      {
          getline(ifs, word[k]); // ��������� ������ � ����������
          cout << word[k] << endl; // ����� �� �����
          k++; // ����� �����
      }
  ifs.close(); // ��������� ����
  }
  else
      cout << "�� ���!"; // �� ���� ����� �� ��������

  cout << "������� ������ >> "; cin >> str;

  for (int z=0; z<=k; z++)
  {
      //strTemp= // ����� ������ ����� ������
      if (str!=word[z].substr(0,1)) // ���� ������ ����� ������ �� ��� ��������� ������
       {
           word[z]=""; // �������� ��
       }

       if (word[z]!="")
        cout << word[z] << endl; // ������� ������ ���������� �����
  }

  ofs.open("text1_out.txt"); // ��������� ���� ��� ������

    for (int z=0; z<=k; z++)
    {
      if (word[z]!="")
        ofs << word[z];
    }
  ofs.close(); // ��������� ����
}

void prog2()
{
  ifstream ifs; // ��� ������
  ofstream ofs; // ��� ������
  string symb; // c����� �� ������
  int k=0, z=0, o=0;

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

  cout << "������� ������ �� ������ >> "; cin >> symb;

ofs.open("text2_out.txt"); // ������� ���� ��� ������
  for (z=0; z<=k; z++) // ��������� ��� �����
  {
    o=word[z].length(); // ������ ������ �����
    for (int i=0; i<o; i++)
    {
      ofs << symb;  // ������ � ����
    }
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
  cout << "1. ������� ������, � ������� �������� ������ �� ������." << endl;
  cout << "2. �������� ��� ������� �����, �������� ��������.\n\n";

cin >> a;

  switch (a) {
    case '1':
      cout << "�� ������� ��������� 1.\n\n";
      prog1();
    break;
    case '2':
      cout << "�� ������� ��������� 2.\n\n";
      prog2();
      break;
  }

return 0;
}



