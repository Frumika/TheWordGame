﻿#include <conio.h>
#include <iostream>
#include "File11_Header.h"

using namespace std;

void getInfo(short func)
{
    cout
        << "|--------------------------------------|" << endl
        << "|       >>> Правила  игры <<<          |" << endl
        << "|--------------------------------------|" << endl
        << "| Игрок выбирает тему игры             |" << endl
        << "| Компьютер выдаёт слово на эту тему   |" << endl
        << "| Игрок должен написать слово первая   |" << endl
        << "| буква которого совпадает с последней |" << endl
        << "| буквой слова, написанного            |" << endl
        << "| компьютером                          |" << endl
        << "|--------------------------------------|" << endl
        << "| Нажмите любую кнопку, для того чтобы |" << endl
        << "| убрать это окно                      |" << endl
        << "|--------------------------------------|" << endl;

    _getch();
    system("cls");

    if (func == 1) getHomeScreen();
    else if (func == 2) getModeSelection();
}
