#include "vectorOfInt.h"
#include <iostream>

using namespace std;

int main() {
	vectorOfInt a(3);
	a.pushBack(5);
	a.pushBack(6);
	a.pushBack(9);
	a.pushFront(10);
	a.pushFront(13);
	a.pushFront(18);
	for (int i = 0; i < a.getSize(); i++) {
		cout << a.getValue(i) << endl;
	}
	return 0;
}