/* ****************************************************************************
 *
 *  Упражнение № 6
 *
 *  Структура CandyBar включает три члена, как описано в предыдущем
 *  упражнении. Напишите программу, которая создает массив из трех структур
 *  CandyBar, инициализирует их значениями по вашему усмотрению и затем
 *  отображает содержимое каждой структуры.
 *
 *  Упражнение № 9 (текущее)
 *
 *  Выполните упражнение б, но вместо объявления массива из трех структур
 *  CandyBar используйте операцию new для динамического размещения массива.
 *
 *******************************************************************************/

#include <iostream>

using namespace std;

struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};

void PrintCandyBar(CandyBar box)
{
    cout << "Название: " << box.name << endl;
    cout << "Вес     : " << box.weight << endl;
    cout << "Калории : " << box.calories << endl;
    cout << "------------------------------\n";
    return;
}

int main()
{
    CandyBar* boxes = new CandyBar[3];

    boxes[0] = { "Mocha Munch", 2.3f, 350 };
    boxes[1] = { "Raffaello", 1.5f, 200 };
    boxes[2] = { "Kinder Mix", 3.5f, 150 };

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "4.9 ТРИ КОРОБКИ КОНФЕТ - 2\n";
    cout << "------------------------------\n";

    PrintCandyBar(boxes[0]);
    PrintCandyBar(boxes[1]);
    PrintCandyBar(boxes[2]);

    #if OS_WIN == true 
        system("pause");
    #endif

    delete[] boxes;

    return 0;
}
