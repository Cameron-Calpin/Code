#include <stdio.h>

/* count digits, white space, others */
main() {
	int c, i, nwhite, nother;
	int ndigit[] = {'0', '1', '2', ' ', '\n', '\t', '7', ' ', '8', '9'};

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = i;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}