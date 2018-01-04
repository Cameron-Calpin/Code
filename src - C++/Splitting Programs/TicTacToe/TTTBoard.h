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

	std::string getSquare(int x, int y);
	void setSquare(Square sq, int x, int y);
	Player getMove();
	void makeMove(Player pl, int x, int y);

	void initializeBoard();
};

std::string getValueFromEnum(Square sq);
void showBoard(TTTBoard b);