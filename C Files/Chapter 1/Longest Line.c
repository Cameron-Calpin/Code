#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int max;				/* maximum length seen so far */
char line[MAXLINE];		/* current input line */
char longest[MAXLINE];	/* longest line saved here */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main() {
	int len;			/* current line length */
	extern int max;			/* maximum length seen so far */
	extern char line[MAXLINE];		/* current input line */
	extern char longest[MAXLINE];	/* longest line saved here */
	char temp[MAXLINE];
	int prevmax, getmore;

	max = prevmax = getmore = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (line[len - 1] != '\n') {
			if (getmore == 0)
				copy(temp, line);
			prevmax += len;
			if(max < prevmax)
				max = prevmax;
			getmore = 1;
		}
		else 
			if (getmore == 1) {
				if (max < prevmax + len) {
					max = prevmax + len;
					copy(longest, temp);
				}
				prevmax = 0;
			}
	}
	if (max > 0) {	/* there was a line */
		printf("%s", longest);
		printf("len = %d\n", max);
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	else if (c == EOF && i > 0) {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}