#include <iostream>
#include <Windows.h>
#include <iostream>

int main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "����� 1-�� �����: ";
	int a;
	cin >> a;
	
	cout << "����� 2-�� �����: ";
	int b;
	cin >> b;

	cout << "�����: " << a + b << "\n";


}