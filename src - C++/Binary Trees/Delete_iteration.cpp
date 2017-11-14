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
void display_stack(stack* s);

b_node* insert_btree(b_node* p_tree, int key);
void search(b_node* p_tree, stack** head);
void del(b_node* p_tree, stack** head);
int compare_to(stack* s, b_node* b);

int main() {
	stack* stk = NULL;
	b_node* tree = NULL;

	tree = insert_btree(tree, 28);
	tree = insert_btree(tree, 76);
	tree = insert_btree(tree, 45);
	tree = insert_btree(tree, 9);

	search(tree, &stk);

	cout << "\nStack before: ";
	display_stack(stk);

	del(tree, &stk);

	cout << "\nStack after: ";
	display_stack(stk);
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
		p_new_tree->right= NULL;
		p_new_tree->key_value = key;
		return p_new_tree;
	}
	if (key < p_tree->key_value) {
		p_tree->left = insert_btree(p_tree->left, key);
	}
	else {
		p_tree->right = insert_btree(p_tree->right, key);
	}
	return p_tree;
}

void search(b_node* p_tree, stack** head) {
	if (p_tree != NULL) {
		search(p_tree->left, head);
		search(p_tree->right, head);
		//cout << p_tree->key_value << " ";
		*head = insert_stack(p_tree, *head);
	}
}


int compare_to(stack* s, b_node* b) {
	int s_value = s->data;
	int b_value = b->key_value;
	if (s_value == b_value) {
		return 0;
	}
	else if (s_value < b_value) {
		return -1;
	}
	else {
		return 1;
	}
}


void del(b_node* p_tree, stack** head) {
	stack* temp = *head;
	while (*head != NULL) {
		int cmp = compare_to(*head, p_tree);
		cout << "\nNODE COUNT: " << cmp;
		if (cmp == 0) {
			cout << "\nNode being deleted: " << p_tree->key_value; 
			delete p_tree;
			temp = (*head)->next;
			*head = temp;
		}
		else if (cmp == -1) {
			cout << "\nleft: " << &p_tree->key_value;
			p_tree = p_tree->left;
		}
		else {
			p_tree = p_tree->right;
		}
	}
}

void display_stack(stack* s) {
	while (s != NULL) {
		cout << s->data << "  ";
		s = s->next;
	}
	cout << "\n";
}
