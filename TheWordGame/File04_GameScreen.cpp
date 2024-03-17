#include <conio.h>
#include <iomanip>
#include <iostream>
#include "File11_Header.h"

using namespace std;

// Функция выводит игровой экран и счёт
void getGameScreen(string* list)
{
    string pc_word = chooseWord(list);
    string user_word;

    int used_index[400];
    int index;
    int score = 0;
    
    for (int i = 0; i < 400; i++) used_index[i] = -1;

    index = searchIndex(pc_word, list);
    used_index[index] = index;

    do
    {
        cout
            << "|--------------------------------------|" << endl
            << "|       >>> The Word Game <<<          |" << endl
            << "|--------------------------------------|" << endl
            << "| Введите ноль (0) чтобы выйти из игры |" << endl
            << "|--------------------------------------|" << endl
            << "| Счёт: " << setw(3) << score << setw(29) << "|" << endl
            << "|--------------------------------------|" << endl
            << "| Компьютер: " << setw(15) << pc_word << setw(12) << "|" << endl
            << "|--------------------------------------|" << endl;

        user_word = chooseUserWord(list, used_index, pc_word);
        pc_word = chooseWord(list, used_index, user_word);
        score++;
        system("cls");
    }
    while (pc_word != "list_is_empty");

    cout << "End_of_Game" << endl;
    exit(0);
}
