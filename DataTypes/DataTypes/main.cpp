//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define DATA_TYPES
//#define VARIABLES
//#define HOME_WORK

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

#ifdef VARIABLES
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
#endif // VARIABLES

#ifdef HOME_WORK
	double money;
	cout << "Введите денежную сумму: "; cin >> money;
	//money += 1e-8;
	cout << money << endl;
	int rub = money;	//Неявное преобразование из double в int с потерей данных
	cout << rub << " руб.\t";
	int cop = (money - rub) * 100;
	cout << cop << " коп.\n";
#endif // HOME_WORK

	int speed = 0;	//объявление переменной
	const int MAX_SPEED = 250;
	5;	//Числовая константа типа int
	cout << sizeof(5) << endl;
	cout << typeid(5.).name() << endl;
	5.;	//числовая константа типа double
	.3;	//числовая константа типа double
	0.3;	//числовая константа типа double
	1e-8;	//числовая константа типа double
	1e+8;	//числовая константа типа double
	5.f;	//числовая константа типа float
	////////////////////////////////////////
	5l;		//числовая константа типа long
	5ll;	//числовая константа типа long long
	5ull;	//числовая константа типа unsigned long long
	5ULL;	//числовая константа типа unsigned long long
	//http://cplusplus.com/doc/tutorial/constants/

	cout << '+' << endl;
	'+';	//Символьная константа
	'+';	//Константа типа char
	cout << sizeof('+') << endl;
	cout << typeid('+').name() << endl;

	"Hello";	//Строковая константа
	cout << sizeof("Hello") << endl;
	const char str[] = "Hello";
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