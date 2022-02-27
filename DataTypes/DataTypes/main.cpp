//DataTypes
#include<iostream>
using namespace std;

//#define DATA_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DATA_TYPES
	//cout << true << endl;
//cout << false << endl;

	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;

	cout << "\n---------------------------------------\n";

	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;

	cout << "\n---------------------------------------\n";

	//IEEE-754:
	//float	- вещественное число одинарной точности, занимает 4 Байта памяти;
	//double	- вещественное число двойной точности, занимает 8 Байт памяти.

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
#endif // DATA_TYPES

	int a;
	int speed = 0;
	int t;
	double price_of_coffee;	//Объявление переменной
	cout << "Введите стоимость кофе: ";
	cin >> price_of_coffee;
	//cin - Console Input (Консольный ввод с клавиатуры)
	cout << price_of_coffee << endl;
	int number_of_cups;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость: " << total_price << " $\n";
	//проинициализировать
	//Инициализация - это присвоение начального значения
}
//char (Character - Символ) 1 Byte ASCII 256


	//type name;
	//identifier - это имя.
/*
-------------------------------------------
1.	ABC....Z
	abc...z
	012...9
	_
2.	1stPlace
	Place1
3.	Имена переменных регистрозависимы
	Price и price - это две разные переменные
4.  Для именования переменных нельзя использовать 
	ключевые слова языка C++


-------------------------------------------
*/