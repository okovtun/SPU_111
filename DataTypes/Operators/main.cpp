#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS	//1)
//#define ASSIGNMENT_OPERATOR		//2) �������� ������������
//#define INCREMENT_DECREMENT		//3) Increment/Decrement (++/--)
//#define COMPOUND_ASSIGNMENTS		//4)��������� ������������
#define COMPARISON_OPERATORS		//5)��������� ���������
#define LOGICAL_OPERATORS			//6)���������� ���������.

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARITHMETICAL_OPERATORS
	+ 3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary multiplication
	//*3;	//�������� * ���� ������ ��������

	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << 3 % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//			l-value = r-value;
//l-value - ��� ���������� �����, � ������� ������������ ������.
//r-value - ��� ��������� ������, �������� �������� ������������ � l-value.
//r-value - ��� ��������
//l-value - ���� ��������
/*int a = 2;
int b = 3;
int c = a + b;*/
	int a, b, c;
	a = b = c = 0;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - ��� ������� ��������...
	//Decrement (--) - ...
	//���������� � �����������
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	int j = ++i;
	cout << i << endl;
	cout << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;		a += b;
	a = a - b;		a -= b;
	a = a * b;		a *= b;
	a = a / b;		a /= b;
	a = a % b;		a %= b;
#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATORS
	//������� (Condition) - ��� ���������.

#endif // COMPARISON_OPERATORS

#ifdef LOGICAL_OPERATORS
	/*
	!		NOT;
	||		 OR;
	&&		AND;
	*/
	cout << (!true == false) << endl;
#endif // LOGICAL_OPERATORS

}