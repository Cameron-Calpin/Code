#include <iostream>
#include <string>

using namespace std;

int main() {

	string password;
	string username;

	cout << "Enter your username: " << "\n";
	getline(cin, username, '\n');

	cout << "Enter your password: " << "\n";
	getline(cin, password, '\n');

	if (username == "root" && password == "xyzzy") {
		cout << "Access allowed" << "\n";
	}
	else {
		cout << "Bad password. Denied access!" << "\n";
		return 0;
	}
}