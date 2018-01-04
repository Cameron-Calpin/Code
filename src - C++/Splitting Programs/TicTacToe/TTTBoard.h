#include <string>

enum Square {
	EMPTY,
	X_TAKEN,
	O_TAKEN
};

enum Player {
	PLAYER_X,
	PLAYER_Y
};

struct TTTBoard {
	Square board[3][3];
	Player whose_move;

	Square getSquare(int x, int y);
	Player getMove();
	void makeMove(int from_x, int from_y, int to_x, int to_y);
	void initializeBoard();
	void showBoard();
};