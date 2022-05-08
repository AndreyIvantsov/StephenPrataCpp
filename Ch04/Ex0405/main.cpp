﻿/* ****************************************************************************
 *
 *  Структура CandyBar содержит три члена. Первый из них хранит название
 *  коробки конфет. Второй — ее вес(который может иметь дробную часть), а
 *  третий — число калорий(целое значение). Напишите программу, объявляющую
 *  эту структуру и создающую переменную типа CandyBar по имени snack,
 *  инициализируя ее члены значениями "Mocha Munch", 2.3 и 350, соответственно.
 *  Инициализация должна быть частью объявления snack. И, наконец, программа
 *  должна отобразить содержимое этой переменной.
 *
 *******************************************************************************/ 

#include <iostream>

using namespace std;

int main()
{
    struct CandyBar
    {
        char name[20];
        float weight;
        int calories;
    };

    CandyBar snack{ "Mocha Munch", 2.3f, 350 };

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "4.5 КОРОБКА КОНФЕТ\n";
    cout << "------------------------------\n";
    cout << "Название: " << snack.name << endl;
    cout << "Вес     : " << snack.weight << endl;
    cout << "Калории : " << snack.calories << endl;
    cout << "------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif 

    return 0;
}