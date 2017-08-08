#include <iostream>

using namespace std;

int main() {
	string password;

	do {
		if (password == "") {
			cout << "Enter your password: ";
		}
		else {
			cout << "Wrong password--try again: ";
		}
		cin >> password;
	} while (password != "xyzzy");
}