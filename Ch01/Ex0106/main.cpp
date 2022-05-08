/* 
 * Напишите программу, в которой функция main() вызывает определяемую
 * пользователем функцию, принимающую в качестве аргумента расстояние в световых
 * годах и возвращающую расстояние в астрономических единицах.Программа
 * должна выдать запрос на ввод значения в световых годах и отобразить
 * следующий результат :
 *      Enter the number of light years : 4.2
 *      4.2 light years = 265608 astronomical units.
 * Астрономическая единица равна среднему расстоянию Земли от Солнца(около
 * 150 000 000 км, или 93 000 000 миль), а световой год соответствует расстоянию,
 * пройденному лучом света за один земной год (примерно 10 триллионов километров, 
 * или 6 триллионов миль). (Ближайшая звезда после Солнца находится на расстоянии 
 * 4.2 световых года.) Используйте тип double (как в листинге 2.4) и следующий 
 * коэффициент преобразования :
 *      1 световой год = 63 240 астрономических единиц
 */ 

#include <iostream>

using namespace std;

double LightYearsToAstronomicalUnits(double lightYears);

int main()
{
    double lightYears;

    setlocale(0, "");
    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "ПЕРЕВОД СВЕТОВЫЕ ГОДА В АСТРОНОМИЧЕСКИЕ ЕДИНИЦЫ\n";
    cout << "---------------------------------------------------------\n";
    cout << "Введите количество световых лет:\t";
    cin  >> lightYears;

    double AstronomicalUnits = LightYearsToAstronomicalUnits(lightYears);

    cout << lightYears << " световых года (лет) = " << AstronomicalUnits << " астрономических единицы" << endl;
    cout << "---------------------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif 
}

double LightYearsToAstronomicalUnits(double lightYears)
{
    return lightYears * 63240;
}