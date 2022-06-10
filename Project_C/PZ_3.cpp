#include <iostream>
#include <Windows.h>
#include <iostream>

int main()
{
	/*
	1. Даны два целых числа: A, B. Проверить истинность высказывания: «Числа A и B имеют
	одинаковую четность».
	*/

	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введдите 1-ое число: ";

	int a;
	cin >> a;

	cout << "Введдите 2-ое число: ";

	int b;
	cin >> b;

	if (a % 2 and b % 2 == 0)
	{
		cout << a << "и" << b << "имеют одинаковую чётность.";
	}
	else 
	{
		cout << a << "и" << b << "имеют разную чётность.";
	}
	

}