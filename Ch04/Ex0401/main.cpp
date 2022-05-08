/* 
 * Напишите программу C++, которая запрашивает и отображает информацию,
 * как показано в следующем примере вывода:
 *      What is your first name ? Betty Sue
 *      What is your last name ? Yewe
 *      What letter grade do you deserve ? В
 *      What is your age ? 22
 *      Name : Yewe, Betty Sue
 *      Grade : С
 *      Age : 22
 * Обратите внимание, что программа должна принимать имена, состоящие из
 * более чем одного слова.Кроме того, программа должна уменьшать значение
 * grade на одну градацию — т.е.на одну букву выше. Предполагается, что
 * пользователь может ввести А, В или С, поэтому вам не нужно беспокоиться о
 * пропуске между D и F.
 */ 

#include <iostream>

using namespace std;

int main()
{
    const short NameSize = 30;
    char ch;

    struct info 
    {
        char firstName[NameSize];
        char lastName[NameSize];
        char grade;
        short age;
    } student;
    
    setlocale(0, "");

    #if OS_WIN == true 
        system("cls");
    #else
        system("clear");
    #endif

    cout << "IFORMATION\n";
    cout << "------------------------------------\n";
    
    cout << "What is your first name?: "; 
    cin.getline(student.firstName, NameSize);

    cout << "What is your last name? : "; 
    cin.getline(student.lastName, NameSize);

    cout << "What letter grade do you deserve?: ";
    cin >> student.grade;

    cout << "What is your age?       : "; 
    cin >> student.age;

    cout << "Name : " << student.lastName << ", " << student.firstName << endl;
    ch = student.grade;
    ch++;
    cout << "Grade: " << ch << endl;
    cout << "Age  : " << student.age << endl;

    #if OS_WIN == true 
        system("pause");
    #endif
}