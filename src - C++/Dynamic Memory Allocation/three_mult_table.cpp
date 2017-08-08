#include <iostream>
#include <stdio.h>

using namespace std;

void MultiplyThreeMatrix(int ***new_table,
						 int length, 
						 int width, 
						 int height);

int main() {
	int length, width, height;

	printf("Enter length of 3d array: ");
	scanf("%d", &length);
	printf("Enter a width of 3d array: ");
	scanf("%d", &width);
	printf("Enter a height of 3d array: ");
	scanf("%d", &height);

	length += 1;
	width  += 1;
	height += 1;

	int ***three_mult_array = new int**[length];

	for (int i = 0; i < length; i++) {
		three_mult_array[i] = new int*[width];
	}

	for (int k = 0; k < length; k++) {
		for (int j = 0; j < width; j++) {
			three_mult_array[k][j] = new int[height];
		}
	}

	MultiplyThreeMatrix(three_mult_array, length, width, height);

	for (int a = 0; a < length; a++) {
		for (int b = 0; b < width; b++) {
			delete[] three_mult_array[a][b];
		}
	}

	for (int c = 0; c < length; c++) {
		delete[] three_mult_array[c];
	}

	delete[] three_mult_array;
	three_mult_array = NULL;
}

void MultiplyThreeMatrix(int ***new_table, int l, int w, int h) {
	for (int i = 1; i < l; i++) {
		for (int j = 1; j < w; j++) {
			for (int k = 1; k < h; k++) {
				new_table[i][j][k] = i * j * k;
				cout << new_table[i][j][k] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
}