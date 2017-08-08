/************************************
 *		Cameron Calpin
 *		Connect Four
 *		8/8/17
 *
 ************************************/

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void display_grid(string **grid, int row, int col);
void player_1_move(string **grid, string player_1, int row, int col);
void player_2_move(string **grid, string player_2, int row, int col);
void check_winner_p1(string **grid, string player, int row, int col, bool *win);
void check_winner_p2(string **grid, string player, int row, int col, bool *win);
void sort(int **grid, int size);

int main() {
	int row, col;
	string p1 = " x ";
	string p2 = " + ";
	bool win = false;

	printf("Enter dimensions of Connect Four Table(ex. 6x7): ");
	scanf("%dx%d", &row, &col);
	col += 2;

	string **layout = new string*[row];

	for (int k = 0; k < row; k++) {
		layout[k] = new string[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (j == 0) {
				cout << "|";
				layout[i][0] = "|";
			}
			else if (j + 1 == col) {
				cout << "|" << endl;
				layout[i][col - 1] = "|";
			}
			else {
				cout << " _ ";
				layout[i][j] = " _ ";
			}
		}
	} cout << "\n\n";

	while (win != true) {
		player_1_move(layout, p1, row, col);
		display_grid(layout, row, col);
		check_winner_p1(layout, p1, row, col, &win);
		if (win == true)
			cout << "Player 1 Wins!";

		player_2_move(layout, p2, row, col);
		display_grid(layout, row, col);
		check_winner_p2(layout, p2, row, col, &win);
		if (win == true)
			cout << "Player 2 Wins!";
	}


	for (int z = 0; z < row; z++) {
		delete[] layout[z];
	}

	delete[] layout;
	layout = NULL;
}

void display_grid(string **grid, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";
}

void player_1_move(string **grid, string player_1, int row, int col) {
	int selection;
	int i = 0;

	cout << "Player 1, enter a number (1 - " << col - 2 << "):";
	cin >> selection;

	while (i != row || i != -1) {

		if (grid[i][selection] == " x "
			|| grid[i][selection] == " + ") {
			grid[i - 1][selection] = player_1;
			break;
		}
		else if (i == row - 1) {
			grid[row - 1][selection] = player_1;
			break;
		}
		else if (grid[0][selection] == " x "
				 || grid[0][selection] == " + ") {
			cout << "Slot full, please select another slot." << endl;
			continue;
		}
		else
			i++;
	}
}

void player_2_move(string **grid, string player_2, int row, int col) {
	int selection;
	int i = 0;

	cout << "Player 2, enter a number (1 - " << col - 2 << "):";
	cin >> selection;

	while (i != row || i != -1) {

		if (grid[i][selection] == " x "
			|| grid[i][selection] == " + ") {
			grid[i - 1][selection] = player_2;
			break;
		}
		else if (i == row - 1) {
			grid[row - 1][selection] = player_2;
			break;
		}
		else if (grid[0][selection] == " x "
				 || grid[0][selection] == " + ") {
			cout << "Slot full, please select another slot." << endl;
			continue;
		}
		else
			i++;
	}
}

void check_winner_p1(string **grid, string player, int row, int col, bool *win) {
	int n = 0;
	int size = (row * col) / 2;
	int count_p1 = 0;
	bool s1,s2,s3,s4 = false;
	int **temp_p1 = new int*[size];

	for (int i = 0; i < size; i++) {
		temp_p1[i] = new int[2];
	}

	cout << "Checking Winner..." << endl;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (grid[i][j] == " x ") {
				temp_p1[count_p1][0] = i;
				temp_p1[count_p1][1] = j;
				count_p1++;
			}
		}
	}

	cout << "P1 Count: " << count_p1 << "\nP1: ";
	for (int i = 0; i < count_p1; i++) {
		cout << "{" << temp_p1[i][0] << ", " << temp_p1[i][1] << "}";
	}

	sort(temp_p1, count_p1);
	cout << "\n\n";

	if (count_p1 >= 4) {

		/*	+ + + + (across)
		 *
		 *	grid[same row][four columns in a row]
		 */
		for (int i = 0; i < count_p1 - 1; i++) {
			cout << "checking p1 row win" << endl;
			cout << temp_p1[i][0] << "\t" << temp_p1[i + 1][0] << endl;
			cout << temp_p1[i][1] + 1 << "\t" << temp_p1[i + 1][1] << endl;
			if (temp_p1[i][0] == temp_p1[i + 1][0]
				&& temp_p1[i][1] + 1 == temp_p1[i + 1][1]) {
					n++;
			}
			if (n == 3)
				*win = true;
		}

		/*	+
		 *	+
		 *	+
		 *	+
		 *
		 *	grid[four rows in a column][same column]
		 */
		for (int i = 0; i < count_p1 - 1; i++) {
			if (temp_p1[i][1] == temp_p1[i + 1][1]
				&& temp_p1[i][0] + 1 == temp_p1[i + 1][0]) {
					n++;
			}
			if (n == 3)
				*win = true;
		}

		/* +
		 *	 +
		 *	   +
		 *	     +
		 *
		 *	grid[row + 1][col + 1]
		 */
		for (int i = 0; i < count_p1 - 1; i++) {
			int r = temp_p1[0][0];
			int c = temp_p1[0][1];
			if (temp_p1[i][0] == r
				&& temp_p1[i][1] == c) {
					r += 1;
					c += 1;
					n++;
			}
			if (n == 3)
				*win = true;
		}

		/*
		 *       +
		 *     +
		 *   +
		 * +
		 *
		 *	grid[row - 1][col + 1]
		 */
		for (int i = 0; i < count_p1 - 1; i++) {
			int r = temp_p1[0][0];
			int c = temp_p1[0][1];
			if (temp_p1[i][0] == r
				&& temp_p1[i][1] == c) {
					r -= 1;
					c += 1;
					n++;
			}
			if (n == 3)
				*win = true;
		}
	}


	for (int z = 0; z < size; z++)
		delete[] temp_p1[z];

	delete[] temp_p1;
	temp_p1 = NULL;
}

void check_winner_p2(string **grid, string player, int row, int col, bool *win) {
	int n = 0;
	int size = (row * col) / 2;
	int count_p2 = 0;
	bool s1,s2,s3,s4 = false;
	int **temp_p2 = new int*[size];

	for (int i = 0; i < size; i++) {
		temp_p2[i] = new int[2];
	}

	cout << "Checking Winner..." << endl;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (grid[i][j] == " + ") {
				temp_p2[count_p2][0] = i;
				temp_p2[count_p2][1] = j;
				count_p2++;
			}
		}
	}

	cout << "\n\nP2 Count: " << count_p2 << "\nP2: ";
	for (int i = 0; i < count_p2; i++) {
		cout << "{" << temp_p2[i][0] << ", " << temp_p2[i][1] << "}";
	}

	sort(temp_p2, count_p2);
	cout << "\n\n";

	if (count_p2 >= 4) {

		/*	+ + + + (across)
		 *
		 *	grid[same row][four columns in a row]
		 */
		for (int i = 0; i < count_p2 - 1; i++) {
			cout << "checking p2 row win" << endl;
			cout << temp_p2[i][0] << "\t" << temp_p2[i + 1][0] << endl;
			cout << temp_p2[i][1] + 1 << "\t" << temp_p2[i + 1][1] << endl;
			if (temp_p2[i][0] == temp_p2[i + 1][0]
				&& temp_p2[i][1] + 1 == temp_p2[i + 1][1]) {
					n++;
			}
			if (n == 3)
				*win = true;
		}

		/*	+
		 *	+
		 *	+
		 *	+
		 *
		 *	grid[four rows in a column][same column]
		 */
		for (int i = 0; i < count_p2 - 1; i++) {
			if (temp_p2[i][1] == temp_p2[i + 1][1]
				&& temp_p2[i][0] + 1 == temp_p2[i + 1][0]) {
					n++;
			}
			if (n == 3)
				*win = true;
		}

		/* +
		 *	 +
		 *	   +
		 *	     +
		 *
		 *	grid[row + 1][col + 1]
		 */
		for (int i = 0; i < count_p2 - 1; i++) {
			int r = temp_p2[0][0];
			int c = temp_p2[0][1];
			if (temp_p2[i][0] == r
				&& temp_p2[i][1] == c) {
					r += 1;
					c += 1;
					n++;
			}
			if (n == 3)
				*win = true;
		}

		/*
		 *       +
		 *     +
		 *   +
		 * +
		 *
		 *	grid[row - 1][col + 1]
		 */
		for (int i = 0; i < count_p2 - 1; i++) {
			int r = temp_p2[0][0];
			int c = temp_p2[0][1];
			if (temp_p2[i][0] == r
				&& temp_p2[i][1] == c) {
					r += 1;
					c += 1;
					n++;
			}
			if (n == 3)
				*win = true;
		}
	}

	for (int z = 0; z < size; z++)
		delete[] temp_p2[z];

	delete[] temp_p2;
	temp_p2 = NULL;
}

void sort(int **grid, int size) {
	int temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (grid[j][0] > grid[j + 1][0]) {
				temp = grid[j][0];
				grid[j][0] = grid[j + 1][0];
				grid[j + 1][0] = temp;
			}
			if (grid[j][0] == grid[j + 1][0]) {
				if (grid[j][1] > grid[j + 1][1]){
					temp = grid[j][1];
					grid[j][1] = grid[j + 1][1];
					grid[j + 1][1] = temp;
				}
			}
		}
	}
}