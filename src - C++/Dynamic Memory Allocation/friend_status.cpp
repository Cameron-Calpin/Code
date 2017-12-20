#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Boi {
	string name;
	string temp;
	int days;
};

void add_friend(Boi *friends, int &n_elem);
void change_days(Boi *friends, string Name, int n_elem);
void display_friends(Boi *friends, int n_elem);
Boi* growArray(Boi *friends, int *cyz);

int main() {
	string name;
	int count = 0;
	int size = 5;
	int choice;

	Boi *list = new Boi[size];
	Boi *temp = new Boi[size];

	do {
		if (size == count + 1) {
			list = growArray(list, &size);
			cout << "Array is now " << size << " elements.\n";
		}
		cout << "\nFRIEND LIST" << endl;
		cout << "------------" << endl;
		cout << "1) Add a Friend\n"
				"2) Edit Friend\n"
				"3) Display Friends\n"
				"4) Exit\n"
				"Choice: ";
		cin >> choice;

		switch(choice) {
			case 1:
				add_friend(list, count);
				cout << count << endl;
				break;
			case 2:
				cout << "Search for friend: " << endl;
				cin >> name;
				change_days(list, name, count);
				break;
			case 3:
				display_friends(list, count);
				break;
			default: exit(0);
		}
	} while (true);
	delete[] list;
	list = NULL;
}

void add_friend(Boi *list, int &n_elem) {
	char startScan, minIndex;
	int num_temp;

	cout << "Enter your friend's name: ";
	cin >> list[n_elem].name;
	cout << "\nEnter days since last interaction: ";
	cin >> list[n_elem].days;

	// This sorts the strings (names) and ints (days) as the friends 
	// are entered. Method used here is Bubble Sort.
	if (n_elem > 0) {
		for (startScan = 0; startScan < (n_elem); startScan++) {
			for (minIndex = 0; minIndex < (n_elem - startScan); minIndex++) {
				if (list[minIndex].name.at(0) > list[minIndex + 1].name.at(0)) {
					list[minIndex].temp = list[minIndex].name;
					list[minIndex].name = list[minIndex + 1].name;
					list[minIndex + 1].name = list[minIndex].temp;

					num_temp = list[minIndex].days;
					list[minIndex].days = list[minIndex + 1].days;
					list[minIndex + 1].days = num_temp;
				}
			}
		}
	}
	n_elem++;
}

void change_days(Boi *list, string Name, int n_elem) {
	for (int i = 0; i < n_elem; i++) {
		if (list[i].name == Name) {
			cout << "Friend found.\n";
			cout << "How many days since last"
				"interaction with " << list[i].name << "? ";
			cin >> list[i].days;
			break;
		}
		else
			continue;
	}
	cout << "Friend NOT found.\n\n";
}

void display_friends(Boi *list, int n_elem) {
	cout << "\nFRIEND\t\tDAYS" << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < n_elem; i++) {
		cout << list[i].name << "\t\t" << list[i].days << endl;
	}
}

// When the struct array reaches 4, growArray 
// throws an error and has trouble copying the 
// values over to the new struct array.
Boi *growArray(Boi *friends, int *cyz) {
	*cyz += 5;
	Boi *new_list = new Boi[*cyz];
	for (int i = 0; i < *cyz; ++i) {
		new_list[i].name = friends[i].name;
		new_list[i].days = friends[i].days;
	}
	delete[] friends;
	friends = NULL;

	return new_list;
}

