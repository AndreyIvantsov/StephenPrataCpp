/* 
 * Напишите программу, которая запрашивает количество миль, пройденных
 * автомобилем, и количество галлонов израсходованного бензина, а затем
 * сообщает значение количества миль на галлон. Или, если хотите, программа может
 * запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
 * результат в виде количества литров на 100 километров.
 */ 

#include <iostream>

using namespace std;

int main()
{
    int carMileage;
    int fuelConsumption;

    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "РАСХОД БЕНЗИНА\n";
    cout << "--------------------------------------------------\n";

    cout << "Введите пробег автомобиля: _______ км\b\b\b\b\b\b\b\b\b\b";
    cin >> carMileage;

    cout << "Введите разход бензни    : _______ литры\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin >> fuelConsumption;

    float fuelConsumptionPerLiter = float(fuelConsumption) / float(carMileage) * 100;

    cout << "Расчитан расход бензина  : " << fuelConsumptionPerLiter << " литров на 100 км." << endl;
    cout << "--------------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif
}
