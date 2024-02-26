#include <string>
#include <fstream>
#include "File11_Header.h"

using namespace std;

// Выбор, открытие и запись нужного файла в массив
void selectFile(char button)
{
    ifstream file; // переменная для чтения файла
    string list[150]; // массив для записи файла 
    string word; // считываемое из файла слово для записи в массив 
    int counter = 0; // текущий записываемый индекс

    switch (button)
    {
    case'1':
        {
            file.open("File12_Animals.txt");
        }
        break;
    case'2':
        {
            file.open("File13_Cities.txt");
        }
        break;
    case'3':
        {
            file.open("File14_Plants.txt");
        }
        break;
    }


    if (file.is_open())
    {
        while (getline(file, word))
        {
            list[counter] = word;
            counter++;
        }
    }

    file.close();
    getGameScreen(list);
}
