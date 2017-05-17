#include <iostream>

using namespace std;

int main() {
	int j = 5;
	for (int i = 0; i < 10 && j > 0; i++) {
		cout << i * j << " ";
		j = j - i;
	}
}