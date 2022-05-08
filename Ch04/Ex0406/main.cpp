/* ****************************************************************************
 *
 *  Структура CandyBar включает три члена, как описано в предыдущем  
 *  упражнении. Напишите программу, которая создает массив из трех структур 
 *  CandyBar, инициализирует их значениями по вашему усмотрению и затем 
 *  отображает содержимое каждой структуры. 
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
	CandyBar boxes[3]
	{
		{"Mocha Munch", 2.3f, 350},
		{"Raffaello", 1.5f, 200},
		{"Kinder Mix", 3.5f, 150}
	};

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "4.6 ТРИ КОРОБКИ КОНФЕТ\n";
    cout << "------------------------------\n";

    PrintCandyBar(boxes[0]);
    PrintCandyBar(boxes[1]);
    PrintCandyBar(boxes[2]);

    #if OS_WIN == true 
        system("pause");
    #endif 

    return 0;
}
