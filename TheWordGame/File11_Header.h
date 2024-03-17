#pragma once
#include <string>

void getHomeScreen();

void getModeSelection();

void selectFile(char button);

void getGameScreen(std::string* list);

std::string toLowercase(std::string word);

void getInfo(short func);

bool checkWords(std::string first_word, std::string second_word);

int searchIndex(std::string word, std::string* list);

std::string chooseWord(std::string* list,int* used_index ,std::string user_word);
std::string chooseWord(std::string* list);
std::string chooseUserWord(std::string* list, int* used_index, std::string pc_word);