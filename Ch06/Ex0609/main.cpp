/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Глава 6. Упражнение 9.
 *
 *  Выполните упражнение 6, но измените его так, чтобы данные можно было
 *  получать из файла. Первым элементом файла должно быть количество меценатов,
 *  а остальная часть состоять из пар строк, в которых первая строка содержит
 *  имя, а вторая - сумму пожертвования. То есть файл должен выглядеть примерно
 *  так:
 *
 *  4
 *  Sam Stone
 *  2000
 *  Freida Flass
 *  100500
 *  Tammy Tubbs
 *  5000
 *  Rich Raptor
 *  55000
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../../common.h"

using namespace std;

struct Record
{
    string name;
    double sum;
};

int main()
{
    prepareConsole();

    cout << "6.9 МЕЦЕНАТЫ ОБЩЕСТВА ЗВЛ - ЧИТАЕМ ДАННЫЕ ИЗ ФАЙЛА\n";
    cout << "--------------------------------------------------\n";

    const double bigDonation = 10000.0;
    const string filename = "/home/andrey/Project/Cpp/StephenPrataCpp/Ch06/Ex0609/data.txt";

    fstream fin;

    fin.open(filename);

    if (!fin.is_open()) {
        cout << "Не удалось открыть файл для чтения!" << endl;
        cout << "Программа завершена!" << endl;
        fin.close();
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "Файл данных открыт..." << endl;
    }

    // Чтение данных

    size_t countPatrons = 0;

    if (fin.good()) {
        fin >> countPatrons;
    }

    size_t countGrandPatrons = 0;
    size_t countRecords = 0;
    string firstname;
    string secondname;
    Record *records = new Record[countPatrons];

    for (size_t i = 0; i < countPatrons; i++)
    {
        cout << endl << "Меценат № " << i + 1 << endl;

        fin >> firstname;
        fin >> secondname;
        records[i].name = firstname + " " + secondname;
        cout << "Имя мецената        : " << records[i].name << endl;

        fin >> records[i].sum;
        cout << "Сумма пожертвования : " << records[i].sum << endl;

        if (records[i].sum >= bigDonation)
        {
            countGrandPatrons++;
        }

        countRecords++;
    }

    // Результат чтения

    if (fin.eof() || countPatrons == countRecords) {
        cout << endl << "Данные из файла прочитаны..." << endl;
    }
    else if (fin.fail())
    {
        cout << endl << "Чтение прекращено из-за несоответствия типа данных!" << endl;
    }
    else
    {
        cout << endl << "Чтение прекращено по не изветсно причине!" << endl;
    }

    if (countRecords == 0) {
        cout << "Файл данных пуст!" << endl;
    }
    else
    {
        cout << "Прочитано: " << countRecords << " записи." << endl;
    }

    fin.close();
    cout << "Файл данных закрыт." << endl;

    // Анализ прочитанных данных

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
