#include <stdio.h>

/* variable for computation results */
int answer;
float result;

int main() {
	answer = 2 + 2;
	(void) printf("The answer is %d\n", answer);

	result = 7.0 / 22.0;
	(void) printf("The result is %f\n", result);

	return 0;
}