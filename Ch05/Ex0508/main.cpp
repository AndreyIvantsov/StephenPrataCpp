/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                              
 *  Глава 5. Упражнение 8.
 *
 *  Напишите программу, которая использует массив char и цикл для чтения по
 *  одному слову за раз до тех пор, пока не будет введено слово done. Затем 
 *  программа должна сообщить количество введенных слов (исключая done). 
 *  
 *  Пример запуска должен быть таким:
 *      Вводите слова (для завершения введите слово done):
 *      anteater birthday category dumpsteг
 *      envy finagle geometry done for sure
 *      Вы ввели 7 слов .
 *  
 *  Вы должны включить заголовочный файл cstring и применять функцию
 *  strcmp () для выполнения проверки.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int MaxSezeWord = 30;
    char word[MaxSezeWord];
    int count = 0;
    
    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif

    cout << "5.8 ВВОД СЛОВ\n";
    cout << "-----------------------------------------------------\n";

    cout << "Вводите слова (для завершения введите слово \"конец\"\n";

    do
    {
        cin >> word;
        count++;
    } while (strcmp(word, "конец"));

    cout << "Вы ввели " << count - 1 << " слов.\n\n";

    #if OS_WIN == true 
        system("pause");
    #endif 

    return 0;
}