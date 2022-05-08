/* 
 * Напишите программу, которая запрашивает текущую численность населения
 * Земли и текущую численность населения США(или любой другой страны).
 * Сохраните эту информацию в переменных типа long long.В качестве
 * результата программа должна отображать процентное соотношение численности
 * населения США(или выбранной страны) и всего мира.Результат выполнения
 * программы должен выглядеть следующим образом :
 *      Enter the world's population: 6898758899 
 *      Enter the population of the US : 310783781
 *      The population of the US is 4.50492 % of the world population.
 */ 

#include <iostream>

using namespace std;

int main()
{
    const int Million = 1000000;
    const int Billion = Million * 1000;
    
    float populationOfWorldBillion;
    float pupulationOfRussiaMillion;

    /*long double pW;
    long double pR;*/

    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "НАСЕЛЕНИЕ\n";
    cout << "-----------------------------------------------------\n";
    
    cout << "Введите население Земли  (млд.чел.): ";
    cin >> populationOfWorldBillion;
    
    cout << "Введите население России (мил.чел.): ";
    cin >> pupulationOfRussiaMillion;

    long long pW = populationOfWorldBillion * Billion;
    long long pR = pupulationOfRussiaMillion * Million;
    long double percent = 100 * (long double) pR / (long double) pW;

    cout << "Население России составляет " << percent << "% от населения Земли" << endl;
    cout << "-----------------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif

    return 0;
}