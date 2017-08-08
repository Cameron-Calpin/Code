#include <iostream>
#include <stdio.h>

using namespace std;

int functionPtr(int x, int y, int* addition);
int functionRef(int x, int y, int& addition);

int main() {
	int num1, num2;
	cout << "Enter number: " << endl;
	cin >> num1;
	cout << "Enter another number: " << endl;
	cin >> num2;

	int addition1 = 0;
	int multi = functionPtr(num1, num2, &addition1);
	cout << multi;
	cout << "Multiplication: " << multi << "\n\n";

	int addition2 = 0;
	int Multi = functionRef(num1, num2, addition2);
	cout << "Multiplication: " << Multi;
}

int functionPtr(int x, int y, int* addition) {
	if (addition) {
		*addition = x + y;
		cout << "Addition: " << *addition << endl;
	}
	return x * y;
}

int functionRef(int x, int y, int& addition) {
	addition = x + y;
	cout << "Addition: " << addition << endl;
	return x * y;
}