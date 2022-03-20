#include<iostream>
#include<conio.h>
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
#define PALINDROME

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

#ifdef DO_WHILE
	char key;	//����� ������� ASCII-��� �������
	do
	{
		key = _getch();	//������� _getch() ������� ������� �������, 
						//� ���������� ASCII-��� ������� �������.
		//������� _getch() ��������� � ���������� conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ����� �� char � int, ��� ����, ����� ������� ��� �������.
	} while (key != Escape);
#endif // DO_WHILE


	int number;		//�����, �������� � ����������
	int reverse = 0;	//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int buffer = number;	//����� �����, ���������� � ����������
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
}
//(Loop - �����)
/*
-------------------------------------
while - ���� � ������������;
do...while - ���� � ������������;
for - ���� �� �������� ����� ��������;
-------------------------------------
*/