#include <iostream>
#include <stdio.h>

using namespace std;

void MultiplyMatrix(int **new_table, int row, int col);

int main() {
	/*
	 *	i - Number of Rows
	 *	j - Number of Columns
	 */
	int i, j;
	printf("Enter row length: ");
	scanf("%d", & i);
	printf("Enter the column: ");
	scanf("%d", & j);
	i += 1;
	j += 1;

	int **mult_table = new int*[i];

	for (int k = 0; k < i; k++) {
		mult_table[k] = new int[j];
	}

	MultiplyMatrix(mult_table, i, j);

	// Delete array from the heap
	for (int g = 0; g < i; g++) {
		delete[] mult_table[g];
	}

	// Delete pointer from heap
	delete[] mult_table;
	mult_table = NULL;
}

void MultiplyMatrix(int **new_table, int row, int col) {

	for (int i = 1; i < row; i++) {
		for (int j = 1; j < col; j++) {
			new_table[i][j] = i * j;
			cout << new_table[i][j] << "\t";
		}
		cout << endl;
	}
}