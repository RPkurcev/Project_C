#include <iostream>
#include <Windows.h>
#include <iostream>

void main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "������� ���-�� ���������� ��� ��������� 1.1 * 1.2 * 1.3... � ���� �����, ������� ������ 0: ";
	int i;
		
	cin >> i;

	double figur = 1.1;
	double sum = 1.0;
	for (int n = 0; n < i; n++)
	{
		sum = figur * sum;
		figur += 0.1;
	}

	cout << "���������: " << sum;
}