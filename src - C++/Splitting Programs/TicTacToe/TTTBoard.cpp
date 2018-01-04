#include "TTTBoard.h"
#include <iostream>

std::string TTTBoard::getSquare(int x, int y) {
	return getValueFromEnum(board[x][y]);
}

void TTTBoard::setSquare(Square sq, int x, int y) {
	board[x][y] = sq;
}

Player TTTBoard::getMove() {
	return whose_move;
}

void TTTBoard::makeMove(Player pl, int x, int y) {
	if (getMove() == PLAYER_X) {
		setSquare(X_TAKEN, x, y);
	}
	if (getMove() == PLAYER_O) {
		setSquare(O_TAKEN, x, y);
	}
}

void TTTBoard::initializeBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = EMPTY;
		}
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
    std::cout << " "<<b.getSquare(0,0)<<" | "<<b.getSquare(1,0)<<" | "<<b.getSquare(2,0)<<"\n";
    std::cout << "---+---+---\n";
    std::cout << " "<<b.getSquare(0,1)<<" | "<<b.getSquare(1,1)<<" | "<<b.getSquare(2,1)<<"\n";
    std::cout << "---+---+---\n";
    std::cout << " "<<b.getSquare(0,2)<<" | "<<b.getSquare(1,2)<<" | "<<b.getSquare(2,2)<<"\n\n";
}