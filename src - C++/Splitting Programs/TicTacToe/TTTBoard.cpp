#include "TTTBoard.h"
#include <iostream>

std::string TTTBoard::displaySquare(int x, int y) {
	return getValueFromEnum(board[x][y]);
}

Square TTTBoard::getSquare(int x, int y) {
	return board[x][y];
}

void TTTBoard::setSquare(Square sq, int x, int y) {
	board[x][y] = sq;
}

Player TTTBoard::getMove() {
	return whose_move;
}

void TTTBoard::makeMove(int x, int y) {
	if (whose_move == PLAYER_X
		&& getSquare(x, y) == EMPTY) {
		setSquare(X_TAKEN, x, y);
		whose_move = PLAYER_O;
	}
	if (whose_move == PLAYER_O
		&& getSquare(x, y) == EMPTY) {
		setSquare(O_TAKEN, x, y);
		whose_move = PLAYER_X;
	}
}

void TTTBoard::initializeBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = EMPTY;
		}
	}
}

bool TTTBoard::checkWinner() {
	if ((getSquare(0,0) == X_TAKEN && getSquare(0,1) == X_TAKEN && getSquare(0,2) == X_TAKEN)
		|| (getSquare(1,0) == X_TAKEN && getSquare(1,1) == X_TAKEN && getSquare(1,2) == X_TAKEN)
		|| (getSquare(2,0) == X_TAKEN && getSquare(2,1) == X_TAKEN && getSquare(2,2) == X_TAKEN)
		|| (getSquare(0,0) == X_TAKEN && getSquare(1,0) == X_TAKEN && getSquare(2,0) == X_TAKEN)
		|| (getSquare(0,1) == X_TAKEN && getSquare(1,1) == X_TAKEN && getSquare(2,1) == X_TAKEN)
		|| (getSquare(0,2) == X_TAKEN && getSquare(1,2) == X_TAKEN && getSquare(2,2) == X_TAKEN)
		|| (getSquare(0,0) == X_TAKEN && getSquare(1,1) == X_TAKEN && getSquare(2,2) == X_TAKEN)
		|| (getSquare(0,2) == X_TAKEN && getSquare(1,1) == X_TAKEN && getSquare(2,0) == X_TAKEN))
	{
		std::cout << "Player X Wins!" << "\n\n";
		return true;
	}

	if ((getSquare(0,0) == O_TAKEN && getSquare(0,1) == O_TAKEN && getSquare(0,2) == O_TAKEN)
		|| (getSquare(1,0) == O_TAKEN && getSquare(1,1) == O_TAKEN && getSquare(1,2) == O_TAKEN)
		|| (getSquare(2,0) == O_TAKEN && getSquare(2,1) == O_TAKEN && getSquare(2,2) == O_TAKEN)
		|| (getSquare(0,0) == O_TAKEN && getSquare(1,0) == O_TAKEN && getSquare(2,0) == O_TAKEN)
		|| (getSquare(0,1) == O_TAKEN && getSquare(1,1) == O_TAKEN && getSquare(2,1) == O_TAKEN)
		|| (getSquare(0,2) == O_TAKEN && getSquare(1,2) == O_TAKEN && getSquare(2,2) == O_TAKEN)
		|| (getSquare(0,0) == O_TAKEN && getSquare(1,1) == O_TAKEN && getSquare(2,2) == O_TAKEN)
		|| (getSquare(0,2) == O_TAKEN && getSquare(1,1) == O_TAKEN && getSquare(2,0) == O_TAKEN))
	{
		std::cout << "Player O Wins!" << "\n\n";
		return true;
	}
	return false;
}

std::string displayPlayer(Player pl) {
	switch (pl) {
		case PLAYER_X:
			return "Player X";
		case PLAYER_O:
			return "PLAYER O";
		default:
			return "Error.";
	}
}

std::string getValueFromEnum(Square sq) {
	switch (sq) {
		case EMPTY:
			return " ";
		case X_TAKEN:
			return "X";
		case O_TAKEN:
			return "O";
		default:
			return "Not Valid.";
	}
}

void showBoard (TTTBoard b) {
    std::cout << " "<<b.displaySquare(0,0)<<" | "<<b.displaySquare(1,0)<<" | "<<b.displaySquare(2,0)<<"\n";
    std::cout << "---+---+---\n";
    std::cout << " "<<b.displaySquare(0,1)<<" | "<<b.displaySquare(1,1)<<" | "<<b.displaySquare(2,1)<<"\n";
    std::cout << "---+---+---\n";
    std::cout << " "<<b.displaySquare(0,2)<<" | "<<b.displaySquare(1,2)<<" | "<<b.displaySquare(2,2)<<"\n\n";
}