/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Глава 6. Упражнение 6.
 *
 *  Напишите программу, которая читает слова по одному за раз, пока не будет
 *  введена отдельная буква q. После этого программа должна сообщить количество
 *  слов, начинающихся с гласных, количество слов, начинающихся с согласных,
 *  а также количество слов, не попадающих ни в одну из этих категорий. Одним
 *  из возможных подходов может быть применение isalpha() для различения слов,
 *  начинающихся с букв, и остальных, с последующим применением if или switch
 *  для идентификации тех слов, прошедших проверку isalpha(), которые начинаются
 *  с гласных.
 *
 *  Пример запуска может выглядеть так:
 *
 *  Enterwords (q to quit) :
 *  The 12 awesome oxen ambled
 *  quietly across 15 meters of lawn. q
 *  5 words beginning with vowels
 *  4 words beginning with consonants
 *  2 others
 *
 *  Введите слова (q для выхода):
 *  12 прекрасных волов шли иноходью
 *  тихо через 15 метров газона. q
 *  1 слов, начинающихся с гласных
 *  7 слова, начинающиеся с согласных
 *  2 других
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include "../../common.h"

using namespace std;

bool isVowel(wchar_t letter)
{
    wchar_t ch = toupper(letter);

     bool isVowel =
         ch ==  'A' || ch ==  'E' || ch ==  'I' || ch ==  'O' || ch ==  'U' || ch == 'Y' ||   // Английские
         ch == L'А' || ch == L'И' || ch == L'Е' || ch == L'Ё' || ch == L'О' ||                // Русские
         ch == L'У' || ch == L'Ы' || ch == L'Э' || ch == L'Ю' || ch == L'Я';                  // Русские

     return isVowel;
}

int main()
{
    prepareConsole();

    setlocale(LC_ALL, "ru_RU.utf8");

    cout << "6.7 СТАТИСТИКА\n";
    cout << "----------------------------------------------\n";
    cout << "ВНИМАНИЕ: Работает тольк с латинницей!" << endl;
    cout << "Введите слова (q для выхода):" << endl;

    const string stopWord = "q";

    string inputWord = "q";
    int countVowels = 0;
    int countConsonants = 0;
    int countOthers = 0;
    wchar_t firstChar;

    do
    {
        cin >> inputWord;

        if (inputWord != stopWord)
        {
            firstChar = inputWord.at(0);

            if (isalpha(firstChar))
            {
                if (isVowel(firstChar))
                {
                    countVowels++;
                }
                else
                {
                    countConsonants++;
                }
            }
            else
            {
                countOthers++;
            }
        }
    } while (inputWord != stopWord);

    cout << endl << "Введено:" << endl;
    cout << "* слов, начинающихся с гласных         : " << countVowels << endl;
    cout << "* слов, начинающихся с согласных       : " << countConsonants << endl;
    cout << "* слов, начинающихся с других символов : " << countOthers << endl;

    pauseConsole();
}
