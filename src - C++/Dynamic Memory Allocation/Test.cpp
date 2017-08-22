#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

void Test(int *array) {
	int x = array[0];
	int y = array[1];

	x = 4;
	y = 5;
	cout << x << " " << y;
}

int main() {
	int *array = new int[2];

	Test(array);
}