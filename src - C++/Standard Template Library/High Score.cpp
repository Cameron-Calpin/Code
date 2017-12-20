#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <ctime>

using namespace std;

void randomNumber(int *number);

int main() {
	vector<int> highscore;
	vector<int>::iterator itr = highscore.begin();
	srand(time(NULL));
	int number;
	char letter;

	while (true) {
		if (cin.get() == 'y') {
			randomNumber(&number);
			if (number > (*itr)) {
				highscore.insert(itr, number);
				cout << "HIGH SCORE: " << (*itr);
			}
			else {
				highscore.push_back(number);
			}
			cout << number << "\n\n";
		}
	}
	return 0;
}

void randomNumber(int *number) {
	*number = rand() % 50 + rand() % 50 + 1;
}