/*
 * Напишите программу, которая предлагает пользователю ввести свой возраст.
 * Затем программа должна отобразить возраст в месяцах :
 * Enter your age : 29
 * Your age in months is 348.
 */

#include <iostream>
#include "../../common.h"

using namespace std;

int main()
{
    int ageInYears;
    int ageInMonths;

    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ВАШ ВОЗРАСТ\n";
    cout << "-----------------------------\n";
    cout << "Сколько Вам лет:\t";
    cin >> ageInYears;

    ageInMonths = ageInYears * 12;

    cout << "Ваш возраст в месяцах:\t" << ageInMonths << endl;
    cout << "-----------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif  
}
