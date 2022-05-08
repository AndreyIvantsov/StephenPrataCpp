/* 
 * Напишите программу, которая запрашивает расход бензина в европейском
 * стиле(количество литров на 100 км) и преобразует его в стиль, принятый в
 * США — число миль на галлон.Обратите внимание, что кроме использования
 * других единиц измерений, принятый в США подход (расстояние / топливо)
 * противоположен европейскому(топливо / расстояние). Учтите, что 100
 * километров соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра.Таким
 * образом, 19 миль на галлон примерно равно 12.4 литров на 100 км, а 27 миль на
 * галлон — примерно 8.7 литров на 100 км.
 */ 

#include <iostream>

using namespace std;

int main()
{
    const double KmToMiles = 0.6214L;
    const double LiterToGallon = 1.0L / 3.875L;

    float fuelConsumptionEuro;
    
    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ПЕРЕСЧЕТ РАСХОДА ТОПЛИВА\n";
    cout << "-----------------------------------------------\n";
    cout << "Введите расход топлива (лиры на 100 км): ";
    cin >> fuelConsumptionEuro;

    double distanceOfMiles = 100 * KmToMiles;
    double fuelOfGallons = fuelConsumptionEuro * LiterToGallon;
    double fuelConsumptionUSA = distanceOfMiles / fuelOfGallons;

    cout << "Расход топлива " << fuelConsumptionUSA << " миль на галлон." << endl;
    cout << "-----------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif
}