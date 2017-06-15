/* This program "folds" long input lines into two or more shorter lines after the
   last non-blank character that occurs beore the n-th column of input */

#include <stdio.h>

#define MAXLINELENGTH 1024

void foldLine(char[], int);
int validateInput();

main() {
	int column = 0;
	char line[MAXLINELENGTH];
	printf("At what column would you like to start folding? ");
	column = validateInput();
	foldLine(line, column);
	printf("\n%s", line);
	return 0;
}

void foldLine(char line[], int column) {
	int indexCounter = 0, ch = 0, linebreak = 0, indexCounter2 = 0;
	char sentence[MAXLINELENGTH];

	printf("\nEnter a sentence. ");
	fgets(sentence, MAXLINELENGTH, stdin);

	ch = sentence[indexCounter2];

	while (ch != '\n' && ch != EOF) {
		line[indexCounter++] = ch;
		linebreak++;

		if ((ch == ' ' || ch == '\t') && linebreak >= column) {
			line[indexCounter++] = '\n';
			linebreak = 0;
		} 
		else if ((ch == ' ' || ch == '\t') && linebreak == column - 1) {
			line[indexCounter++] = '\n';
			linebreak = 0;
		}

		ch = sentence[++indexCounter2];
	} 

	if (ch == '\n') {
		line[indexCounter++] = ch;
	}

	line[indexCounter] = '\0';
}

int validateInput() {
	int num = 0;

	while(scanf("%d", &num) != 1) { /* Check the return value of scanf */
		while(getchar() != EOF);
		printf("\nThis is not a valid number. Please try again. ");
	}
	while(getchar() != '\n'); /* Check if they entered a letter or more after a valid number */

	return num;
}
