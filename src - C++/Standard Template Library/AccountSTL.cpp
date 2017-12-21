#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include <cstdlib>

using namespace std;

void registerUser(map<string, string> *user);
void LogIn(map<string, string> *user);
void LoggedIn(map<string, string>::iterator *itr);

int main() {
	map<string, string> account;
	int choice;

	while (choice != 3) {
		cout << "ACCOUNT" << endl;
		cout << "--------" << endl;
		cout << "1) Register" << endl;
		cout << "2) Log In" << endl;
		cout << "3) Quit" << endl;

		cin >> choice;
		system("cls");

		switch(choice) {
			case 1:
				registerUser(&account);
				break;
			case 2:
				LogIn(&account);
				break;
		}
	}
	
	return 0;
}

void registerUser(map<string, string> *user) {
	string name, password, conPassword;
	bool match = false;

	cout << "User Name: ";
	cin >> name;

	while (!match) {
		cout << "Password: ";
		cin >> password;
		cout << "Re-enter Password: ";
		cin >> conPassword;
		if (password.compare(conPassword) == 0) {
			(*user)[name] = password;
			match = true;
		}
		else {
			cout << "Passwords didn't match. Please try again." << endl;
		}
	} 
}

void LogIn(map<string, string> *user) {
	string name, password;
	int attempts = 3;
	bool valid = true;

	while (valid) {
		cout << "User name: ";
		cin >> name;
		for (map<string, string>::iterator itr =
				(*user).begin(),
				end = (*user).end();
				itr != end;
				++itr) 
		{
			if (name.compare(itr->first) == 0) {
				while (attempts != 0) {
					cout << "Enter Password: ";
					cin >> password;
					if (password.compare(itr->second) == 0
						&& attempts != 0) {
						LoggedIn(&itr);
						break;
					}
					else {
						cout << attempts << " attempt(s) left." << endl;
						attempts--;
					}
				}
				cout << "Goodbye." << endl;
				valid = false;
			}
			else {
				cout << "Name not found. Please try again." << endl;
			}
		}
	}
}

void LoggedIn(map<string, string>::iterator *itr) {
	string password, newPassword;
	bool changed = false;
	int choice;

	while (choice != 3) {
		cout << (*itr)->first << endl;
		cout << "--------------" << endl;
		cout << "1) Change Password" << endl;
		cout << "2) Log Out" << endl;

		system("cls");
		cin >> choice;
		system("cls");

		switch(choice) {
			case 1:
				while (!changed) {
					cout << "Enter new password: ";
					cin >> newPassword;
					if (!newPassword.compare((*itr)->second) == 0) {
						(*itr)->second = newPassword;
						cout << "Password changed.\n" << endl;
						changed = true;
					}
					else {
						cout << "New password can't be the same as previous password. Please try again." << endl;
					}
				}
				break;
			case 2:
				choice = 3;
				break;
		}
	}
}