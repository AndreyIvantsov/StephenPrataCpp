/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                               *
 *  Глава 6. Упражнение 4.                                                       *
 *                                                                               *
 *  Когда вы вступите в Благотворительный Орден Программистов (БОП), к           *
 *  вам могут обращаться на заседаниях БОП по вашему реальному имени,            *
 *  по должности, либо секретному имени БОП. Напишите программу которая,         *
 *  может выводить списки членов по именам, должностям, секретным именам         *
 *  либо по реальным именам самого члена. В  основу положите следующую           *
 *  структуру:                                                                   *
 *                                                                               *
 *  // Структура имен Благотворительного Ордена Программистов (БОП)              *
 *  struct bop                                                                   *
 *  {                                                                            *
 *      char fullname[strsize];     // реальное имя char                         *
 *      char title[strsize];        // должность                                 *
 *      char bopname[strsize];      // секретное имя БОП                         *
 *      int preference;             // 0 = полное имя, 1 = титул, 2 = имя БОП    *
 *  };                                                                           *
 *                                                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include "../../common.h"

using namespace std;

const int STRING_SIZE = 16;

struct Bop
{
    char fullname[STRING_SIZE];     // реальное имяchar                       
    char title[STRING_SIZE];        // должность                              
    char bopname[STRING_SIZE];      // секретное имя БОП                      
    int preference;                 // 0 = полное имя, 1 = титул, 2 = имя БОП 
};


int main()
{
    prepareConsole();

    cout << "6.4 ЧЛЕНЫ БОП\n";
    cout << "-----------------------------------\n";

    // Количество членов БОП

    short countOfMembers;

    do
    {
        cout << "Введите количесво членов БОП: ";
    } while (!(cin >> countOfMembers));

    // Ввод информации о членах БОП

    Bop* bop = new Bop[countOfMembers];

    cout << "\n\nВедите информацию о членах БОП:\n";

    for (int i = 0; i < countOfMembers; i++)
    {
        cout << "\nЧлен № " << i + 1 << endl;

        cin.ignore();
        

        cout << "Полное имя: ";
        //cin >> bop[i].fullname;
        cin.getline(bop[i].fullname, STRING_SIZE);
        cin.clear();

        cout << "Должность : ";
        //cin >> bop[i].title;
        cin.getline(bop[i].title, STRING_SIZE);
        cin.clear();

        cout << "Имя в БОП : ";
        //cin >> bop[i].bopname;
        cin.getline(bop[i].bopname, STRING_SIZE);
        cin.clear();

        cout << "Обращение\n";
        cout << "0 - полное имя, 1 - должность, 2 - имя в БОП: ";
        cin >> bop[i].preference;
        cin.clear();
        
    }

    // Вывод списка БОП

    cout << "\nСпиок участников БОП:\n";
    for (int i = 0; i < countOfMembers; i++)
    {
        switch (bop[i].preference)
        {
        case 0:
            cout << i + 1 << ". " << bop[i].fullname << endl;
            break;
        case 1:
            cout << i + 1 << ". " << bop[i].title << endl;
            break;
        case 2:
            cout << i + 1 << ". " << bop[i].bopname << endl;
            break;
        }
    }

    delete[] bop;
    cout << "\n-----------------------------------\n\n";
    
    pauseConsole();
}
