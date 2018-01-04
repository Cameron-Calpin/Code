#include "TTTBoard.h"
#include <iostream>

using namespace std;

Square TTTBoard::getSquare(int x, int y) {
	return board[x][y];
}

Player TTTBoard::getMove() {
	return whose_move;
}

void TTTBoard::makeMove(int from_x, int from_y, int to_x, int to_y) {
	board[to_x][to_y] = board[from_x][from_y];
	board[from_x][from_y] = EMPTY;
}

void TTTBoard::initializeBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = EMPTY;
		}
	}
}

void TTTBoard::showBoard () {
    cout << " "<<board[0][0]<<" | "<<board[1][0]<<" | "<<board[2][0]<<"\n";
    cout << "---------+---------+--------\n";
    cout << " "<<board[0][1]<<" | "<<board[1][1]<<" | "<<board[2][1]<<"\n";
    cout << "---------+---------+--------\n";
    cout << " "<<board[0][2]<<" | "<<board[1][2]<<" | "<<board[2][2]<<"\n\n";
}