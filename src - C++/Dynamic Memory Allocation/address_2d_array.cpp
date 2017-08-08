#include <iostream>
#include <stdio.h>

using namespace std;

void addressArray(int **mult_array, int row, int column);

int main() {
	int rows, columns;

	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
	scanf("%d", &columns);

	rows += 1;
	columns += 1;

	int **address_array = new int*[rows];

	for (int i = 0; i < rows; i++) {
		address_array[i] = new int[columns];
	}

	addressArray(address_array, rows, columns);

	for (int i = 0; i < rows; i++) {
		delete[] address_array[i];
	}

	delete[] address_array;
	address_array = NULL;
}

void addressArray(int **mult_array, int row, int column) {
	for (int i = 1; i < row; i++) {
		for (int j = 1; j < column; j++) {
			mult_array[i][j] = i * j;
			// Displays the address of each element.
			cout << static_cast<void*>(&mult_array[i][j]) << "\t";
		}
		cout << endl;
	}
}