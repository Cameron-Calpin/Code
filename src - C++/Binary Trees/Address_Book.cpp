#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

struct b_tree {
	string name;
	string email;
	b_tree* left;
	b_tree* right;
};

b_tree* insert(b_tree* node, string key, string value);
b_tree* delete_tree(b_tree* node, string value);
b_tree* update_email(b_tree* node, string value);
b_tree* findMax(b_tree* node);
void searchEmail(b_tree* node, string value);
void display_tree(b_tree* node);

int main() {
	b_tree* tree = NULL;
	int choice;
	string name, email, searchName, search_email;

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

		switch (choice) {
			case 1:
				cout << "Enter Name: ";
				cin >> name;
				cout << "Enter Email: ";
				cin >> email;
				tree = insert(tree, name, email);
				break;
			case 2:
				cout << "Enter Email: ";
				cin >> search_email;
				tree = delete_tree(tree, search_email);
				break;
			case 3:
				cout << "Enter Email: ";
				cin >> searchName;
				update_email(tree, searchName);
				break;
			case 4:
				cout << "Enter Email: ";
				cin >> searchName;
				searchEmail(tree, searchName);
				break;
			case 5:
				cout << "NAME\t\tEMAIL" << endl;
				cout << "---------------------" << endl;
				display_tree(tree);
				break;
		}
	}
	return 0;
}

b_tree* insert(b_tree* node, string key, string value) {
	if (node == NULL) {
		b_tree* bt = new b_tree;
		bt->left = NULL;
		bt->right= NULL;
		bt->name = key;
		bt->email = value;
		return bt;
	}
	else if (key < node->name) {
		node->left = insert(node->left, key, value);
	}
	else {
		node->right = insert(node->right, key, value);
	}
	return node;
}

b_tree* delete_tree(b_tree* node, string value) { 
	if (node == NULL) {
		return NULL;
	}
	else if (value < node->name) {
		node->left = delete_tree(node->left, value);
	}
	else if (value >= node->name) {
		node->right = delete_tree(node->right, value);
	}	
	else {
		b_tree* p_max_node = findMax(node->left);
		p_max_node->left = node->left;
		p_max_node->right = node->right;
		delete node;
		return p_max_node;
	}
	return node;
}

b_tree* update_email(b_tree* node, string value) {
	if (node == NULL) {
		cout << "Email not found\n";
		return NULL;
	}
	else if (value < node->email) {
		node->left = update_email(node->left, value);
	}
	else if (value > node->email) {
		node->right = update_email(node->right, value);
	}
	else {
		string newEmail;
		cout << "Enter new email: ";
		cin >> newEmail;
		node->email = newEmail;
	}
	return node;
}

b_tree* findMax(b_tree* node) {
	if (node == NULL) {
		return NULL;
	}
	if (node->right == NULL) {
		return node;
	}
	return findMax(node->right);
}

void searchEmail(b_tree* node, string value) {
	if (node == NULL) {
		cout << "Email not found!\n\n";
	}
	else if (value == node->email) {
		cout << "Email found: ";
		cout << node->email << "\n\n";
	}
	else if (value < node->email) {
		searchEmail(node->left, value);
	}
	else {
		searchEmail(node->right, value);
	}
}

void display_tree(b_tree* node) {
	if (node != NULL) {
		display_tree(node->left);
		cout << node->name << "\t\t" << node->email << "\n";
		display_tree(node->right);
	}
}

