/* 
 * Напишите программу, которая запрашивает количество секунд в виде целого
 * значения(используйте тип long или long long, если последний доступен) и
 * затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
 * Для представления количества часов в сутках, количества минут в часе и
 * количества секунд в минуте используйте символические константы.Результат
 * выполнения программы должен выглядеть следующим образом :
 *      Enter the number of seconds : 31600000
 *      31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 */ 

#include <iostream>
using namespace std;

int main()
{
    const int SecPerDay = 60 * 60 * 24;
    const int SecPerHour = 60 * 60;
    const int SecPerMin = 60;

    long long seconds;

    int days;
    int hours;
    int min;
    long long sec;

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "СЕКУНДЫ\n";
    cout << "----------------------------------------------------------\n";
    cout << "Ведете количество секунд: ";
    cin >> seconds;

    sec = seconds;

    days = sec / SecPerDay;
    sec -= days * SecPerDay;

    hours = sec / SecPerHour;
    sec -= hours * SecPerHour;

    min = sec / SecPerMin;
    sec -= min * SecPerMin;

    cout 
        << seconds << " секунд = " 
        << days << " дней, " 
        << hours << " часов, " 
        << min << " минут, " 
        << sec << " секунд." 
        << endl;
    cout 
        << "----------------------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif
}