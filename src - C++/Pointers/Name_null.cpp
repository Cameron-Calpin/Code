#include <iostream>
#include <string>

using namespace std;

void name_pointer(string *first_ptr, string *last_ptr) {
	cout << "Enter first name: " << endl;
	cin >> *first_ptr; // dereference pointer
	
	if (last_ptr == NULL) {
		cout << "Enter last name: " << endl;
		cin >> *last_ptr;
		cout << endl;
	}

	cout << "First name address: " << first_ptr << endl;
	cout << "Last name address: " << last_ptr << endl;

	
}

int main() {
	string first = "Dat";
	string last = "Boi";

	cout << "In Main() &first: " << &first << "\t" << first << endl;
	cout << "In Main() &Last: " << &last << "\t" << last << endl;
	name_pointer(& first, & last);
	cout << "Values of first and last: " << first << " " << last << "\n\n";

	return 0;
}	