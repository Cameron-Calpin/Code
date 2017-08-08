#include <iostream>
#include <string>

using namespace std;

void Bottles() {
	int x = 99;

	while (x != 0) {
		if (x == 1) {
			cout << x << " bottle of beer on the wall, " << x << " bottle of beer!";
		    cout << " take one down, pass it around, " << x << " bottle of beer on the wall!" << "\n";
		}
		else {
			cout << x << " bottles of beer on the wall, " << x << " bottles of beer!";
			cout << " take one down, pass it around, " << x << " bottles of beer on the wall!" << "\n";
		}
		x--;
	}
}

int calculator(int x, int y) {
	cout << "Addition: " << x + y << '\n';
	cout << "Subtraction: " << x - y << '\n';
	cout << "Multiplication: " << x * y << '\n';
	if (y == 0) {
		cout << "Can't divide by zero" << endl;
	}
	cout << "Division: " << x / y;
}

int main() {
	int option = 0;

	while (true) {
		cout << "-----MENU-----" << endl;
		cout << "1) 99 Bottles of Beer" << endl;
		cout << "2) Calculator" << endl;
		cout << "3) exit" << endl;
		cin >> option;

		if (option == 1) {
			Bottles();
			break;
		}
		else if (option == 2) {
			int x, y;
			cout << "Enter two numbers: " << endl;
			cin >> x;
			cin >> y;
			calculator(x, y);
			break;
		}
		else if (option == 3) {
			break;
		}
		else {
			cout << "Not a valid option. Please select 1 or 2" << endl;
		}
	}
}