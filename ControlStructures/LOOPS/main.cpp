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
	int n;	//Количество итераций
	int i = 0;
	cout << "Введите количество итераций: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n)
	{
		cout << n-- << endl;
		//n -= 2;
	}
#endif // WHILE_2

#ifdef DO_WHILE
	char key;	//Будет хранить ASCII-код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши, 
						//и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() находится в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование типов из char в int, для того, чтобы увидеть код клавиши.
	} while (key != Escape);
#endif // DO_WHILE


	int number;		//число, вводимое с клавиатуры
	int reverse = 0;	//число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//копия числа, введенного с клавиатуры
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
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число НЕ палиндром" << endl;
	}
}
//(Loop - петля)
/*
-------------------------------------
while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций;
-------------------------------------
*/