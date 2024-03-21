#include <conio.h>
#include <iomanip>
#include <iostream>
#include "File11_Header.h"

using namespace std;

void getEndOfGame(int score)
{
    system("cls");

    cout
        << "|--------------------------------------|" << endl
        << "|         >>> ����� ���� <<<           |" << endl
        << "|--------------------------------------|" << endl
        << "| ��� ����: " << setw(3) << score << setw(25) << "|" << endl
        << "|--------------------------------------|" << endl
        << "| ������� ����� ������, ��� ���� ����� |" << endl
        << "| ������ ��� ����                      |" << endl
        << "|--------------------------------------|" << endl;
    _getch();
    system("cls");
    getHomeScreen();
}

// ������� ������� ������� ����� � ����
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
            if (seeAnswer(list, used_index, pc_word))
            {
                cout
                    << "|--------------------------------------|" << endl
                    << "|       >>> The Word Game <<<          |" << endl
                    << "|--------------------------------------|" << endl
                    << "| ������� ���� (0) ����� ����� �� ���� |" << endl
                    << "|--------------------------------------|" << endl
                    << "| ����: " << setw(3) << score << setw(29) << "|" << endl
                    << "|--------------------------------------|" << endl
                    << "| ���������: " << setw(26) << pc_word << setw(1) << "|" << endl
                    << "|--------------------------------------|" << endl;

                user_word = chooseUserWord(list, used_index, pc_word, score);
                pc_word = chooseWord(list, used_index, user_word);
                score++;
                system("cls");
            }
            else break;
        }
        while (pc_word != "list_is_empty");

    getEndOfGame(score);
}
