﻿/******************************************************************************
 *
 *  Глава 4. Упражнение 5.
 *  
 *  Напишите программу, которая приглашает пользователя ввести три
 *  результата забега на 40 ярдов (или 40 метров, если желаете) и затем 
 *  отображает эти значения и их среднее. Для хранения данных применяйте 
 *  объект array. (Если объект array не доступен, воспользуйтесь 
 *  встроенным массивом.)
 * 
 *****************************************************************************/ 

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<float, 3> result;

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "4.10 РЕЗУЛЬТАТЫ ЗАБЕГОВ\n";
    cout << "----------------------------------------------\n";

    cout << "Введите резльты трех забегов на 40 метров:" << endl;
    cout << "*  1-й забег:      сек.\b\b\b\b\b\b\b\b\b"; cin >> result[0];
    cout << "*  2-й забег:      сек.\b\b\b\b\b\b\b\b\b"; cin >> result[1];
    cout << "*  3-й забег:      сек.\b\b\b\b\b\b\b\b\b"; cin >> result[2];

    float average = (result[0] + result[1] + result[2]) / 3;

    cout << "Средний результат забегов: " << average << " сек." << endl;
    cout << "----------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif 
}