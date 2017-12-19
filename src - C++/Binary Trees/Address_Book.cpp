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
b_tree* findMax(b_tree* node);
b_tree* search(b_tree* node, string value);
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
				cout << "Search Name: ";
				cin >> searchName;
				search(tree, searchName);
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
		if (node->left == NULL) {
			b_tree* rtree = node->right;
			cout << "FOUND IT (left)";
			delete node;
			return rtree;
		}
		if (node->right == NULL) {
			b_tree* ltree = node->left;
			cout << "FOUND IT (right)";
			delete node;
			return ltree;
		}
		b_tree* p_max_node = findMax(node->right);
		p_max_node->left = node->left;
		p_max_node->right = node->right;
		return p_max_node;
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

b_tree* search(b_tree* node, string value) {
	if (node == NULL) {
		return NULL;
	}
	else if (value == node->email) {
		cout << "Enter new email: ";
		cin >> node->email;
		return node;
	}
	else if (value < node->email) {
		return search(node->left, value);
	}
	else {
		return search(node->right, value);
	}
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

