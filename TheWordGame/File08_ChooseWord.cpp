#include <ctime>
#include <string>
#include <iostream>
#include "File11_Header.h"
using namespace std;


// Возвращает случайное слово из списка
string chooseWord(string* list)
{
    srand(time(NULL));
    return *(list + rand() % 400);
}

// Возвращает слово в ответ на слово игрока либо сообщение о том что слов больше нет
string chooseWord(string* list, int* used_index, string user_word)
{
    string pc_word;
    bool condition;
    int index;
    int c = -1;

    do
    {
        c += 1;
        pc_word = *(list + c); // берем слово из списка
        index = *(used_index + c); // смотрим было ли оно использовано

        condition = (index == -1) && checkWords(user_word, pc_word);
        // если слово не было использованно и подходит под правила игры то true
        if (c == 400) return "list_is_empty"; // если закончился список
    }
    while (condition == false);

    *(used_index + c) = c; // помечаем что индекс использован

    return pc_word; // возвращаем подходящее слово
}

string chooseUserWord(string* list, int* used_index, string pc_word)
{
    string user_word;
    int index;
    bool condition;

    do
    {
        cout << "| Игрок: ";

        getline(cin, user_word);

        if (user_word == "0")
        {
            cout << "End_of_Game"  << endl;
            exit(0);
        }

        else
        {
            user_word = toLowercase(user_word);
            index = searchIndex(user_word, list);

            condition =
                (index != -1) && // cлово существует
                (checkWords(pc_word, user_word)) && // соблюдает правила
                (*(used_index + index) == -1); // не использовалось ранее

            if (condition == false) cout << "| Слово использованно / слова не существует" << endl;
        }
    }
    while (condition == false);

    *(used_index + index) = index;

    return user_word;
}
