#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void display_maze(string **maze, int row, int col);
void generate_path(string **maze, int row, int col);

int main() {
	int size, x_pos, y_pos;

	printf("Enter a dimension for the maze: ");
	scanf("%d", &size);

	int row = size;
	int col = size;

	string **layout = new string*[row];

	for (int i = 0; i < row; i++) {
		layout[i] = new string[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == 0 && j == 0) {
				cout << " ";
				layout[i][j] = " ";
			}
			else if (i == 0 && j == col - 1) {
				cout << " " << endl;
				layout[i][j] = " ";
			}
			else if (j == 0 && i != 0) {
				cout << "|";
				layout[i][0] = "|";
			}
			else if (i == 0) {
				cout << "__";
				layout[0][j] = "__";
			}
			else if (j + 1 == col) {
				cout << "|" << endl;;
				layout[i][col - 1] = "|";
			}
			else if (i + 1 == row) {
				cout << "__";
				layout[row - 1][j] = "__";
			}
			else if (i + 1 == row
					 && j + 1 == col) {
					 	cout << "__";
						layout[i][j] == "__";
			}
			else if (j == col - 2) {
				cout << "  ";
				layout[i][col - 2] = "  ";
			}
			else {
				cout << "  ";
				layout[i][j] = "  ";
			}
		}
	}

	srand(time(NULL));
	// choose 1 of the 4 sides of the maze box.
	int s_side = rand() % 4 + 1;
	// choose 1 of the panels of the side chosen.
	int s_panel = rand() % size + 1;

	int f_side = rand() % 4 + 1;
	int f_panel = rand() % size + 1;

	// Debugging
	cout << "Start side: " << s_side << endl;
	cout << "Start panel: " << s_panel << "\n\n";
	cout << "Finish side: " << f_side << endl;
	cout << "Finish panel: " << f_panel << "\n\n";

	
	switch(s_side) {
		// left vertical side
		case 1:
			layout[s_panel][0] = " ";
			break;
		// up horizontal side
		case 2:
			layout[0][s_panel] = "  ";
			break;
		// right vertical side
		case 3:
			layout[s_panel][col - 1] = " ";
			break;
		// down horizontal side
		case 4:
			layout[row - 1][s_panel] = "  ";
			break;
		default: exit(0);
	}

	switch(f_side) {
		// left vertical side
		case 1:
			layout[f_panel][0] = " ";
			break;
		// up horizontal side
		case 2:
			layout[0][f_panel] = "  ";
			break;
		// right vertical side
		case 3:
			layout[f_panel][col - 1] = " ";
			break;
		// down horizontal side
		case 4:
			layout[row - 1][f_panel] = "  ";
			break;
		default: exit(0);
	}

	for (int i = 1; i < row - 1; i++) {
		for (int j = 1; j < col - 1; j++) {
			generate_path(layout, i, j);
		}
	}
	display_maze(layout, row, col);

	for (int i = 0; i < row; i++) {
		delete[] layout[i];
	}
	delete[] layout;
	layout = NULL;
}

void display_maze(string **maze, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << maze[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";
}

void generate_path(string **maze, int row, int col) {
	int choice = rand() % 2 + 1;
	if (choice == 1) {
		maze[row][col] = "__";
	}
	if (choice == 2) {
		maze[row][col] = " |";
	}
}