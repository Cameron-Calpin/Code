#include <cstddef>
#include <iostream>
#include <cstdlib>

using namespace std;

struct List {
	int number;
	List* p_next;
};

List* p_first = NULL;

List* setElements(int num) {
	List* p_node = new List;
	p_node -> number = num;
	p_node -> p_next = p_first;
	p_first = p_node;
	return p_node;
}

void removeElement(int num, int &count) {
	List* p_curr = p_first;
	while (p_curr != NULL) {
		if (num == p_curr -> p_next -> number) {
			p_curr -> p_next -> number = 0;
			p_curr = p_curr -> p_next -> p_next;
			break;
		}
		if (num == p_curr -> number) {
			p_curr -> number = 0;
			p_curr = p_curr -> p_next;
			break;
		}
		else
			p_curr = p_curr -> p_next;
	}
	--count;
}

int main() {
	int count = 0;
	int choice;
	bool elementsGone = false;

	List* one = setElements(4);
	List* two = setElements(10);
	List* three = setElements(22);
	List* four = setElements(18);

	List* p_current = p_first;

	system("cls");

	while (elementsGone != true) {
		while (p_current != NULL) {
			++count;
			p_current = p_current -> p_next;
		}

		cout << "\nSize of Linked List: " << count << "\n\n";

		if (one -> number != 0)
			cout << "one: " << one -> number << endl;
		if (two -> number != 0)
			cout << "two: " << two -> number << endl;
		if (three -> number != 0)
			cout << "three: " << three -> number << endl;
		if (four -> number != 0)
			cout << "four: " << four -> number << endl;
		if (count == 0) {
			cout << "No more nodes in list." << endl;
			elementsGone = true;
		}

		cout << "\nWhat element do you want to remove? ";
		cin >> choice;
		removeElement(choice, count);
		system("cls");
	} 

	delete[] one, two, three, four, p_current;
	one = NULL;
	two = NULL;
	three = NULL;
	four = NULL;
	p_current = NULL;
	exit(0);
}