#include <stdio.h>

main() {
	int c;
	char t, b, bs;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			putchar('\t');
		if (c == '\b')
			putchar('\b');
		if (c == '\\')
			putchar('\\');
	}
}