#include "TTTBoard.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	TTTBoard bored;
	bored.whose_move = PLAYER_X;
	int x, y;

	bored.initializeBoard();
	showBoard(bored);

	while (!bored.checkWinner()) {
		cout << displayPlayer(bored.getMove()) << ", enter coordinates: ";
		cin >> x >> y;

		bored.makeMove(x, y);

		system("cls");
		showBoard(bored);
	}
	
	return 0;
}