#include <stdio.h>

main() {
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	if (c != EOF) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}

	printf("%d\n", EOF);
}