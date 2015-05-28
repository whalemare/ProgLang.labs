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
  string str; // �����
  ifstream ifs;
  ofstream ofs;
  int k=0;
  ifs.open("text2.txt");
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
      cout << "�� ���!"; // �� ���� ����� �� ��������


  cout << "\n������� ����� >> "; cin >> str; cout << endl;

  for (int z=0; z<=k; z++) // ������� �����
  {
      if (word[z].find(str)!=-1)
        word[z]="";

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

  int k=0, z=0, leng=0;

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
    leng = word[z].length();
    leng--;
    for (int i=0; i<leng; i++) // ���������� ��� �����
      if (word[z].at(i+1) == word[z].at(i)) // ���� i � i+1 ������� � ����� �����, ��
      {
//        cout << word[z].at(i+1) << "==" << word[z].at(i) << endl;
        word[z].at(i)=' ';
      }
 //     else
 //       cout << word[z].at(i+1) << "!=" << word[z].at(i) << endl;

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
  cout << "1. ��������� ������, ���������� �������� �����." << endl;
  cout << "2. �� ���� ����� ���������� �������� ������ ������ �������� �� ������.\n\n";

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



