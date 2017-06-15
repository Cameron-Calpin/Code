#include <stdio.h>
/* replaces multiple blanks with a single blank */
main() {
	char str[] = "One two          three  four five  ";
	int prev = EOF, c;

	while((c = getchar()) != EOF) {
		if (c == ' ' || prev != ' ')
			putchar(c);
		else 
			putchar(' ');
		c = getchar();
	}
    printf("%s\n", str);
}