#include "vectorOfInt.h"
#include <iostream>

using namespace std;

int main() {
	vectorOfInt a;
	a.pushBack(5);
	a.pushBack(6);
	a.pushBack(9);
	cout << a.getValue(0) << endl;
	cout << a.getValue(1) << endl;
	cout << a.getValue(2) << endl;
	return 0;
}