enum Square {
	EMPTY,
	TAKEN
};

enum Player {
	PLAYER_X,
	PLAYER_Y
};

struct TTTBoard {
	TTTBoard board[3][3];
	Player whose_move;

	Square getSquare(int x, int y);
	Player getMove();
	void makeMove(int from_x, int from_y, int to_x, int to_y);
};