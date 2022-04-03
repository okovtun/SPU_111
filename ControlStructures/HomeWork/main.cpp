#include <iostream>
#include <conio.h>
using std::cout;
using std::cin;
using std::endl;


#define UP_ARROW  72
#define DOWN_ARROW  80
#define LEFT_ARROW  75
#define RIGHT_ARROW  77
#define Space  32
#define Enter  13
#define Escape  27

//#define SHOOTER
//#define PALINDROME

int main(void) 
{
	setlocale(LC_ALL, "Russian");

#ifdef SHOOTER
	char var = 0;
	do {
		var = _getch();

		//cout << var << endl;
		switch (var) {
		case UP_ARROW:	  case 'W': case 'w':	cout << "вперед" << endl;	break;
		case DOWN_ARROW:  case 'S': case 's':	cout << "назад" << endl;	break;
		case LEFT_ARROW:  case 'A': case 'a':	cout << "влево" << endl;	break;
		case RIGHT_ARROW: case 'D': case 'd':	cout << "вправо" << endl;	break;
		case Space:	cout << "прыжок" << endl;	break;
		case Enter:	cout << "Выстрел" << endl;	break;
		case Escape:cout << "Выход" << endl;	break;
		case -32:break;
		default: cout << "Error" << endl;
			break;
		}
	} while (var != Escape);
#endif // SHOOTER


	//Число палиндром

#ifdef PALINDROME
	int number;
	int reverse = 0;
	cout << "Введите число"; cin >> number;
	int buffer = number;
	while (buffer > 0)
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
		cout << "Число не палиндром" << endl;
	}
#endif // PALINDROME


	//Написана программа, которая приводит число в степени.
		//Основание и размер суммы вклада с набором;
	int a, b, r = 1;
	cout << "Введите число которое будете возводить в степень ";
	cin >> a;
	cout << "Введите степень "; cin >> b;
	for (int c = 0; c < b; c++)
	{
		r *= a;
		cout << "Ответ: " << r << endl;
	}
	system("PAUSE");

	//Вывести на экран таблицы ASCII - символов по 16 символов в строке;
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << "\n";
		cout << (char)i << "   ";
	}
}