#include<string>

using namespace std;

/*
 * Функция сравнивает 2 слова
 * second_word рассматривается относительно first_word
 * т.е second_word должно наинаться с буквы на которую оканчивается first_word
 * в этом случае checkWords вернет true, иначе false
 */
bool checkWords(string first_word, string second_word)
{
    bool condition;
    int n;
    char last_letter = first_word[first_word.size() - 1];

    if( last_letter == 'ь' || last_letter == 'ы') n = 2;
    else n = 1;
    
    if(first_word[first_word.size() - n] == second_word[0]) condition = true;
    else condition = false;
    
    return condition;
}