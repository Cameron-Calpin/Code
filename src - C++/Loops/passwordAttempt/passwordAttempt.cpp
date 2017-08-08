#include <iostream>
#include <string>

using namespace std;

int main() {

	string password;
	int attempts = 4;

	while (attempts != 1) {
		attempts--;
		cout << "You have " << attempts << " attempt(s) left. Enter password: " << "\n";
		cin >> password;
		if (password == "datboi") {
			cout << "Access Granted: have all the dank memes";
			break;
		}
	}
	cout << "Access Denied. No dank memes for you";
}