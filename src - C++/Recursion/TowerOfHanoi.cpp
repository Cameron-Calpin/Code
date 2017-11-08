#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

void move(int height, stack<int> a, stack<int> b, stack<int> c);
void display(stack<int> a, stack<int> b, stack<int> c);

int main() {
	int size;
	stack<int> A;
	stack<int> B;
	stack<int> C;

	cout << "How many disks in tower?" << endl;
	cin >> size;

	for (int i = size - 1; i >= 0; i--) {
		A.push(i);
	}

	display(A, B, C);
}

void move(int height, stack<int> a, stack<int> b, stack<int> c) {
	int a_top = a.top();
	int b_top = b.top();
	int c_top = c.top();
	if (height > 1) {
		// check stack A
			// Can a.top() be placed in B or C?
		// check stack B
			// Can b.top() be placed in A or C?
		// check stack C
			// Can c.top() be placed in B or C?
	}
}

void display(stack<int> a, stack<int> b, stack<int> c) {
	cout << "\nA: ";
	while (!a.empty()) {
		cout << a.top();
		a.pop();
	}

	cout << "\nB: ";
	while (!b.empty()) {
		cout << b.top();
		b.pop();
	}

	cout << "\nC: ";
	while (!c.empty()) {
		cout << c.top();
		c.pop();
	}
}