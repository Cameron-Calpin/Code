#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int number = rand() % 100 + 1;

int lim_guess() {
	int guess, guesses;
	if (guess != number) {
		for (guesses = 5; guesses >= 0; --guesses) {
			cin >> guess;
			int position = guess - number;

			if (position >= 25 || position <= -25) {
				cout << "Very Cold!\n";
				cout << "You have " << guesses << " left!\n";
			}
			else if (position >= 15 || position <= -15) {
				cout << "Getting Warmer!\n";
				cout << "You have " << guesses << " left!\n";
			}
			else if (position < 15 || position > -15) {
				cout << "Very Hot!\n";
				cout << "You have " << guesses << " left!\n";
			}
			else if (guesses == 0) {
				cout << "You have run out of guesses\n";
				cout << "The number was: " << number;
			}	
		}
	}
	cout << "Congrats! You guessed the correct number!\n";
}

int main() {
	int num;
	srand (time(NULL));

	
	lim_guess();
}