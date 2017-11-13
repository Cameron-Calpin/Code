#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

struct stack {
	int data;
	stack* next;
};

struct b_node {
	int key_value;
	b_node* left;
	b_node* right;
};

stack* insert_stack(b_node* b, stack* s);
void remove_stack(stack** s);

b_node* insert_btree(b_node* p_tree, int key);
stack* search(b_node* p_tree, stack* head);

int main() {
	stack* stk = NULL;
	b_node* tree = NULL;

	tree = insert_btree(tree, 28);
	tree = insert_btree(tree, 76);
	tree = insert_btree(tree, 45);
	tree = insert_btree(tree, 9);

	stk = search(tree, stk);

	while (stk != NULL) {
		cout << stk->data << " ";
		stk = stk->next;
	}
}

stack* insert_stack(b_node* b, stack* head) {
	stack* last = new stack;
	last->data = b->key_value;
	last->next = NULL;

	if (head == NULL) {
		head = last;
	}
	else {
		stack* temp = new stack;
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = last;
	}
	return head;
}

b_node* insert_btree(b_node* p_tree, int key) {
	if (p_tree == NULL) {
		b_node* p_new_tree = new b_node;
		p_new_tree->left = NULL;
		p_new_tree->right= NULL;p_new_tree->key_value = key;
		return p_new_tree;
	}
	if (key < p_tree->key_value) {
		p_tree->left = insert_btree(p_tree->left, key);
	}
	else {
		p_tree->right = insert_btree(p_tree->right, key);
	}
}

stack* search(b_node* p_tree, stack* head) {
	if (p_tree != NULL) {
		search(p_tree->left, head);
		search(p_tree->right, head);
		//cout << p_tree->key_value << " ";
		head = insert_stack(p_tree, head);
	}
}