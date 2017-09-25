#include <cstddef>
#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
	
	int number;
	node* p_next;
};

void setElements(node** head, int num) {
	node* p_node = new node;
	p_node -> number = num;
	p_node -> p_next = *head;
	*head = p_node;
}

void removeElement(node* list, int num) {
	node* p_curr = list;
	while (list != NULL) {
		if (num == p_curr -> p_next -> number) {
			list = p_curr;
			list -> p_next = list -> p_next -> p_next;
			break;
		}
		if (num == p_curr -> number) {
			list -> number = list -> p_next -> number;
			list -> p_next = list -> p_next -> p_next; 
			break;
		}
		else {
			p_curr = p_curr -> p_next;
		}
	}
}

void printList(node* list) {
	cout << "Numbers in list: ";
	while (list != NULL) {
		cout << list -> number << " ";
		list = list -> p_next;
	}
	cout << "\n\n";
}

int main() {
	int num;
	node* list = NULL;

	setElements(&list, 5);
	setElements(&list, 24);
	setElements(&list, 94);
	setElements(&list, 44);
	setElements(&list, 38);

	printList(list);
	
	removeElement(list, 38);
	removeElement(list, 24);

	printList(list);
	
	delete[] list;
	list = NULL;
}