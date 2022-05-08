/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                               *
 *  Глава 5. Упражнение 6.                                                       *
 *                                                                               *
 *  Выполните упражнение 5, но используя двумерный массив для сохранения         *
 *  данных о месячных продажах за 3 года. Выдайте общую сумму продаж за каждый   *
 *  год и за все годы вместе.                                                    *
 *                                                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
    const int CountOfMonths = 12;
    const int CountOfYears = 3;
    const int SalesStart = 2003;

    const char* months[]
    {
        "ЯНВ", "ФЕВ", "МАР", "АПР",
        "МАЙ", "ИЮН", "ИЮЛ", "АВГ",
        "СЕН", "ОКТ", "НОЯ", "ДЕК"
    };

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "5.5 ПРОДАЖИ КНИГИ\n";
    cout << "---------------------\n";
    cout << " Месяц\tЦена продажи\n";
    cout << "---------------------\n";

    // Выделяем память под массив в котором будем 
    // хранить указатели на данные о годовых продажах
    float** price = new float* [CountOfYears];

    float sum{};
    float totalSum{};

	for (int year = 0; year < CountOfYears; year++)
	{
		// Выделим память под массив в котом будем
		// хранить данные по годовым продажам
		price[year] = new float[CountOfMonths];

        cout << "\n********" << SalesStart + year << "*********\n";

        // Получим данные от пользователя о годовой
        // продаже по месяцам
	for (int month = 0; month < CountOfMonths; month++)
	{
	    cout << "  " << months[month] << "\t   ";
            cin >> price[year][month];
	    sum += price[year][month]; 
	}

        cout << "  За год:  " << sum << endl;
        totalSum += sum;
	}

    cout << "\n---------------------\n";
    cout << "  ВСЕГО:   " << totalSum << endl << endl;

    // Освободим память занятую массивами хранящими
    // данные о годовых продажах
    for (int i = 0; i < CountOfYears; i++)
    {
        delete[] price[i];
    }
    
    // Освободим память занятую массивом хранящим
    // указатели на массивы с данными годовых продаж
    delete[] price;

    #if OS_WIN == true 
        system("pause");
    #endif 
}
