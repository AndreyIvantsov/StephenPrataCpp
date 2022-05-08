/* 
 * Перепишите листинг 4.4, применив класс C++ string вместо массивов char.
 * 
 *      // insrt2.cpp -- чтение более одного слова с помощью getline 
 *      #include <iostream> 
 *      int main()
 *      {
 *          using namespace std;
 *          const int ArSize = 20;
 *          char name[ArSize];
 *          char dessert[ArSize];
 *          cout << "Enter your name:\n";
 *          cin.getline(name, ArSize);
 *          cout << "Enter your favorite dessert:\n";
 *          cin.getline(dessert, ArSize);
 *          cout << "I have some delicious " << dessert;
 *          cout << " for you, " << name << " .\n";
 *          return 0;
 *      } 
 */ 
 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string dessert = "***";

    system("chcp 1251 > nul");
    
    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "Переписываем листинг 4.4\n";
    cout << "---------------------------------------\n";
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your favorite dessert: ";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    cout << "---------------------------------------\n";
    
    #if OS_WIN == true 
        system("pause");
    #endif

    return 0;
}