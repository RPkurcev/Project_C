#include <iostream>
#include <Windows.h>
#include <random>
#include <cmath>
int main_6()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*
        ��� ������ A ������� N (N � ������ �����). ������� ��� �������� � �������
        �������� � ������� ����������� �������: A2, A4, A6, ..., AN. �������� �������� ��
        ������������.
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

    cout << "������ ��������: ";

    for (int i = 0; i < 10;)
    {
        cout << arr[i] << ' ';
        i += 2;
    }





    return 0;
}