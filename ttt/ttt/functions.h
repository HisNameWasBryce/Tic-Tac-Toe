#pragma once
#include <iostream>
#include <vector>
#include <conio.h>

bool winCon(std::vector<char> grid);
bool playAgain(std::vector<int> score);

void endGame(std::string player1, std::string player2, std::vector<int> score);
void pause();
void clearInputBuffer();
void greet(std::string player1, std::string player2);
void draw(std::vector<char> grid);
void clear();

int keepScore(std::string player1, std::string player2, std::string winner);
int playerTurn(std::vector<char> grid);
int getGridInd(int selection, std::vector<char> grid);

std::string getplayer1Name();
std::string getplayer2Name();
std::string playBall(std::vector<char> grid, std::string player1, std::string player2);