#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include <algorithm>

using namespace std;

struct b_tree {
	int key_value;
	b_tree* left;
	b_tree* right;
};

b_tree* insert(b_tree* node, int value);
int check_balance(b_tree* node);
bool is_balanced(b_tree* node);
void display_tree(b_tree* node);

int main() {
	b_tree* tree = NULL;
	srand(time(NULL));
	int gen_nodes = rand() % 20 + 1;
	int gen_values;

	// tree = insert(tree, 48);
	// tree = insert(tree, 63);
	// tree = insert(tree, 56);
	// tree = insert(tree, 7);
	// tree = insert(tree, 65);
	// tree = insert(tree, 52);
	// tree = insert(tree, 15);
	// tree = insert(tree, 3);

	for (int i = 0; i < gen_nodes; i++) {
		gen_values = rand() % 100 + 1;
		tree = insert(tree, gen_values);
	}	

	cout << "\nBinary Tree: ";
	display_tree(tree);
	cout << "\n";

	if (is_balanced(tree) == true) {
		cout << "Tree is balanced" << endl;
	}
	else {
		cout << "Tree is not balanced" << endl;
	}
}

b_tree* insert(b_tree* node, int value) {
	if (node == NULL) {
		b_tree* bt = new b_tree;
		bt->left = NULL;
		bt->right = NULL;
		bt->key_value = value;
		return bt;
	}
	else if (value < node->key_value) {
		node->left = insert(node->left, value);
	}
	else {
		node->right = insert(node->right, value);
	}
	return node;
}

int check_balance(b_tree* node) {
	if (node == NULL) {
		return 0;
	}

	int leftHeight = check_balance(node->left);
	if (leftHeight == -1) {
		return -1;
	}

	int rightHeight = check_balance(node->right);
	if (rightHeight == -1) {
		return -1;
	}

	int heightDifference = leftHeight - rightHeight; 
	cout << "Height Difference: " << heightDifference << endl;
	if (abs(heightDifference) > 1) {
		return -1;
	}
	return max(leftHeight, rightHeight) + 1;
}

bool is_balanced(b_tree* node) {
	if (check_balance(node) == -1) {
		return false;
	}
	return true;
}

void display_tree(b_tree* node) {
	if (node != NULL) {
		display_tree(node->left);
		cout << node->key_value << " ";
		display_tree(node->right);
	}
}