/* print input lines longer than 80 characters */

#include <stdio.h>
#define MAXLINE 1000
#define MIN 10

main() {
	int len;
	char line[MAXLINE]; /* current line */
	char lines[1000];	/* array with all lines */
	int i = 0;

	while ((len = ngetline(line, MAXLINE)) > 0) 
		if (len > MIN) {
			/* printf("String longer than 80 char: %s", line); */
			i = ncopy(line, lines, i); /* write character by character in lines */
		}
	line[i] = '\0';
	printf("%s", lines); /* print lines */
	return 0;
}

/* ngetline: read a line into s, return length */
int ngetline(char s[], int len) {
	int i, c;

	for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if(c == '\n') {  /* We add newline only if it's entered */
    	s[i] = c;
    	++i;
	}

	s[i] = '\0';
	return i;
}

/* copy a character array to another and return last wrote zone of array */
int ncopy(char from[], char to[], int i) {
	int j = 0;
	while (from[j] != '\0') {
		to[i] = from[j];
		i++;
		j++;
	}
	return i;
}