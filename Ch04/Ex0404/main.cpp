/*
 * Напишите программу, которая приглашает пользователя ввести его имя и
 * фамилию, а затем построит, сохранит и отобразит третью строку, состоящую
 * из фамилии, за которой следует запятая, пробел и имя.Используйте объекты
 * string и методы из заголовочного файла string.Пример запуска должен
 * выглядеть так :
 *      Enter your first name : Flip
 *      Enter your last name : Fleming
 *      Here's the information in a single string: Fleming, Flip
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    string result;

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ФАМИЛИЯ И ИМЯ 2\n";
    cout << "------------------------------------------------\n";

    cout << "Введите фамилию: "; cin >> firstName;
    cout << "Введите имя    : "; cin >> lastName;

    result = lastName + ", " + firstName;

    cout << "Вот информация в одной строке: " << result << endl;

    cout << "------------------------------------------------\n\n";
    
    #if OS_WIN == true 
        system("pause");
    #endif 

    return 0;
}