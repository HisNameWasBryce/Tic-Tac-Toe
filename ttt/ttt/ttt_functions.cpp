#include "functions.h"

int keepScore(std::string player1, std::string player2, std::string winner) {
	if (player1 == winner) {
		return 0;
	}
	else {
		return 1;
	}
}

void endGame(std::string player1, std::string player2, std::vector<int> score) {
	std::cout << "=========================================================\n";
	std::cout << "=========================================================\n\n";
	std::cout << "                    THANK YOU FOR PLAYING!               \n\n";
	std::cout << "=========================================================\n";
	std::cout << "=========================================================\n\n\n\n";


	std::cout << "                    The final score is: \n";
	std::cout << "                    " << player1 << " = " << score[0] << "\n";
	std::cout << "                    " << player2 << " = " << score[1] << "\n";
	if (score[0] > score[1]) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n";
		std::cout << "                    " << player1 << " WINS!!              \n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
	}
	else if (score[1] > score[0]) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n";
		std::cout << "                    " << player2 << " WINS!!              \n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
	}
	else {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n";
		std::cout << "                    The match is a draw!                    \n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
	}
}

bool playAgain(std::vector<int> score) {
	bool valid = false;
	std::string choice;
	
	while(!valid) {

		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n";
		std::cout << "               Would you like to play again?              " << "\n";
		std::cout << "                           (Y/N)?                           \n";
		std::cout << "                   The current score is:                  \n\n";
		std::cout << "                                                          \n\n";
		std::cout << "                           " << score[0] << " to " << score[1] << "                             \n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cin >> choice;

		if ("y" == choice || "Y" == choice || "Yes" == choice || "yes" == choice) {
			valid = true;
			return true;
		}
		else if ("n" == choice || "N" == choice || "No" == choice || "no" == choice) {
			valid = true;
			return false;
		}	
		else {
			clearInputBuffer();
		}
	}
}

void pause() {
	std::cout << "Press Any Key to Continue...";
	(void)_getch();
	return;
}

bool winCon(std::vector<char> grid) {
	if ((grid[0] == grid[1] && grid[0] == grid[2]) || (grid[3] == grid[4] && grid[3] == grid[5]) || (grid[6] == grid[7] && grid[6] == grid[8])) {
		return true;
	}
	else if ((grid[0] == grid[3] && grid[0] == grid[6]) || (grid[1] == grid[4] && grid[1] == grid[7]) || (grid[2] == grid[5] && grid[2] == grid[8])) {
		return true;
	}
	else if ((grid[0] == grid[4] && grid[0] == grid[8]) || (grid[2] == grid[4] && grid[2] == grid[6])) {
		return true;
	}
	else {
		return false;
	}
}

// main player turn and winner calculation after each turn
std::string playBall(std::vector<char> grid, std::string player1, std::string player2) {
	std::string tie = "tie";
	draw(grid);

	grid[playerTurn(grid)] = 'X';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player1 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player1;
	}
	

	grid[playerTurn(grid)] = 'O';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player2 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player2;
	}
	

	grid[playerTurn(grid)] = 'X';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player1 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player1;
	}
	

	grid[playerTurn(grid)] = 'O';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player2 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player2;
	}
	

	grid[playerTurn(grid)] = 'X';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player1 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player1;
	}
	

	grid[playerTurn(grid)] = 'O';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player2 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player2;
	}
	

	grid[playerTurn(grid)] = 'X';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player1 << "            \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player1;
	}
	

	grid[playerTurn(grid)] = 'O';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player2 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player2;
	}
	

	grid[playerTurn(grid)] = 'X';
	draw(grid);
	if (winCon(grid) == true) {
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n\n\n\n";
		std::cout << "                    The winner is " << player1 << "           \n\n\n\n";
		std::cout << "=========================================================\n";
		std::cout << "=========================================================\n";
		return player1;
	}

	std::cout << "=========================================================\n";
	std::cout << "=========================================================\n\n\n\n";
	std::cout << "                   The game is a draw!                   \n\n\n\n";
	std::cout << "=========================================================\n";
	std::cout << "=========================================================\n";
	return tie;

}

int playerTurn(std::vector<char> grid) {
	bool valid = false;
	int selection;

	//continue to loop until the user gives a valid input 
	while (!valid) {

		std::cin >> selection;

		// clear input buffer if an incorrect value is given during user input
		if (10 == getGridInd(selection, grid)) {
			clearInputBuffer();
			draw(grid);
		}
		else
		{
			valid = true;
		}
	}

	return getGridInd(selection, grid);
}

std::string getplayer1Name() {
	std::string answer1;
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "Please enter the name of the player using crosses... \n";
	std::cin >> answer1;
	return answer1;
}

std::string getplayer2Name() {
	std::string answer1;
	std::cout << "Please enter the name of the player using circles... \n";
	std::cin >> answer1;
	return answer1;
}

void clearInputBuffer() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Invalid Input. Please try again...\n";
}

int getGridInd(int selection, std::vector<char> grid) {

		if (1 == selection && 'X' != grid[6] && 'O' != grid[6]) {
			return 6;
		}
		else if (2 == selection && 'X' != grid[7] && 'O' != grid[7]) {
			return 7;
		}
		else if (3 == selection && 'X' != grid[8] && 'O' != grid[8]) {
			return 8;
		}
		else if (4 == selection && 'X' != grid[3] && 'O' != grid[3]) {
			return 3;
		}
		else if (5 == selection && 'X' != grid[4] && 'O' != grid[4]) {
			return 4;
		}
		else if (6 == selection && 'X' != grid[5] && 'O' != grid[5]) {
			return 5;
		}
		else if (7 == selection && 'X' != grid[0] && 'O' != grid[0]) {
			return 0;
		}
		else if (8 == selection && 'X' != grid[1] && 'O' != grid[1]) {
			return 1;
		}
		else if (9 == selection && 'X' != grid[2] && 'O' != grid[2]) {
			return 2;
		}
		else {
			return 10;
		}
}

void greet(std::string player1, std::string player2) {


	std::cout << "=========================================================\n";
	std::cout << "=========================================================\n\n";
	std::cout << "               Hello " << player1 << " and " << player2 << "!\n";
	std::cout << "                      Welcome to:                         \n";
	std::cout << "                      Tic Tac Toe                         \n\n";
	std::cout << "                 Three in a row wins!                     \n\n";
	std::cout << " **Please use the indicated number to select your choice** \n";
	std::cout << "=========================================================\n";
	std::cout << "=========================================================\n\n\n\n";


	std::cout << player1 << " starts! Please select a square...\n\n\n\n\n";

}

void clear() {
	for (int i = 0; i < 16; i++) {
		std::cout << "\n\n";
	}
}


void draw(std::vector<char> grid) {
	for (int i = 0; i < 13; i++) {
		std::cout << "   ";
	}
	std::cout << "  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << "  \n";
	for (int i = 0; i < 13; i++) {
		std::cout << "   ";
	}
	std::cout << "-----------------\n";
	for (int i = 0; i < 13; i++) {
		std::cout << "   ";
	}
	std::cout << "  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << "  \n";
	for (int i = 0; i < 13; i++) {
		std::cout << "   ";
	}
	std::cout << "-----------------\n";
	for (int i = 0; i < 13; i++) {
		std::cout << "   ";
	}
	std::cout << "  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << "  \n";
}