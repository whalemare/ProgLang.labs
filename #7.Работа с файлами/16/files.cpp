#include <iostream>
using namespace::std;
#include <fstream>
#include <string>
#include <Windows.h> // ��� ������ SetConsoleCP, SetConsoleOutputCP

  string line; // ���������� ��� ��������� �����
  string text; // ��� �������� ������ �� �����
  byte a; // ��� ������ ���������
  int i=2048;
  string *word = new string[i];


void prog1()
{
  int strNum; // ����� ������
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
          ifs >> word[k]; // ��������� ������ � ����������
          cout << word[k] << endl; // ����� �� �����
          k++; // ����� �����
      }
  ifs.close(); // ��������� ����
  }
  else
      cout << "�� ���!"; // �� ���� ����� �� ��������

  cout << "\n������� ������������ ������ ������ >> "; cin >> strNum;

  for (int z=0; z<=k; z++)
  {
      if (word[z].length()>strNum)
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
        ofs << endl;
    }
  ofs.close(); // ��������� ����
}

void prog2()
{
  ifstream ifs; // ��� ������
  ofstream ofs; // ��� ������
  int symb=48; // c����� �� ��������
  int k=0, z=0, o=0;
  int PP = 1024;
  int codeAscii;
  char symbTemp;

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


ofs.open("text2_out.txt"); // ������� ���� ��� ������
  for (z=0; z<=k; z++) // ��������� ��� �����
  {
      for (PP=0; PP<word[z].length(); PP++) // ��������� �����
      {
          symbTemp = word[z].at(PP);
          cout << symbTemp << ": " << (int)(symbTemp) << endl;
            if ((int)(symbTemp)<48)
                word[z].at(PP)=' ';
      }
      cout << endl;

    ofs << word[z];
   ofs << " ";
  }
ofs.close(); // ������� ����
}

int main()
{
  SetConsoleCP(1251);          // ��������� ������� �������� win-cp 1251 � ����� �����
  SetConsoleOutputCP(1251);    // ��������� ������� �������� win-cp 1251 � ����� ������
  setlocale(LC_ALL, "Rus");    // ����������� �������� �����

  cout << "�������� ���������: " << endl;
  cout << "1. ������� ������ ������� ������ ���������" << endl;
  cout << "2. �������� ������� � ������ <48 �� �������.\n\n";

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



