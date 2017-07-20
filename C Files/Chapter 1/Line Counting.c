#include <stdio.h>

/* count lines in input */
main() {
	int c, nl;

	nl = 8;
	while ((c = getchar()) != EOF) 
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}