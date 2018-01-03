#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main() {
	
	return 0;
}

node* insert(node* p_tree, int key) {
	if (p_tree == NULL) {
		node* temp = new node;
		temp->key_value = key;
		temp->p_left = NULL;
		temp->p_right = NULL;
		return temp;
	}
	if (key < p_tree->key_value) {
		p_tree->p_left = insert(p_tree->p_left, key);
	}
	else {
		p_tree->p_right = insert(p_tree->p_right, key);
	}
	return p_tree;
}

node* search(node* p_tree, int key) {
	if (p_tree == NULL) {
		return NULL;
	}
	else if (key == p_tree->key_value) {
		return p_tree;
	}
	else if (key < p_tree->key_value) {
		return search(p_tree->p_left, key);
	}
	else {
		return search(p_tree->p_right, key);
	}
}

void destroyTree(node* p_tree) {
	if (p_tree != NULL) {
		destroyTree(p_tree->p_left);
		destroyTree(p_tree->p_right);
		cout << "Deleting node: " << p_tree->key_value;
		delete p_tree;
	}
}

node* remove(node* p_tree, int key) {
	if (p_tree == NULL) {
		return NULL;
	}
	if (key == p_tree->key_value) {
		if (p_tree->p_left == NULL) {
			node* r_subtree = p_tree->p_right;
			delete p_tree;
			return r_subtree;
		}
		if (p_tree->p_right == NULL) {
			node* l_subtree = p_tree->p_left;
			delete p_tree;
			return l_subtree;
		}
		node* max_node = findMax(p_tree->p_left);
		max_node->p_left = removeMaxNode(p_tree->p_left, max_node);
		max_node->p_right = p_tree->p_right;
		delete p_tree;
		return max_node;
	}
	else if (key < p_tree->key_value) {
		p_tree->p_left = remove(p_tree->p_left, key);
	}
	else {
		p_tree->p_right = remove(p_tree->p_right, key);
	}
}

node* findMax(node* p_tree) {
	if (p_tree == NULL) {
		return NULL;
	}
	if (p_tree->p_right == NULL) {
		return p_tree;
	}
	return findMax(p_tree->p_right);
}

node* removeMaxNode(node* p_tree, node* max_node) {
	if (p_tree == NULL) {
		return NULL;
	}
	if (p_tree == max_node) {
		return max_node->p_left;
	}
	p_tree->p_right = removeMaxNode(p_tree->p_right, max_node);
	return p_tree;
}