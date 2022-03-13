#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WETHER
//#define TARGET
//#define CALC
//#define SWITCH_SYNTAX

void main()
{
	setlocale(LC_ALL, "");
#ifdef WETHER
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "��� ����� �������" << endl;
	}
#endif // WETHER

#ifdef TARGET
	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif // TARGET

#ifdef CALC
	double a, b;	//�����, �������� � ����������
	char s;	//s - sign (���� ��������)
	cout << "������� �������������� ���������: ";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif // CALC

#ifdef SWITCH_SYNTAX
#define CONST_1	1
#define CONST_2	2
#define CONST_N	'N'

	int var = 0;
	char code1;
	char code2;
	char codeN;


	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//.........
		//.........
	case CONST_N: codeN; break;
	default: "Default code";
	}
	//case - ������  
#endif // SWITCH_SYNTAX

	double a, b;
	char s;
	cout << "������� ���������: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}

//if (Condition)
//{
//	......;
//	......;
//}
//else
//{
//	......;
//	......;
//}