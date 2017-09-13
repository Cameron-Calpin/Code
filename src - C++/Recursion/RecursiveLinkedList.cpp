#include <cstddef>
#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
	int number;
	node* p_next;
};

node* setElements(node** head, int num) {
	node* p_node = new node;
	p_node -> number = num;
	p_node -> p_next = *head;
	*head = p_node;
	return p_node;
}

void removeElement(node** list, node* head, int num, int &count) {
	//node* p_curr = head;
	while (head != NULL) {
		if (head -> p_next -> number == num) {
			*list -> p_next -> number = 0;
			*list -> p_next = *list -> p_next -> p_next;
			break;
		}
		if (num == head -> number) {
			*list -> number = 0;
			head = list -> p_next; 
			break;
		}
		else {
			p_curr = p_curr -> p_next;
		}
	}
}

int main() {
	int count = 0;
	int num;
	node* list = new node;
	node* p_first = NULL;

	list = setElements(&p_first, 5);
	list = setElements(&p_first, 24);
	list = setElements(&p_first, 94);
	list = setElements(&p_first, 44);
	list = setElements(&p_first, 38);

	while (list != NULL) {
		cout << "Numbers in list: " << list -> number << endl;
		list = list -> p_next;
		count++;
	}

	removeElement(&list, p_first, 94, count);

	while (list != NULL) {
		cout << "Numbers in list: " << list -> number << endl;
		list = list -> p_next;
	}
}