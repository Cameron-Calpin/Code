#include <iostream>
#include <string>

using namespace std;

int main() {
	int age1, age2;

	cout << "Enter age of person one: " << "\n";
	cin >> age1;

	cout << "Enter age of person two: " << "\n";
	cin >> age2;

	if (age1 > age2) {
		cout << "person one is older" << endl;
	}
	else if (age1 < age2) {
		cout << "person two is older" << endl;
	}
	else if (age1 == age2) {
		cout << "person one and person two are the same age" << endl;
	}
	if (age1 > 900 || age2 > 900) {
		cout << "You are not a timelord..." << endl;
	}
	else {
		cout << "You're being ridiculous." << endl;
	}
}