#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct creds {
	string name;
	string address;
	string phone_num;
};

void printCreds(creds stuff) {
	cout << "Name: " << stuff.name << endl;
	cout << "Address: " << stuff.address << endl;
	cout << "Phone #: (" << stuff.phone_num.substr(0, 3) << ")"
		<< stuff.phone_num.substr(3, 3) << "-" << stuff.phone_num.substr(6, 4) << endl;
}

int main() {
	creds User;

	cout << "Enter your name:\n";
	getline(cin, User.name);

	cout << "Enter your address:\n";
	getline(cin, User.address);

	cout << "Enter your phone number:\n";
	getline(cin, User.phone_num);
	

	printCreds(User);
	return 0;
}