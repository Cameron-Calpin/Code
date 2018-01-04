#ifndef HEADER_FILE
#define HEADER_FILE
	#include "TTTBoard.h"
#endif

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	TTTBoard bored;
	string EMPTY = " ";
	string X_TAKEN = "X";

	bored.showBoard();
	
	return 0;
}