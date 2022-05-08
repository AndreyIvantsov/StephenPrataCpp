/*****************************************************************************
 *
 *  Глава 5. Упражнение 2.
 *
 *  Перепишите код из листинга 5.4 с использованием объекта array вместо  
 *  встроенного массива и типа long double вместо long long. Найдите 
 *  значение 100! 
 *
 *  Листинг 5.4
 *
 *  // formore.срр — дополнительные сведения о циклах for 
 *  #include <iostream> 
 *  const int ArSize =16; // пример внешнего объявления 
 *  int main() 
 *  { 
 *      long long factorials[ArSize]; 
 *      factorials [1] = factorials[0] = 1LL; 
 *      for (int i = 2; i < ArSize; i + + ) 
 *          factorials[i] = i * factorials[i-l]; 
 *      for (i = 0; i < ArSize; i + + ) 
 *          std::cout << i << "! = " << factorials [i] << std::endl; 
 *      return 0; 
 *  }
 *
 *****************************************************************************/

#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int ArSize = 101;

    array<long double, ArSize> factorials;

    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "5.2 ФАКТОРИАЛ 100!\n";
    cout << "------------------------------------------\n";

    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];

    for (int i = 0; i < ArSize; i++)
        cout << i << "! \t = " << factorials[i] << endl;

    cout << "------------------------------------------\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif
}