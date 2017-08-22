#include <cstddef>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

struct node {
	int number;
	node* p_next;
};

void generate(node** head);
void sort(node* head);
void display(node* current);

int main() {
	srand(time(NULL));
	node* head = NULL;

	for (int i = 0; i < 10; i++) {
		generate(&head);
	}
	cout << "\nunsorted: ";
	display(head);

	sort(head);
	cout << "\nsorted: ";
	display(head);
	return 0;
}

void generate(node** head) {
	node* temp = new node;
	temp -> number = (rand() % 100) + 1;
	temp -> p_next = *head;
	*head = temp;
}

void sort(node* head) {
	int temp;
	node* curr;

	for (bool didSwap = true; didSwap; ) {
		didSwap = false;
		for (curr = head; curr->p_next != NULL; curr = curr->p_next) {
			if (curr->number > curr->p_next->number) {
				temp = curr->number;
				curr->number = curr->p_next->number;
				curr->p_next->number = temp;
				didSwap = true;
			}
		}	
	}
}

void display(node* head) {
	while (head != NULL) {
		cout << head -> number << "  ";
		head = head -> p_next;
	}
	cout << "\n";
}