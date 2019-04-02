#include <stdio.h>

/* print input one word per line */

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			putchar('\n');
		else 
			putchar(c);
		c = getchar();
	}

	char str[] = "One two\nthree\nfour\nfive  ";
    printf("No of words: %s\n", str);
}