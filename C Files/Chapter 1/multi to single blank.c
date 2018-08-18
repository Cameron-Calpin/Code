#include <stdio.h>
/* replaces multiple blanks with a single blank */
int main() {
	int c, prevchar;

	while((c = getchar()) != EOF) {
		if (c != prevchar || prevchar != ' ')
			putchar(c);
		prevchar = c;
	}
}