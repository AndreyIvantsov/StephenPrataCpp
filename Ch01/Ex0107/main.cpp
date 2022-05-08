/* 
 * Напишите программу, которая выдает запрос на ввод значений часов и минут.
 * Функция main() должна передать эти два значения функции, имеющей тип
 * void, которая отобразит эти два значения в следующем виде :
 *      Enter the number of hours : 9
 *      Enter the number of minutes : 28
 *      Time : 9 : 28
 */

#include <iostream>
using namespace std;

void PrintTime(int hours, int minutes)
{
    cout << "Время: " << hours << ":" << minutes << endl;
    return;
}

int main()
{
    int hours;
    int minutes;

    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ВРЕМЯ\n";
    cout << "-----------------------------\n";
    cout << "Введите количество часов: ";
    cin >> hours;
    cout << "Введите количество минут: ";
    cin >> minutes;

    PrintTime(hours, minutes);
    cout << "-----------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif
}