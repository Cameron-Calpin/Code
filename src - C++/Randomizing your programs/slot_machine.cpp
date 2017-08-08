#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int range(int low, int high) {
	return rand() % (high - low + 1) + low;
}

int main() {
	int x, y, z;

	srand (time(NULL));

	while (1) {
		x = range(1, 4);
		y = range(1, 4);
		z = range(1, 4);

		cout << "|---|---|---|\n";
		cout << "| " << x << " | " << y << " | " << z << " |\n";
		cout << "|---|---|---|\n";

		if (x == y & y == z) 
			cout << "You Win!";
		else
			cout << "You lose";

		cin.get();
	}
}