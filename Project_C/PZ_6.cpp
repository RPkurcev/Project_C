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
        Дан список A размера N (N — четное число). Вывести его элементы с четными
        номерами в порядке возрастания номеров: A2, A4, A6, ..., AN. Условный оператор не
        использовать.
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

    cout << "Четные элементы: ";

    for (int i = 0; i < 10;)
    {
        cout << arr[i] << ' ';
        i += 2;
    }





    return 0;
}