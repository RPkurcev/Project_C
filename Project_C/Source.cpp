#include <iostream>
#include <Windows.h>
#include <iostream>

int main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "¬веди 1-ое число: ";
	int a;
	cin >> a;
	
	cout << "¬веди 2-ое число: ";
	int b;
	cin >> b;

	cout << "—умма: " << a + b << "\n";


}