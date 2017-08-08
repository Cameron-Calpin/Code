#include <iostream>
#include <string>

using namespace std;

string *name_pointer(string *first_ptr, string *last_ptr) {
	cout << "Enter first name: " << endl;
	cin >> *first_ptr; // dereference pointer
	cout << "Enter last name: " << endl;
	cin >> *last_ptr; // dereference pointer
	string* full_name = new string;
	*full_name = *first_ptr + *last_ptr;

	cout << "First name address: " << first_ptr << endl;
	cout << "Last name address: " << last_ptr << endl;

	
}

string name_reference(string &first_ref, string &last_ref) {
	cout << "Enter first name: " << endl;
	cin >> first_ref; // dereference pointer
	cout << "Enter last name: " << endl;
	cin >> last_ref; // dereference pointer
	string Full_Name = first_ref + last_ref;

	cout << "First name address: " << first_ref << endl;
	cout << "Last name address: " << last_ref << endl;

	return Full_Name;
}

int main() {
	string first = "Dat";
	string last = "Boi";


	cout << "In Main() &first: " << &first << "\t" << first << endl;
	cout << "In Main() &Last: " << &last << "\t" << last << endl;
	name_pointer(& first, & last);
	cout << "Values of first and last: " << first << " " << last << "\n\n";

	name_reference(first, last);
	cout << "Values of first and last: " << first << " " << last;


	return 0;
}	