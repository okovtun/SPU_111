#include<iostream>
using namespace std;

//#define FOR_SYNTAX
//#define FACTORIAL
#define POWER
//#define FIBONACCI_1

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

#ifdef FACTORIAL
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
#endif // FACTORIAL

	double a;	//Основание степени
	int n;	//Показатель степени
	double N=1;	//Степень
	cout << "Введите оснвание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предел, до которого нужно вывести ряд Фибоначчи: "; cin >> n;
	int a = 0, b = 1, c = a + b;
	for (; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
#endif // FIBONACCI_1

}