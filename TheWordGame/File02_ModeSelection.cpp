#include <conio.h>
#include <iostream>
#include "File11_Header.h"

using namespace std;

void getModeSelection()
{
    char button;
    bool condition;

    cout
        << "|--------------------------------------|" << endl
        << "|      >>> ����� ������ ���� <<<       |" << endl
        << "|--------------------------------------|" << endl
        << "| 1. ��������                          |" << endl
        << "| 2. ������                            |" << endl
        << "| 3. ��������                          |" << endl
        << "| 4. ������� ����                      |" << endl
        << "| 0. ��������� �����                   |" << endl
        << "|--------------------------------------|" << endl;

    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '3'|| button == '4' || button == '0');
    }
    while (condition == false);

    switch (button)
    {
    case '0':
        {
            system("cls");
            getHomeScreen();
        }

        break;
    case '4':
        {
            system("cls");
            getInfo(2);
        }
        break;
    default:
        {
            system("cls");
            selectFile(button);
        }
    }
}
