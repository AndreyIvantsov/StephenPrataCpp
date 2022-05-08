/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Глава 6. Упражнение 6.
 *
 *  Постройте программу, которая отслеживает пожертвования в Общество
 *  Защиты Влиятельных Лиц. Она должна запрашивать у пользователя количество
 *  меценатов, а затем приглашать вводить их имена и суммы пожертвований от
 *  каждого. Информация должна сохраняться в динамически выделяемом массиве
 *  структур. Каждая структура должна иметь два члена: символьный массив (или
 *  объект string) для хранения имени и переменную-член типа double - для
 *  хранения суммы пожертвования. После чтения всех данных программа должна
 *  отображать имена и суммы пожертвований тех, кто не пожалел $10 ООО и более.
 *  Этот список должен быть озаглавлен меткой "Grand Patrons". После этого
 *  программа должна выдать список остальных жертвователей. Он должен быть
 *  озаглавлен "Patrons". Если в одной из двух категорий не окажется никого,
 *  программа должна напечатать "nоnе". Помимо отображения двух категорий,
 *  никакой другой сортировки делать не нужно.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include "../../common.h"
#include "record.h"

using namespace std;

int main()
{
    prepareConsole();

    const double bigDonation = 10000.0;

    cout << "6.6 МЕЦЕНАТЫ ОБЩЕСТВА ЗВЛ\n";
    cout << "-----------------------------------\n";

    size_t countPatrons = 0;
    size_t countGrandPatrons = 0;

    do
    {
        cout << "Введите количесво меценатов: ";
        cin >> countPatrons;
    } while (countPatrons < 1);

    Record *records = new Record[countPatrons];

    for (size_t i = 0; i < countPatrons; i++)
    {
        cout << "\nМеценат № " << i + 1 << endl;
        cin.ignore();

        cout << "Имя мецената        : ";
        cin >> records[i].name;

        cout << "Сумма пожертвования : ";
        cin >> records[i].sum;

        if (records[i].sum >= bigDonation)
        {
            countGrandPatrons++;
        }
    }

    cout << endl << "Щедрые меценаты:" << endl;

    if (countGrandPatrons > 0)
    {
        for (size_t i = 0; i < countPatrons; i++)
        {
            if (records[i].sum >= bigDonation)
            {
                cout << "* " << records[i].name << endl;
            }
        }
    }
    else
    {
        cout << "* таких меценатов нет!" << endl;
    }

    cout << endl << "Обычные меценаты:" << endl;

    if (countPatrons - countGrandPatrons > 0)
    {
        for (size_t i = 0; i < countPatrons; i++)
        {
            if (records[i].sum < bigDonation)
            {
                cout << "* " << records[i].name << endl;
            }
        }
    }
    else
    {
        cout << "* таких меценатов нет!" << endl;
    }

    cout << endl;

    delete[] records;

    pauseConsole();
}
