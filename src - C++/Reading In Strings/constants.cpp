#include <iostream>
#include <string>

using namespace std;

void print_ptr(const int *p_val) {
	if (p_val == NULL) {  // Ok, mem points to
		return;			  // not modified.
	}
	cout << *p_val;		  // Ok, mem access is ok
	/* *p_val = 20; */    // NOT ok,  mem p_val
						  // points to is modified
	p_val = NULL;		  // Ok, not modifiying mem,
}						  // just the pointer itself.

int main() {
	int num = 10;
	print_ptr(&num); 
}