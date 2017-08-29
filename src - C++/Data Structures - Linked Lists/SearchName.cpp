#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct node {
	string name;
	node* next;
};

void insertNode(node** name, string input, int &count);
void searchName(node* name, string input);
void DisplayNames(node* Name);

int main() {
	node* head = NULL;
	string input;
	char k;
	int choice;
	int count = 0;

	while (k != 'q') {
		cout << "\n\nThere are currently " << count << " entries.\n\n";
		cout << "1) Enter a name\n"
				"2) Search for name\n"
				"3) Display Names\n";

		cin >> choice;
		switch(choice) {
			case 1:
				cout << "Enter a name: ";
				cin >> input;
				insertNode(&head, input, count);
				break;
			case 2:
				cout << "Search for name: ";
				cin >> input;
				searchName(head, input);
				break;
			case 3:
				DisplayNames(head);
				break;
			default:
				cout << "\n\nOption not available. Try again.\n\n";
				continue;
		}
	}
}

void insertNode(node** name, string input, int &count) {
	node* temp = new node;
	temp->name = input;
	temp->next = *name;
	*name = temp;
	count++;
}

void searchName(node* name, string input) {
	while (name != NULL) {
		if (name->name == input) {
			cout << name->name << " has been found.\n\n";
			break;
		}
		else
			name = name->next;
	}
}

void DisplayNames(node* Name) {
	cout << "Names in list: ";
	while (Name != NULL) {
		cout << Name->name << " ";
		Name = Name->next;
	}
}