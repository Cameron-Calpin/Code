#include <iostream>

using namespace std;

int Highest(int array[], int size) {
	int highest_value;
	for (int i = 0; i < size; i++) {
		if (array[i] > array[highest_value]) {
			highest_value = array[i];
		}
	}
	return highest_value;
}

int Lowest(int array[], int size) {
	int lowest_value = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] < lowest_value) {
			lowest_value = array[i];
		}
	}
	return lowest_value;
}

double Average(int array[], int size) {
	int avg = 0;
	for (int i = 0; i < size; i++) {
		avg += array[i];
	}
	avg /= 2;
	return avg;
}

void DisplayValues(int array[], int size) {
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
	cout << "The highest value: " << Highest(array, 10) << endl;
	cout << "The lowest value: " << Lowest(array, 10) << endl;
	cout << "The average: " << Average(array, 10) << endl;
	DisplayValues(array, 10);
}