#include <stdio.h>

/* count characters in input; 1st version */

int main() {
	long nc;

	nc = 0;

	/* count characters in input; 1st version */
	while (getchar() != EOF) 
		++nc;
	printf("Characters counted: %ld\n", nc);

	/* count characters in input; 2nd version */
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("Characters counted: %ld\n", nc);
}