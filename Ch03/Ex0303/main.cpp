/* 
 * Напишите программу, которая запрашивает широту в градусах, минутах и
 * секундах, после чего отображает широту в десятичном формате. В одной минуте
 * 60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти
 * значения с помощью символических констант. Для каждого вводимого значения
 * должна использоваться отдельная переменная. Результат выполнения
 * программы должен выглядеть следующим образом:
 *     Enter a latitude in degrees, minutes, and seconds:
 *     First, enter the degrees : 37
 *     Next, enter the minutes of arc : 51
 *     Finally, enter the seconds of arc : 19
 *     37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 */ 


#include <iostream>
using namespace std;

int main()
{
    const double SecToMin = 1 / 60.0;
    const double MinToDeg = SecToMin;

    int latDeg;
    int latMin;
    int latSec {};

    double latitude;

    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ВВОД ШИРОТЫ\n";
    cout << "----------------------------------------------\n";
    cout << "Введите широту в градусах, минутах и секундах:\n";
    cout << "    введите градусы: ";
    cin >> latDeg;
    cout << "    введите минуты : ";
    cin >> latMin;
    cout << "    введите секуды : ";
    cin >> latSec;

    latitude = latDeg + (latMin * MinToDeg) + (latSec * SecToMin * MinToDeg);

    cout << latDeg << " градусов "<< latMin << " минут " << latSec << " секунд = " << latitude << " градусов." << endl;
    cout << "----------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif
}