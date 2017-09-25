#include <cstddef>
#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
	int number;
	node* p_next;
};

void insertNode(node* temp, int num) {
	if (temp -> p_next != NULL) {
		insertNode(temp -> p_next, num);
	}
	else {
		temp -> p_next = new node;
		temp -> p_next -> number = num;
		temp -> p_next -> p_next = NULL;
	}
}

node* addNode(node*& temp, int num) {
	if (temp == NULL) {
		node* N = new node;
		N -> number = num;
		N -> p_next = NULL;
		temp = N;
		return N;
	}
	else {
		insertNode(temp, num);
	}
}

void removeElement(node* list, int num) {
	node* p_curr = list;

	if (list -> p_next != NULL) {
		// if (num == p_curr -> p_next -> number) {
		// 	//list = p_curr;
		// 	list -> p_next = list -> p_next -> p_next;
		// }
		if (num == p_curr -> number) {
			list -> number = list -> p_next -> number;
			list -> p_next = list -> p_next -> p_next; 
		}
		else {
			removeElement(list -> p_next, num);
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
	int num, indexCount = 0;
	node* list = NULL;

	node* one = addNode(list, 5);
	node* two = addNode(list, 24);
	node* three = addNode(list, 56);
	node* four = addNode(list, 52);

	printList(list);
	
	removeElement(list, 5);
	removeElement(list, 24);

	printList(list);
	
}