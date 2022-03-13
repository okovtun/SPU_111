#include<iostream>
#include<conio.h>
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

//#define WHILE_1
//#define WHILE_2

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

	char key;	//Будет хранить ASCII-код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши, 
						//и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() находится в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование типов из char в int, для того, чтобы увидеть код клавиши.
	}while (key != Escape);
}
//(Loop - петля)
/*
-------------------------------------
while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций;
-------------------------------------
*/