#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int number = rand() % 100 + 1;

void guess(int guess) {
	int position = guess - number;

	if (position >= 50 || position <= -50)
		cout << "Very Cold!\n";
	else if (position >= 15 || position <= -15)
		cout << "Getting Warmer!\n";
	else if (position < 15 || position > -15)
		cout << "Very Hot!\n";

}

int main() {
	int num;
	srand (time(NULL));

	cout << "Guess a number between 1 and 100: ";
	
	do {
		cin >> num;
		guess(num);
	} while (num != number);
		
	cout << "Congrats! You guessed the correct number!\n";
}