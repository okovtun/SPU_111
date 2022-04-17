//Functions
#include<iostream>
using namespace std;

int Add(int a, int b);	//Прототип функции (Объявление функции - Function declaration)
//Прототип функции состоит из загловка функции и заканчивается ;
//Прототип нужен для того, чтобы имя функции,
//и список ее принимемых параметров были известны на момент вызова.
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(b, a);	//Вызов функции - Function call.
	//Для того чтобы функция заработала, ее нужно хотябы раз вызвать.
	//Один раз написанная функция может быть вызвана сколько угодно раз.
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b)	//Реализация функции (Определение функции - Function definition)
{//Состоит из заголовка и тела функции, и определяет что делает функция.
	//Addition - сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - умножение
	return a * b;
}
double Div(int a, int b)
{
	//Division - деление
	return (double)a / b;
}