/*
 * AddingTwoVariables.cpp
 *
 *  Created on: Dec 16, 2016
 *      Author: cam
 */
#include <iostream>
using namespace std;

// getValueFromUser will read a value in from the user, and return it to the caller
int getValueFromUser() {
	cout << "Enter an integer";
	int a;
	cin >> a;
	return a;
}

int main() {
	int x = getValueFromUser(); // first call to getValueFromUser
	int y = getValueFromUser(); // second call to getValueFromUser

	cout << x << " + " << y << " = " << x + y << endl;

	return 0;
}



