const bool OS_WIN = true;

void prepareConsole()
{
    #ifdef _WIN32
        // Для корректной работы кодировки UTF-8 в консоли
        // Windows 10 и 11 необходимо в параметрах
        // Время и язык -> Язык и регион -> Административные языковые
        // параметры -> вкладка Дополнительно -> Изменить язык системы ->
        // Установить галочку "Бета версия: Использовать Юникод (UTF-8)
        // для поддержки языка во всем мире"
        system("chcp utf-8 > nul");
        //system("cls");
    #else
        system("clear");
    #endif
}

void pauseConsole()
{
    #ifdef _WIN32
        system("pause");
    #endif
}
