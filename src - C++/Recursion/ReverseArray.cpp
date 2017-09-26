#include <iostream>
#include <ctime>

using namespace std;

void displayArray(int* ray, int size);
void sort(int* ray, int size, int count);

int main() {
	int size = 10;
	int count = 0;
	int* array = new int[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100 + 1;
	}

	displayArray(array, size);
	sort(array, size, count);
	displayArray(array, size);

	delete[] array;
	array = NULL;
}

void displayArray(int* ray, int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << ray[i] << " ";
	}
	cout << "\n\n";
}

/*
 *	Recursive Method: if count doesn't equal the size - 1, 
 *	run through method again and increment count by one. 
 *	Will repeat until count is equal to size - 1.
 */
void sort(int* ray, int size, int count) {
	if (count != size - 1) {
		for (int i = 0; i < size - 1; i++) {
			if (ray[i] > ray[i + 1]) {
				int temp = ray[i];
				ray[i] = ray[i + 1];
				ray[i + 1] = temp;
			}
		}
		sort(ray, size, count + 1);
	}
}