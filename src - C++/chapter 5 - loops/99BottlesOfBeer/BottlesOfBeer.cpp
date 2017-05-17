#include <iostream>

using namespace std;

int main() {
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
	cout << "Enter two numbers: " << endl;
	cin >> x;
	cin >> y;
	cout << "Addition: " << x + y;
	cout << "Subtraction: " << x - y;
	cout << "Multiplication: " << x * y;
	if (y == 0) {
		cout << "Can't divide by zero" << endl;
	}
	cout << "Division: " << x / y;
}