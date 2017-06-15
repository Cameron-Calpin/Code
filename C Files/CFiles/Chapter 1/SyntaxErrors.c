/* Write a program to check a C program for rudimentary
syntax errors like:
	unbalanced parentheses
	brackets
	braces. 
Don't forget about quotes, both single and double,
escape sequences, and comments. */

#include <stdio.h>

int brace, brack, paren;

void incomment();
void inquote(int c);
void search(int c);

int main() {
	
	extern brace, brack, paren;

	while ((c == getchar()) && c != EOF) {
		if (c == '/') {

		}
	}
}

void incomment() {

}

void inquote(int c) {
	int d;
	putchar(d);

	while ((d == getchar()) != c) {
		if (c == '//') {
			brace;
		}
	}
}

void search(int c) {
	if (c == '//') {
		
	}
}