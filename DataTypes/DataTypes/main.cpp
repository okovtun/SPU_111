//DataTypes
#include<iostream>
using namespace std;

//#define DATA_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DATA_TYPES
	//cout << true << endl;
//cout << false << endl;

	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;

	cout << "\n---------------------------------------\n";

	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;

	cout << "\n---------------------------------------\n";

	//IEEE-754:
	//float	- ������������ ����� ��������� ��������, �������� 4 ����� ������;
	//double	- ������������ ����� ������� ��������, �������� 8 ���� ������.

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
#endif // DATA_TYPES

	int a;
	int speed = 0;
	int t;
	double price_of_coffee;	//���������� ����������
	cout << "������� ��������� ����: ";
	cin >> price_of_coffee;
	//cin - Console Input (���������� ���� � ����������)
	cout << price_of_coffee << endl;
	int number_of_cups;
	cout << "������� ���������� �����: "; cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "����� ���������: " << total_price << " $\n";
	//�������������������
	//������������� - ��� ���������� ���������� ��������
}
//char (Character - ������) 1 Byte ASCII 256


	//type name;
	//identifier - ��� ���.
/*
-------------------------------------------
1.	ABC....Z
	abc...z
	012...9
	_
2.	1stPlace
	Place1
3.	����� ���������� ����������������
	Price � price - ��� ��� ������ ����������
4.  ��� ���������� ���������� ������ ������������ 
	�������� ����� ����� C++


-------------------------------------------
*/