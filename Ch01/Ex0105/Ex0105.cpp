/*
 * Напишите программу, в которой функция main() вызывает определяемую
 * пользователем функцию, принимающую в качестве аргумента значение
 * температуры по Цельсию и возвращающую эквивалентное значение температуры по
 * Фаренгейту.
 * Программа должна выдать запрос на ввод значения по Цельсию и
 * отобразить следующий результат :
 *      Please enter a Celsius value : 20
 *      20 degrees Celsius is 68 degrees Fahrenheit.
 * Вот формула для этого преобразования :
 *      Температура в градусах по Фаренгейту = 1.8 * Температура в градусах по Цельсию + 32
 */

#include <iostream>
#include "Ex0105.h"

using namespace std;

int main()
{
    double CelsiusDegrees;
    double FahrenheitDegrees;

    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ПЕРЕВОД ГРАДУСОВ ЦЕЛЬСИЯ В ФОРЕНГЕЙТЫ\n";
    cout << "-----------------------------------------------------\n";
    cout << "Введите температуру в грагусах Цельсия:\t";
    cin >> CelsiusDegrees;

    FahrenheitDegrees = CelsiusToFahrenheit(CelsiusDegrees);

    cout << CelsiusDegrees << " градусов Сельсия это " << FahrenheitDegrees << " градусов по Форенгейту\n";
    cout << "-----------------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif  
}