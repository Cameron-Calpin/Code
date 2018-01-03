#include "Operators.h"
#include <iostream>

using namespace std;

int add(int one, int two) {
	return one + two;
}

int subtract(int one, int two) {
	int result;
	if (one > two) {
		result = one - two;
	}
	else {
		result = two - one;
	}
	return result;
}

int multiply(int one, int two) {
	return one * two;
}

int divide(int one, int two) {
	if (two != 0) {
		return one / two;
	}
	cout << "Can't divide by zero." << endl;
}