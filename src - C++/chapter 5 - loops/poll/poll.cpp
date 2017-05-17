#include <iostream>

using namespace std;

int main() {
	
	int num, opt1, opt2, opt3 = 0;

	cout << "Who was the first president?" << endl;
	cout << "1) George Washington" << endl;
	cout << "2) Bob Ross" << endl;
	cout << "3) Arnold Schwarzanegger" << endl;
	
	do {
		cin >> num;
		if (num == 1) {
			opt1++;
		}
		else if (num == 2) {
			opt2++;
		}
		else if (num == 3) {
			opt3++;
		}
		else {
			cout << "Please enter one of the choices." << "\n";
			continue;
		}
	} while (num != 0);

	cout << "1) ";
	for (int i = 0; i < opt1; i++) {
		cout << "0";
	}
	cout << "\n" << "2) ";
	for (int j = 0; j < opt2; j++) {
		cout << "0";
	}
	cout << "\n" << "3) ";
	for (int x = 0; x < opt3; x++) {
		cout << "0";
	}
}