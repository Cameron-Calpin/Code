#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int randRange (int low, int high) {
	// we get a random number, get it to be between 0 and
	// the number of values in our range, then add the
	// lowest possible value
	return rand() % (high - low + 1) + low;
}

int main() {
	srand (time(NULL));
	for (int i = 0; i < 1000; ++i) {
		cout << randRange(4, 10) << '\n';
	}

	int srand_seed = time(NULL);
	cout << "Seconds: " << srand_seed << '\n';
	srand(srand_seed);
}