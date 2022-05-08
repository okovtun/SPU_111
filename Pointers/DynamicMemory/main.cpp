#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n = 5;
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);

	delete[] arr;
	//Memory leak
}

void FillRand(int arr[], const int n)
{
	cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}