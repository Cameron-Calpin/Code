#ifndef TTTBOARD_H
#define TTTBOARD_H

#include <string>

enum Square {
	EMPTY,
	X_TAKEN,
	O_TAKEN 
};

enum Player {
	PLAYER_X,
	PLAYER_O
};

struct TTTBoard {
	Square board[3][3];
	Player whose_move;

	std::string displaySquare(int x, int y);
	Square getSquare(int x, int y);
	void setSquare(Square sq, int x, int y);

	Player getMove();
	void makeMove(int x, int y);

	void initializeBoard();
	bool checkWinner();
};

std::string displayPlayer(Player pl);
std::string getValueFromEnum(Square sq);
void showBoard(TTTBoard b);

#endif // TTTBOARD_H