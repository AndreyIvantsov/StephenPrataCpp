/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Глава 6. Упражнение 1.
 *
 *  Напишите программу, которая читает клавиатурный ввод до символа @ и повторяет
 *  его, за исключением десятичных цифр, преобразуя каждую букву верхнего регистра
 *  в букву нижнего регистра и наоборот. 
 *  Не забудьте о семействе функций c ctype.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <cctype>
#include "../../common.h"

using namespace std;

int main()
{
    prepareConsole();
    char inputChar;
    string inputStr;

    cout << "6.1 КЛАВИАТУРНЫЙ ВВОД ДО СИМВОЛА \"@\"\n";
    cout << "------------------------------------------\n";
    cout << "Результат  повторяет ввод, за  исключением" << endl;
    cout << "десятичных цифр и преобразует каждую букву" << endl;
    cout << "верхнего регистра в букву нижнего реигстра" << endl;
    cout << "и наоборот." << endl << endl;
    cout << "Вводите символы: " << endl;

    do
    {
        cin >> inputChar;  
        if (!isdigit(inputChar))
        {
            inputStr += islower(inputChar) ? toupper(inputChar) : tolower(inputChar);   
        }

    } while (inputChar != '@');
    
    cout << endl;
    cout << "Результат: " << inputStr << endl << endl;

    pauseConsole();

    return 0;
}
