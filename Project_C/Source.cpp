#include <iostream>
#include <Windows.h>
#include <iostream>

void main_99()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
		���� ����� R � ������ A ������� N. ����� ������� ������, ������� �������� ������ �
		����� R (�� ���� ����� ������� AK, ��� �������� �������� |AK - R| ��������
		�����������).
	*/

	int arr[10];
	int num[10];
	int i;

	cout << "������: ";

	for (i = 0; i < 10; i++)
		arr[i] = 1 + rand() % 20;

	for (i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << "" << endl;




}