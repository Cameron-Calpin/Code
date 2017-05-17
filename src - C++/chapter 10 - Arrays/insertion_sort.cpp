#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int findSmallestRemainingElement(int array[], int size, int index) {
	int index_of_smallest_value = index;
	for (int i = 0; i < size; i++) {
		if (array[i] < array[index_of_smallest_value])
			index_of_smallest_value = i;
	}
	return index_of_smallest_value;
}

void swap(int array[], int first_index, int second_index) {
	int temp = array[first_index];
	array[first_index] = array[second_index];
	array[second_index] = temp;
}

void sort(int array[], int size) {
	for (int i = 0; i < size; i++) {
		int index =
			findSmallestRemainingElement(array, size, i);
			swap(array, i , index);
	}
}

void displayArray (int array[], int size) {
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
	int size;
	cout << "Enter array size: ";
	cin >> size;
	int array[size];

	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}
	cout << "Original array: ";
	displayArray(array, size);
	cout << '\n';

	sort(array, size);

	cout << "Sorted array: ";
	displayArray(array, size);
	cout << '\n';
}