/*
 * FunctionReturn.cpp
 *
 *  Created on: Dec 16, 2016
 *      Author: cam
 */
#include <iostream>
using namespace std;

// void means the function does not return a value to the caller
void returnNothing() {
	cout << "HI" << endl;
	// This function does not return a value so no return statement is needed
}

// int means the function return an integer, so a return statement is needed
int return5() {
	return 5; // This function returns an integer, so a return statement is needed
}

int main() {
	cout << return5() << endl; // prints 5
	cout << return5() + 2 << endl; // prints 7

	returnNothing(); // function returnNothing() is called, no value returned.
	return5(); // function return5() called, return value is discarded.

	//cout << returnNothing(); // This line will not compile. You'll need to comment it out to continue.

	return 0;
}


