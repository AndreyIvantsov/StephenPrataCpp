/*
 *   Выполните упражнение 7, но с применением операции new для размещения 
 *   структуры в свободном хранилище вместо объявления структурной  
 *   переменной. Кроме того, сделайте так, чтобы программа сначала запрашивала диаметр 
 *   пиццы, а потом — наименование компании. 
 * 
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

	Pizza *ptPizza = new Pizza;

    Pizza pizza = *ptPizza;

	#if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "4.8 ПИЦЦА 2\n";
    cout << "-------------------------------------------------\n";

    cout << "Введите:" << endl;
    cout << "1. Диаметр (см) : "; cin >> pizza.diameter; cin.ignore();
    cout << "2. Производителя: "; cin.getline(pizza.manufacturer, NameSize);
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

    delete ptPizza;

    #if OS_WIN == true 
        system("pause");
    #endif
}