#include<iostream>
using namespace std;

//#define FOR_SYNTAX

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_SYNTAX
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

	int n;	//число, введенное с клавиатуры
	double f = 1;	//факториал числа, введенного с клавиатуры
	cout << "Введите число для вычисления факториала: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
}