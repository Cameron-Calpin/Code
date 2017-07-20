#include <stdio.h>

/* print a horizontal histogram of words in the input */

#define size 10

main() {
	int array[size] = {1, 6, 5, 16, 26, 38, 92, 50, 80, 14};
	int i, j;

	for (i = 0; i <= size; ++i) {
		printf("\n%3d|", i);
		for (j = 0; j < array[i]; ++j)
			printf(" #");
	}
}