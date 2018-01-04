#ifndef HEADER_FILE
#define HEADER_FILE
	#include "TTTBoard.h"
#endif

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	TTTBoard bored;

	bored.initializeBoard();
	showBoard(bored);

	bored.makeMove(PLAYER_X, 1, 2);
	showBoard(bored);
	
	return 0;
}