#include "Operators.h"
#include <iostream>

using namespace std;

int main() {
	int one, two, result, choice;

	cout << "Enter two numbers: " << endl;
	cin >> one >> two;

	cout << "Operators" << endl;
	cout << "---------" << endl;
	cout << "1) Add" << endl;
	cout << "2) Substract" << endl;
	cout << "3) Multiply" << endl;
	cout << "4) Divide" << endl;

	cin >> choice;
	switch(choice) {
		case 1:
			result = add(one, two);
			cout << one << " + " << two << " = " << result;
			break;
		case 2:
			result = subtract(one, two);
			cout << one << " - " << two << " = " << result;			
			break;
		case 3:
			result = multiply(one, two);
			cout << one << " * " << two << " = " << result;
			break;
		case 4:
			result = divide(one, two);
			cout << one << " / " << two << " = " << result;
			break;
	}
	return 0;
}