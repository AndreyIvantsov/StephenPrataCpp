/* 
 * Напишите программу, которая запрашивает у пользователя имя, фамилию, а
 * затем конструирует, сохраняет и отображает третью строку, состоящую из
 * фамилии пользователя, за которой следует запятая, пробел и его имя. Используйте
 * массивы char и функции из заголовочного файла cstring. Пример запуска
 * должен выглядеть так :
 *      Enter your first name : Flip
 *      Enter your last name : Fleming
 *      Here's the information in a single string: Fleming, Flip 
 */ 

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int NameSize = 15;

    char firstName[NameSize];
    char lastName[NameSize];
    char result[2 * NameSize + 3]{};
    
    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ФАМИЛИЯ И ИМЯ 1\n";
    cout << "------------------------------------------------\n";

    cout << "Введите фамилию: ";
    cin >> firstName;
    cout << "Введите имя    : ";
    cin >> lastName;

    strcat(result, lastName);
    strcat(result, ", ");
    strcat(result, firstName);

    cout << "Вот информация в одной строке: " << result << endl;

    cout << "------------------------------------------------\n\n";
    
    #if OS_WIN == true 
        system("pause");
    #endif 

    return 0;
}