/*
 * Напишите программу на C++, которая отобразит ваше имя и адрес
 * (можете указать фиктивные данные).
 *
 */

#include <iostream>

#include "../../common.h"

using namespace std;

int main(int argc, char* argv[])
{
    prepareConsole();

    cout << "\n";
    cout << "АДРЕС\n";
    cout << "-------------------------------\n";
    cout << "Иванцов Андрей Александрович\n";
    cout << "183038 г. Мурманск, пр. Ленина\n\n";

    pauseConsole();

    return 0;

}
