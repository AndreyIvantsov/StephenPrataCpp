/* 
 *   Вильям Вингейт(William Wingate) заведует службой анализа рынка пиццы.
 *   О каждой пицце он записывает следующую информацию :
 *        • наименование компании — производителя пиццы, которое может 
 *          состоять из более чем одного слова;
 *        • диаметр пиццы;
 *        • вес пиццы.
 *   Разработайте структуру, которая может содержать всю эту информацию и
 *   напишите программу, использующую структурную переменную этого типа.
 *   Программа должна запрашивать у пользователя каждый из перечисленных
 *   показателей и затем отображать введенную информацию. Применяйте сіn
 *   (или его методы) и сout.
 */ 

#include <iostream>

using namespace std;

int main()
{
    const int NameSize = 32;

    struct Pizza
    {
        char manufacturer[NameSize];
        int diameter;
        float weight;
    };

    Pizza pizza;

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "4.7 ПИЦЦА\n";
    cout << "-------------------------------------------------\n";

    cout << "Введите:" << endl;
    cout << "1. Производителя: "; cin.getline(pizza.manufacturer, NameSize);
    cout << "2. Диаметр (см) : "; cin >> pizza.diameter;
    cout << "3. Вес     (кг) : "; cin >> pizza.weight;

    cout 
        << endl
        << "Пицца от \"" 
        << pizza.manufacturer 
        << "\", размер " 
        << pizza.diameter 
        << " (см), вес " 
        << pizza.weight 
        << " (кг)." 
        << endl;

    cout << "-------------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif 
}