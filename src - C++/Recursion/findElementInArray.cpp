#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int getIndexInArray(int* array, int elem, int count);
void sortArray(int* array, int count);
bool isSorted(int* array);
void displayArray(int* array);

#define SIZE 5

int main() {
	int count = 0;
	int findElem;
	int getIndex;
	int* array = new int[SIZE];
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 100 + 1;
	}

	displayArray(array);
	cout << "Enter index to get: ";
	cin >> findElem;
	getIndex = getIndexInArray(array, findElem, count);
	displayArray(array);
	cout << "Index: " << getIndex << "\n\n";
}

int getIndexInArray(int* array, int elem, int count) {
	if (isSorted(array)) {
		for (int i = 0; i < SIZE; i++) {
			if (elem == array[i]) {
				return i;
			}
		}
		return -1;
	}
	else {
		sortArray(array, count);
	}
}

void sortArray(int* array, int count) {
	if (count != SIZE - 1) {
		for (int i = 0; i < SIZE; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		sortArray(array, count + 1);
	}
}

bool isSorted(int* array) {
	for (int i = 0; i < SIZE; i++) {
		if (array[i] > array[i + 1]) {
			return false;
		}
	}
	return true;
}

void displayArray(int* array) {
	cout << "Array: ";
	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}
	cout << "\n\n";
}