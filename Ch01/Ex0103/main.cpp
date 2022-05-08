/*
 * Напишите программу на C++, которая использует три определяемых
 * пользователем функции(включая main()) и генерирует следующий вывод:
 *      Three blind mice
 *      Three blind mice
 *      See how they run
 *      See how they run
 * Одна функция, вызываемая два раза, должна генерировать первые две строки,
 * а другая, также вызываемая два раза — оставшиеся строки.
 */

#include <iostream>
#include "Ex0103.h"

using namespace std;

int main()
{
   setlocale(0, "");
   //system("clear");

   std::cout << "ИСПОЛЬЗОВАНИЕ ФУНКУИЙ" << endl;
   std::cout << "---------------------" << endl;

   ThreeBlindMice();
   ThreeBlindMice();
   SeeHowTheyRun();
   SeeHowTheyRun();

   std::cout << "---------------------" << endl << endl;

//   try {
//        system("pause");
//        int b = 0;
//        int a = 10/b;
//        cout << a << endl;
//   }  catch (int a) {
//        std::cerr << "Error" << a << endl;
//   }

   return 0;
}

