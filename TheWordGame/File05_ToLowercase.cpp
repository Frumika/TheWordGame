#include <iostream>
#include <string>
#include "File11_Header.h"

using namespace std;

// Переводит все буквы в верхнем регистре в нижний
string toLowercase(string word)
{
    string new_word;
    int number;
    
    for(char letter: word)
    {
        number = int(letter);
        if(number == -88) new_word += char(number + 16);
        else if (-64 <= number && number < -32) new_word += char(number + 32);
        else new_word += letter;
    }

    return new_word;
}