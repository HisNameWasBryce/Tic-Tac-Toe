#include "functions.h"


int main()
{
	std::vector<char> grid = {'7', '8', '9', '4', '5', '6', '1', '2', '3'};
	std::string player1;
	std::string player2;
	bool restart = false;
	std::string winner;
	std::vector<int> score = {0, 0};

	// ask for both player names and explain the game rules
	player1 = getplayer1Name();
	player2 = getplayer2Name();
	clear();

	greet(player1, player2);
	
	do {

		grid = { '7', '8', '9', '4', '5', '6', '1', '2', '3' };

		//play game and record winner in a global var
		winner = playBall(grid, player1, player2);
		
		//keep track of running score
		if (player1 == winner || player2 == winner) {
			score[keepScore(player1, player2, winner)]++;
		}
		clear();

		//ask player if they want to play another round.
		restart = playAgain(score);
		clear();

	} while (restart);

	endGame(player1, player2, score);

	pause();
	return 0;

}

