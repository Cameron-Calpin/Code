#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int coin_flip() {
	int flip;
	flip = rand() % 2 + 1; // assign random numbers

	if (flip == 1) 
		cout << "The flip was heads.\n";
	else
		cout << "The flip was tails.\n";
	return flip;
}

int main() {
	int NUM_FLIPS = 100;
	int count, face, heads = 0, tails = 0;

	// initialize the random number generator
	srand (time(NULL));

	// generate the count the number of theads and tails
	for (int count = 1; count <= NUM_FLIPS; count++) {
		face = coin_flip();
		if (face == 1)
			heads++;
		else
			tails++;
	}

	cout << "The number flips: " << NUM_FLIPS << "\n";
	cout << "The number of heads: " << heads << "\n";
	cout << "The number of tails: " << tails << "\n";
}