#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Contact {
	string firstName;
	string lastName;
	string address;
	string phoneNum;
	int numContacts;
};

int numContacts = 0;
Contact entries[500];

void get_new_book_entry();
void get_book_list();

int main() {
	char isQuit;

	printf("      PHONEBOOK GALORE     \n");
	printf("----------------------------\n\n");

	do {
		printf("There are currently %d entries in your directory.\n", numContacts);

		if (numContacts == 0) {
			char decision;
			printf("Would you like to add an address to the book? [y/n]\n");
			cin >> decision;
			if (decision == 'y') {
				get_new_book_entry();
			}
			else
				exit(0);

		}
		else {
			int choice;
			printf("Would you like to:\n"
				"1) add an address to the book\n"
				"2) view list in phone book\n");
			cin >> choice;
			switch(choice) {
				case 1:
					get_new_book_entry();
					break;
				case 2:
					get_book_list();
					break;
			}
		}
	} while(isQuit != 'q');
}

void get_new_book_entry() {
	string newEntry;
	numContacts++;

	cout << "Enter your first name: " << endl;
	getline(cin >> newEntry, entries[numContacts].firstName = newEntry);

	cout << "Enter your last name:" << endl;
	getline(cin >> newEntry, entries[numContacts].lastName = newEntry);

	cout << "Enter your address: " << endl;
	getline(cin >> newEntry, entries[numContacts].address = newEntry);

	cout << "Enter your phone number: " << endl;
	getline(cin >> newEntry, entries[numContacts].phoneNum = newEntry);
}

void get_book_list() {
	cout << "PHONEBOOK LIST" << endl;
	cout << "----------------" << endl;
	for (int i = 0; i < numContacts; ++i) {
		cout << "Full Name: " << entries[i].firstName << " " << entries[i].lastName << endl;
		cout << "Address: " << entries[i].address << endl;
		cout << "Phone #: (" << entries[i].phoneNum << endl << endl;
	}
}