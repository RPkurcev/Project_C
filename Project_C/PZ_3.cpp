#include <iostream>
#include <Windows.h>
#include <iostream>

int main()
{
	/*
	1. ���� ��� ����� �����: A, B. ��������� ���������� ������������: ������ A � B �����
	���������� ���������.
	*/

	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "�������� 1-�� �����: ";

	int a;
	cin >> a;

	cout << "�������� 2-�� �����: ";

	int b;
	cin >> b;

	if (a % 2 and b % 2 == 0)
	{
		cout << a << "�" << b << "����� ���������� ��������.";
	}
	else 
	{
		cout << a << "�" << b << "����� ������ ��������.";
	}
	

}