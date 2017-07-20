/* Program that takes an input and reverses it */
#include <stdio.h>

#define MAX 1000

int getNewLine(char s[], int max);
void reverse(char s[]);

int main(void) {
	int len;
	char line[MAX];

	while ((len = getNewLine(line, MAX)) != 0) {
		if (len > 1) {
			reverse(line);
			printf("%s\n", line);
		}
	}
	return 0;
}

int getNewLine(char s[], int lim) {
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char s[]) {
	int i, j;
	char temp;

	for (j = 0; s[j] != '\0'; ++j)
		;
	--j;

	if(s[j] == '\n') {
		s[j] = '\0';
		--j;
	}

	for (i = 0; i < j; i++) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		--j;
	}
}