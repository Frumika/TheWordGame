#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "File11_Header.h"

using namespace std;

// ����� �������� ������
void getHomeScreen()
{
    char button;
    bool condition;

    cout
        << "|--------------------------------------|" << endl
        << "|       >>> The Word Game <<<          |" << endl
        << "|--------------------------------------|" << endl
        << "|           1. ������ ����             |" << endl
        << "|           2. ������� ����            |" << endl
        << "|           0. �����                   |" << endl
        << "|--------------------------------------|" << endl;

    do
    {
        button = _getch();
        condition = (button == '1' || button == '2' || button == '0');
    }
    while (condition == false);

    switch (button)
    {
    case '1':
        {
            system("cls");
            getModeSelection();
        }
        break;
    case '2':
        {
            system("cls");
            getInfo(1);
        }
        break;
    default:
        {
            cout << "Exit Code" << endl;
            exit(0);
        }
    }
}
