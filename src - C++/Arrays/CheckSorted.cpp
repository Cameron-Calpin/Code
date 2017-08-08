#include <iostream>

using namespace std;

void sortThisBitch(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size - i - 1; ++j)
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
	}
}

void checkSorted(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (array[i] > array[i + 1]) {
			cout << "Ya frikin doofus, this isn't sorted!\n";
			sortThisBitch(array, size);
			break;		}
	}
}

void displayArray(int array[], int size) {
	cout << "{";
	for (int i = 0; i < size; i++) {
		if (i != 0) {
			cout << ", ";
		}
		cout << array[i];
	}
	cout << "}";
}

int main() {
	int array[10];
	cout << "Enter 10 values: \n";
	for (int i = 0; i < 10; i++) {
		cout << (i + 1) << ": ";
		cin >> array[i];
	}
	checkSorted(array, 10);
	displayArray(array, 10);
	cout << "\ndis bitch sorted my nigga\n";
}