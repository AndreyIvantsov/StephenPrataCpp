/* 
 * Напишите короткую программу, которая запрашивает рост в дюймах и
 * преобразует их в футы и дюймы. Программа должна использовать символ
 * подчеркивания для обозначения позиции, где будет производиться ввод.
 * Для представления коэффициента преобразования используйте символьную 
 * константу const.
 *      1 фут = 12 дюймов
 */

#include <iostream>

using namespace std;


int main()
{   
    const int InchesPerFeet = 12;
    int heightInInches;
    int heightInFeet;

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    system("chcp 1251 > nul");

    cout << "РОСТ В ДЮЙМАХ\n";
    cout << "------------------------------\n";
    cout << "Введите Ваш рост в дюймах: ___\b\b\b";
    cin >> heightInInches;

    heightInFeet = int(heightInInches / InchesPerFeet);
    heightInInches = heightInInches - heightInFeet * InchesPerFeet;

    cout << "Ваш рост " << heightInFeet << " футов и " << heightInInches << " дюймов.\n";
    cout << "------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif 
    
    return 0;
}

