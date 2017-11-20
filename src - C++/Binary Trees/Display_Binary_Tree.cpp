#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>

using namespace std;

struct b_tree {
	int key_value;
	b_tree* left;
	b_tree* right;
};

b_tree* insert(b_tree* node, int val);
int count_nodes(b_tree* node);
void destroy_tree(b_tree* node);
void display_tree_inorder(b_tree* node);
void display_tree_reverse_inorder(b_tree* node);
void display_tree_preorder(b_tree* node);
void display_tree_postorder(b_tree* node);

int main() {
	b_tree* tree = NULL;
	srand(time(NULL));
	int gen_nodes = rand() % 20 + 1;
	int gen_val;
	int count;

	for (int i = 0; i < gen_nodes; i++) {
		gen_val = rand() % 100 + 1;
		tree = insert(tree, gen_val);
	}

	count = count_nodes(tree);
	cout << "Node count: " << count << "\n\n";

	cout << "Inorder: ";
	display_tree_inorder(tree);
	cout << "\n";

	cout << "Reverse Inorder: ";
	display_tree_reverse_inorder(tree);
	cout << "\n";

	cout << "Preorder: ";
	display_tree_preorder(tree);
	cout << "\n";

	cout << "Postorder: ";
	display_tree_postorder(tree);
	cout << "\n";

}

b_tree* insert(b_tree* node, int val) {
	if (node == NULL) {
		b_tree* new_b_tree = new b_tree;
		new_b_tree->left = NULL;
		new_b_tree->right = NULL;
		new_b_tree->key_value = val;
		return new_b_tree;
	}
	else if (val < node->key_value) {
		node->left = insert(node->left, val);
	}
	else {
		node->right = insert(node->right, val);
	}
	return node;
}

int count_nodes(b_tree* node) {
	if (node == NULL)
		return 0;
	return 1 + count_nodes(node->left) + count_nodes(node->right);
}

void display_tree_inorder(b_tree* node) {
	if (node != NULL) {
		display_tree_inorder(node->left);
		cout << node->key_value << " ";
		display_tree_inorder(node->right);
	}
}

void display_tree_reverse_inorder(b_tree* node) {
	if (node != NULL) {
		display_tree_reverse_inorder(node->right);
		cout << node->key_value << " ";
		display_tree_reverse_inorder(node->left);
	}
}

void display_tree_preorder(b_tree* node) {
	if (node != NULL) {
		cout << node->key_value << " ";
		display_tree_preorder(node->left);
		display_tree_preorder(node->right);
	}
}

void display_tree_postorder(b_tree* node) {
	if (node != NULL) {
		display_tree_postorder(node->left);
		display_tree_postorder(node->right);
		cout << node->key_value << " ";
	}
}