#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� �����: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			//���� for ��������� ����� ��������� ����� ������� 
			//��� �� �������� ������ �� ���������.
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1


}