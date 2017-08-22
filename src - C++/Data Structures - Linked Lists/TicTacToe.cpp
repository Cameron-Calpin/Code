#include <iostream>
#include <stdio.h>
#include <cstdlib>

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
void p1_move(node** board, node** player, node* curr);
//void p2_move(node** board, node** p2_pos, node* curr);
//bool checkWinner(node* board, bool &win);
void addP1(node** player, int num);

int main() {
	bool win = false;
	int num;
	node* Board = NULL;
	node* head = Board;
	node* p1_pos = NULL;
	node* p2_pos = NULL;

	for (int i = 9; i > 0; i--) {
		createBoard(&Board, i);
	}
	while (true) {
		//system("cls");
		displayRefBoard(Board);
		cout << "\n\n";
		displayPlayBoard(Board);
		cout << "Enter number: ";
		cin >> num;
		addP1(&p1_pos, num);
		p1_move(&Board, &p1_pos, head);
		while (p1_pos != NULL) {
			cout << "P1 list: " << p1_pos->cell_num << " " << endl;
			p1_pos = p1_pos->next;
		}	
		//win = checkWinner(p1_pos, win);

		//system("cls");
		displayRefBoard(Board);
		cout << "\n\n";
		displayPlayBoard(Board);
		// p2_move(&Board, &p2_pos, head);
		// while (p2_pos != NULL) {
		// 	cout << "P2 list: " << p2_pos->cell_num << " " << endl;
		// 	p2_pos = p2_pos->next;
		// }
		//win = checkWinner(p2_pos, win);
	}
}

void createBoard(node** board, int value) {
	node* cell = new node;
	cell->cell_num = value;
	cell->player = '-';
	cell->next = *board;
	*board = cell;
}

void displayPlayBoard(node* board) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board->cell_num << "  ";
			board = board->next;
		}
		cout << endl;
	}
}

void displayRefBoard(node* board) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board->player << "  ";
			board = board->next;
		}
		cout << endl;
	}
}

void p1_move(node** board, node** player, node* curr) {
	int num;
	node* temp = *board;

	cout << "Player 1, enter number: ";
	cin >> num;
	for (temp = *board; temp != NULL; temp = temp->next) {
		if (num == temp->cell_num
			&& temp->player == '-') {
			temp->player = PLAYER1;


			//break;
		}
		// else
		// 	temp = temp->next;
	}
	//temp = curr;
}

void p2_move(node** board, node** p2_pos, node* curr) {
	int num;
	curr = *board;
	node* temp = *board;

	cout << "Player 2, enter number: ";
	cin >> num;
	while (temp != NULL) {
		if (num == temp->cell_num
			&& temp->player == '-') {
			temp->player = PLAYER2;

			node* p2 = new node;
			p2->cell_num = num;
			p2->next = *p2_pos;
			*p2_pos = p2;
			break;
		}
		else
			temp = temp->next;
	}
	temp = curr;
}

void addP1(node** player, int num) {
	node* p1 = new node;
	p1->cell_num = num;
	p1->player = '-';
	p1->next = NULL;
	if (*player == NULL) {
		*player = p1;
	}
	else {
		p1->next = *player;
		*player = p1;
	}
	//*player = p1;
	cout << "next node: " << p1->next << endl;
}

// bool checkWinner(node* board, bool &win) {

// }