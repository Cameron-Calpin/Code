#include <stdio.h>

/* count characters in input; 1st version */

main() {
	long nc;

	nc = 0;

	/* count characters in input; 1st version */
	while (getchar() != EOF) 
		++nc;
	printf("%ld\n", nc);

	/* count characters in input; 2nd version */
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}