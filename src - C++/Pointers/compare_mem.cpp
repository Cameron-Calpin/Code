#include <iostream>
#include <string>

using namespace std;

void compare_address(int* var1, int* var2) {
	if (var1 < var2) {
		cout << var1 << " " << *var1 << endl;
		cout << var2 << " " << *var2 << endl;
	}
	else {
		cout << var2 << " " << *var2 << endl;
		cout << var1 << " " << *var1 << endl;
	}
}

int main() {
	int var1 = 34;
	int var2 = 56;

	compare_address(& var1, & var2);
}
