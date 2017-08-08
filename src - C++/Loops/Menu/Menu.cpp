#include <iostream>

using namespace std;

int main() {
	int item;

	do {
		cout << "Please select a protein: " << "\n";
		cout << "1) Chicken" << "\n";
		cout << "2) Steak" << "\n";
		cout << "3) Lamb" << "\n";
		cout << "4) Mice" << "\n";
		cout << "5) Dog" << "\n";

		cin >> item;
	} while (item <= 0 || item >= 6);
}