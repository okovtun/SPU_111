//Pointers
#include<iostream>
using namespace std;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;		//Объявление переменной
	int* pa = &a;	//Объявление указателя
	//pa - pointer to 'a' (указатель на 'a')
	//https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F

	cout << a << endl;	//Вывод переменной 'a' на экран
	cout << &a << endl;	//Взятие адреса переменной 'a' при выводе
	cout << pa << endl;	//Вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//Разыменовываем указатель, и получаем значение по адресу

	int* pb;
	int b = 3;
	pb = &b;
	//pb - работаем с адресом
	//*pb - работаем со значением по адресу

	//int - int
	//int* - Указатель на int
	//double - double
	//double* - указатель на double  
#endif // POINTERS_BASICS

	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	cout << *&arr[0] << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;


}

/*
-----------------------------------------------
& - Address-of operator  (Оператор взятия адреса)
* - Dereference operator (Оператор разыменования)
-----------------------------------------------
*/

/*
-----------------------------------------
+
-
++
--
-----------------------------------------
*/