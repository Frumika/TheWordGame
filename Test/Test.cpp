#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


string setRegister(string word)
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
void listOf(string word)
{
    for(char letter: word)
    {
        cout << letter << " | " << int(letter) << endl;
    }
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string word = "ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞßàáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ";
    cout << setRegister(word) << endl;
    listOf(word);
}
