#pragma warning(disable:4326)
#include<iostream>
using namespace std;

//#define MULTIPLICATION_TABLE
#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "");
	int n = 10;

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= n; i++)
	{
		//здесь счетчика j еще нет
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
			/*if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;*/
		}
		//здесь счетчика j уже нет
	}
#endif // MULTIPLICATION_TABLE

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(5);	//задаем ширину поля, в которое будет выводиться значение,
			//когда мы задаем ширину, cout автоматически включает выравнивание по правому краю поля (5)
			//cout << left;
			cout << i * j;
		}
		cout << endl;
	}
}