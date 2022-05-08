const bool OS_WIN = false;

void prepareConsole()
{
    #if OS_WIN == true 
        system("chcp 1251 > nul");
        system("cls");
    #else
        system("clear");
    #endif
}

void pauseConsole()
{
    #if OS_WIN == true 
        system("pause");
    #endif 
}