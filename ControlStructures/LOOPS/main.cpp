#include<iostream>
#include<conio.h>
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int n;	//���������� ��������
	int i = 0;
	cout << "������� ���������� ��������: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n)
	{
		cout << n-- << endl;
		//n -= 2;
	}
#endif // WHILE_2

	char key;	//����� ������� ASCII-��� �������
	do
	{
		key = _getch();	//������� _getch() ������� ������� �������, 
						//� ���������� ASCII-��� ������� �������.
		//������� _getch() ��������� � ���������� conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ����� �� char � int, ��� ����, ����� ������� ��� �������.
	}while (key != Escape);
}
//(Loop - �����)
/*
-------------------------------------
while - ���� � ������������;
do...while - ���� � ������������;
for - ���� �� �������� ����� ��������;
-------------------------------------
*/