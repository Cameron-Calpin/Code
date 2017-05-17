#include <iostream>

using namespace std;

int main() {
	int sum, num = 0;

	cout << "Enter numbers to compute sum. Press 0 to exit" << "\n";

	do {
		cout << "Enter a number: ";
		cin >> num;
		sum += num;
	} while (num != 0);

	cout << "Sum: " << sum;
}