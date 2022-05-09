/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Глава 6. Упражнение 8.
 *
 *  Напишите программу, которая открывает текстовый файл , читает его символ
 *  за символом до самого конца и сообщает количество символов в файле.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../../common.h"

using namespace std;

int main()
{
    prepareConsole();

    cout << "6.8 КОЛИЧЕСТВО СИМВОЛОВ В ФАЙЛЕ\n";
    cout << "-----------------------------------------\n";

    const string filename = "/home/andrey/Project/Cpp/StephenPrataCpp/Ch06/Ex0608/test.txt";
    ifstream fin;

    fin.open(filename);

    if (!fin.is_open()) {
        cout << "Не удалось открыть файл для чтения!" << endl;
        cout << "Программа завершена!" << endl;
        fin.close();
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "Файл открыт..." << endl;
    }

    int countChars = 0;
    char ch;

    // Выполняем до тех пор, пока чтение из файла
    // успешно и не достигнут конец файла eof

    while (fin.good()) {
        fin >> ch;
        countChars++;
    }

    if (fin.eof()) {
        cout << "Файл прочитан..." << endl;
    }
    else if (fin.fail())
    {
        cout << "Чтение прекращено из-за несоответствия типа данных!" << endl;
    }
    else
    {
        cout << "Чтение прекращено по не изветсно причине!" << endl;
    }

    if (countChars == 0) {
        cout << "Файл пуст!" << endl;
    }
    else
    {
        cout << "Прочитано: " << countChars - 1 << " символов." << endl;
    }

    fin.close();

    pauseConsole();

    return 0;
}
