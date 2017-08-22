#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void display_maze(string **maze, int row, int col);
void generate_path(string **maze, int &x_pos, int &y_pos, bool &check, int side, int &choice, int &moves);
void check_path(string **maze, int *options, int x_pos, int y_pos, int &count, int side, int moves, int choice);

int main() {
	int size;
	int moves = 0;		// keep track of moves made through maze
	int choice = 0;		// keep track of previous choice
	int opn[2];			// tuple containing x and y positions of maze
	int x_pos = opn[0];
	int y_pos = opn[1];
	bool done = false;
	string horz = "__";
	string vert = "|";

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
	int side = rand() % 4 + 1;
	// choose 1 of the panels of the side chosen.
	int panel = rand() % size + 1;

	// Debugging
	cout << "Side: " << side << endl;
	cout << "Panel: " << panel << endl;
	
	switch(side) {
		// left vertical side
		case 1:
			layout[panel][0] = " ";
			x_pos = panel;
			y_pos = 1;
			break;
		// up horizontal side
		case 2:
			layout[0][panel] = "  ";
			x_pos = 1;
			y_pos = panel;
			break;
		// right vertical side
		case 3:
			layout[panel][col - 1] = " ";
			x_pos = panel;
			y_pos = col - 2;
			break;
		// down horizontal side
		case 4:
			layout[row - 1][panel] = "  ";
			x_pos = row - 2;
			y_pos = panel;
			break;
		default: exit(0);
	}

	while (done != true) {
		display_maze(layout, row, col);
		generate_path(layout, x_pos, y_pos, done, side, choice, moves);
		cout << "Moves: " << moves << endl;
	}

	for (int i = 0; i < row; i++) {
		delete[] layout[i];
	}
	delete[] layout;
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

void generate_path(string **maze, int &x_pos, int &y_pos, bool &check, int side, int &choice, int &moves) {
	int count = 0;
	int *options = new int[4];

	check_path(maze, options, x_pos, y_pos, count, side, moves, choice);

	cout << "Options: ";
	for (int i = 0; i < count; i++) {
		cout << options[i] << " ";
	}	
	cout << "\n\n";

	choice = options[rand() % count];

	if (choice == 1) {
		cout << "Choice 1" << endl;
		maze[x_pos][y_pos] = "__";
		y_pos -= 1;
		moves++;
	}
	else if (choice == 2) {
		cout << "Choice 2" << endl;
		maze[x_pos][y_pos] = "|";
		x_pos -= 1;
		moves++;
	}
	else if (choice == 3) {
		cout << "Choice 3" << endl;
		maze[x_pos][y_pos] = "__";
		y_pos += 1;
		moves++;
	}
	else if (choice == 4) {
		cout << "Choice 4" << endl;
		maze[x_pos][y_pos] = "|";
		x_pos += 1;
		moves++;
	}
	else {
		check = true;
	}

	delete[] options;
	options = NULL;
}

void check_path(string **maze, int *options, int x_pos, int y_pos, int &count, int side, int moves, int choice) {
	cout << "Check path called." << endl;
	if (moves == 0) {
		cout << "Moves is 0." << endl;
		if (side != 1) {
			options[count] = 1;
			count++;
		}
		if (side != 2) {
			options[count] = 2;
			count++;
		}
		if (side != 3) {
			options[count] = 3;
			count++;
		}
		if (side != 4) {
			options[count] = 4;
		}		
	}
	if (moves != 0) {
		cout << "Moves is NOT 0." << endl;
		if (maze[x_pos][y_pos - 1] != "__"
			|| maze[x_pos][y_pos - 1] != "|"
			|| choice != 1) {
			options[count] = 1;
			cout << "Check 1" << endl;
			count++;
		}
		if (maze[x_pos - 1][y_pos] != "|"
			|| maze[x_pos - 1][y_pos] != "__"
			|| choice != 2) {
			options[count] = 2;
			cout << "Check 2" << endl;
			count++;
		}
		if (maze[x_pos][y_pos + 1] != "__"
			|| maze[x_pos][y_pos + 1] != "|"
			|| choice != 3) {
			options[count] = 3;
			cout << "Check 3" << endl;
			count++;
		}
		if (maze[x_pos + 1][y_pos] != "|"
			|| maze[x_pos + 1][y_pos] != "__"
			|| choice != 4) {
			options[count] = 4;
			cout << "Check 4" << endl;
		}
	}
}