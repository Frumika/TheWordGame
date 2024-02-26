#include <string>

// Поиск индекса слова в массиве, если слова нет - функция вернет -1
int searchIndex(std::string word, std::string* list)
{
    int res = -1;
    for (int i = 0; i < 150; i++) if (*(list + i) == word) res = i;

    return res;
}