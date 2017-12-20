#include <stdio.h>
#include <iostream>
#include <map>
#include <iterator>
#include <string>

using namespace std;

map<string, string> insert(map<string, string> n_2_e, string key, string value);
map<string, string> deleteNameEmail(map<string, string> n_2_e, string value);
map<string, string> updateEmail(map<string, string> n_2_e, string value);
void display(map<string, string> n_2_e);

int main() {
	map<string, string> name_to_email;
	int choice;
	string name, email, findEmail;

	system("cls");
	while (choice != 6) {
		cout << "ADDRESS BOOK\n\n";
		cout << "--------------------" << endl;
		cout << "1) Add Email" << endl;
		cout << "2) Remove Email" << endl;
		cout << "3) Update Email" << endl;
		cout << "4) Search Email" << endl;
		cout << "5) View List" << endl;
		cout << "6) Exit" << endl;

		cin >> choice;
		system("cls");

		switch(choice) {
			case 1:
				cout << "Enter name: ";
				cin >> name;
				cout<< "\nEnter email: ";
				cin >> email;
				name_to_email = insert(name_to_email, name, email);
				break;
			case 2:
				cout << "Enter name: ";
				cin >> name;
				name_to_email = deleteNameEmail(name_to_email, name);
				break;
			case 3:
				cout << "Enter email: ";
				cin >> findEmail;
				name_to_email = updateEmail(name_to_email, findEmail);
				break;
			case 4:
				break;
			case 5:
				display(name_to_email);
				break;
		}
	}
	return 0;
}

map<string, string> insert(map<string, string> n_2_e, string key, string value) {
	n_2_e[key] = value;
	return n_2_e;
}

map<string, string> deleteNameEmail(map<string, string> n_2_e, string value) {
	map<string, string>::iterator itr = n_2_e.find(value);
	if (itr != n_2_e.end()) {
		cout << "Name found. Deleting " << value << "\n\n";
		n_2_e.erase(value);
		return n_2_e;
	}
}

map<string, string> updateEmail(map<string, string> n_2_e, string value) {
	map<string, string>::iterator itr = n_2_e.begin();
	while (itr != n_2_e.end()) {
		if (itr->second == value) {
			string newEmail;
			cout << "Enter new email: ";
			cin >> newEmail;
			cout << "Updating " << itr->second << " to " << newEmail << "...\n\n";
			n_2_e[itr->first] = newEmail;
			return n_2_e;
		}
	}
	return n_2_e;
}



void display(map<string, string> n_2_e) {
	if (n_2_e.empty()) {
		cout << "List is empty.\n\n";
	}
	for (map<string, string>::iterator itr =
			n_2_e.begin(),
			end = n_2_e.end();
		itr != end;
		++itr)
	{
		cout << "Name: " << itr->first << endl;
		cout << "Email: " << itr->second << "\n\n"; 
	}
}