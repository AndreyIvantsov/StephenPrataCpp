/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Напишите программу на C++, которая использует три определяемых
 * пользователем функции(включая main()) и генерирует следующий вывод:
 *      Three blind mice
 *      Three blind mice
 *      See how they run
 *      See how they run
 * Одна функция, вызываемая два раза, должна генерировать первые две строки,
 * а другая, также вызываемая два раза — оставшиеся строки.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include "../../common.h"
#include "Ex0103.h"

using namespace std;

int main()
{
    prepareConsole();

   std::cout << "ИСПОЛЬЗОВАНИЕ ФУНКУИЙ" << endl;
   std::cout << "---------------------" << endl;

   ThreeBlindMice();
   ThreeBlindMice();
   SeeHowTheyRun();
   SeeHowTheyRun();

   pauseConsole();

    return 0;
    
}
