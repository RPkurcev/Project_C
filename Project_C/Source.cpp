#include <iostream>
#include <Windows.h>
#include <iostream>

void main_99()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
		Дано число R и список A размера N. Найти элемент списка, который наиболее близок к
		числу R (то есть такой элемент AK, для которого величина |AK - R| является
		минимальной).
	*/

	int arr[10];
	int num[10];
	int i;

	cout << "Массив: ";

	for (i = 0; i < 10; i++)
		arr[i] = 1 + rand() % 20;

	for (i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << "" << endl;




}