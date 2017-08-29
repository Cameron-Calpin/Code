/*	Author: Cameron Calpin
 *
 *	Simple 2-player TicTacToe game. Looks sloppy and 
 *	uses unnecessary resources here and there, but I
 *	will update and revise the code to be more space 
 *	efficient.
 *
 *	Date: 8/28/17
 *	version: 1
 */

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

struct node {
	int cell_num;
	char player;
	node* next;
};

void createBoard(node** board, int value);
void displayPlayBoard(node* board);
void displayRefBoard(node* board);
void p1_move(node** board, node** player, int &count1);
void p2_move(node** board, node** p2_pos, int &count2);
void addP1(node** player, int num, int &count1);
void addP2(node** player, int num, int &count2);
void possibleWin(node* user, bool &win);
void checkWinner(node* user, bool &win, string combo);
void displayP1List(node* p1);

int main() {
	bool Win = false;
	int num;
	int p1_count = 0;
	int p2_count = 0;
	node* Board = NULL;
	node* head = Board;
	node* p1_pos = NULL;
	node* p2_pos = NULL;

	for (int i = 9; i > 0; i--) {
		createBoard(&Board, i);
	}
	while (Board != NULL) {
		// Erase system command to see debugging
		//system("cls");
		displayRefBoard(Board);
		cout << "\n\n";
		displayPlayBoard(Board);
		displayP1List(p1_pos);
		p1_move(&Board, &p1_pos, p1_count);
		possibleWin(p1_pos, Win);
		if (p1_count == 5) {
			cout << "It's a Tie!!" << endl;
			break;
		}
		if (Win == true) {
			cout << "Player 1 Wins!!" << endl;
			break;
		}
		// Debug: prints the bool value if there is a winner
		//cout << "\n\nGAME STATUS: " << Win << endl;

		// Erase system command to see debugging
		//system("cls");
		displayRefBoard(Board);
		cout << "\n\n";
		displayPlayBoard(Board);
		displayP1List(p2_pos);
		p2_move(&Board, &p2_pos, p2_count);
		possibleWin(p2_pos, Win);
		if (Win == true) {
			cout << "Player 2 Wins!!" << endl;
			break;
		}
		// Debug: prints the bool value if there is a winner
		// cout << "\n\nGAME STATUS: " << Win << endl;
	}
}

void createBoard(node** board, int value) {
	node* cell = new node;
	cell->cell_num = value;
	cell->player = '-';
	cell->next = *board;
	*board = cell;
}

/*
 *	Displays playing grid
 */
void displayPlayBoard(node* board) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board->cell_num << "  ";
			board = board->next;
		}
		cout << endl;
	}
}

/*
 *	Displays numbered grid as guide
 */
void displayRefBoard(node* board) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board->player << "  ";
			board = board->next;
		}
		cout << endl;
	}
}

void p1_move(node** board, node** p1_pos, int &count1) {
	int num;
	node* temp = *board;

	cout << "Player 1, enter number: ";
	cin >> num;
	for (temp = *board; temp != NULL; temp = temp->next) {
		if (num == temp->cell_num
			&& temp->player == '-') {
			temp->player = PLAYER1;
			addP1(p1_pos, num, count1);
		}
	}
}

void p2_move(node** board, node** p2_pos, int &count2) {
	int num;
	node* temp = *board;

	cout << "Player 2, enter number: ";
	cin >> num;
	for (temp = *board; temp != NULL; temp = temp->next) {
		if (num == temp->cell_num
			&& temp->player == '-') {
			temp->player = PLAYER2;
			addP2(p2_pos, num, count2);
		}
	}
}

void addP1(node** player, int num, int &count1) {
	node* p1 = new node;
	p1->cell_num = num;
	p1->player = '-';
	p1->next = *player;
	*player = p1;
	count1++;
	cout << "p1 count: " << count1 << endl;
}

void addP2(node** player, int num, int &count2) {
	node* p2 = new node;
	p2->cell_num = num;
	p2->player = '-';
	p2->next = *player;
	*player = p2;
	count2++;
	cout << "p2 count: " << count2 << endl;
}

void displayP1List(node* p1) {
	cout << "P1 List: ";
	while (p1 != NULL) {
		cout << p1->cell_num << " ";
		p1 = p1->next;
	}
	cout << "\n\n";
}

void possibleWin(node* user, bool &win) {
	string one, two, three, four, five,
	six, seven, eight;
	for (int i = 1; i < 9; i++) {
		switch(i) {
			case 1:
				one   = "147";
				checkWinner(user, win, one);
				cout << "Win: " << win << endl;
			case 2:
				two   = "258";
				checkWinner(user, win, two);
				cout << "Win: " << win << endl;
			case 3:
				three = "369";
				checkWinner(user, win, three);
				cout << "Win: " << win << endl;
			case 4:
				four  = "123";
				checkWinner(user, win, four);
				cout << "Win: " << win << endl;
			case 5:
				five  = "456";
				checkWinner(user, win, five);
				cout << "Win: " << win << endl;
			case 6:
				six   = "789";
				checkWinner(user, win, six);
				cout << "Win: " << win << endl;
			case 7:
				seven = "159";
				checkWinner(user, win, seven);
				cout << "Win: " << win << endl;
			case 8:
				eight = "357";
				checkWinner(user, win, eight);
				cout << "Win: " << win << endl;
			default:
				cout << "Win: " << win << endl;
				return;
		}
	}
}

void checkWinner(node* user, bool &win, string combo) {
	string list = "";
	ostringstream oss;

	cout << "STRING LIST: ";
	while (user != NULL) {
		oss << list << user->cell_num;
		user = user->next;
	}
	cout << oss.str() << endl;

	size_t k = 0;
	for (size_t i = 0; i < oss.str().size(); ++i) {
		cout << "we at " << i << " out of " << oss.str().size() - 1 << endl;
		cout << "Look --> " << oss.str().at(i) << endl;
		for (size_t j = 0; j < combo.length(); ++j) {
			if (combo[j] == oss.str().at(i)) {
				k++;
				cout << "num of k: " << k << endl;
				if (k == combo.size()) {
					cout << "Match!" << endl;
					win = true;
					break;
				}
			}
		}
	}
}

