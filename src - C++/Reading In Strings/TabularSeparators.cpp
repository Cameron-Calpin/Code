#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main() {
	char *pch;
	int choice, size = 0; 
	string name = ",",
		   domain_name = "@",
		   domain = ".";
	bool b_name = false,
		 b_domain_name = false,
		 b_domain = false;

	cout << "How many users being registered? ";
	cin >> size;

	string *credentials = new string[size + 1];

	for (int i = 0; i < size; i++) {
		getline(cin, credentials[i], '\n');
	}

	for (int i = 0; i < size; i++) {

		size_t found = credentials[i].find(name);
		if (found != string::npos) {
			b_name = true;
		}

		found = credentials[i].find(domain_name);
		if (found != string::npos) {
			b_domain_name = true;
		}

		found = credentials[i].find(domain);
		if (found != string::npos) {
			b_domain = true;
		}
	}
	
	cout << "\n\nSeparate" << endl;
	cout << "---------" << endl;

	if (b_name) {
		cout << "1) Separate by comma" << endl;
	}
	if (b_domain_name) {
		cout << "2) Separate by @ symbol" << endl;
	}
	if (b_domain) {
		cout << "3) Separate by period" << endl;
	}

	cout << "\n\n";
	cin >> choice;
	system("cls");
	switch(choice) {
		case 1:
			for (int i = 0; i < size; i++) {
				char char_array[credentials[i].size() + 1];
				strcpy(char_array, credentials[i].c_str());
				pch = strtok(char_array, ",");
				while (pch != NULL) {
					printf("%s\t", pch);
					pch = strtok(NULL, ",");
				}
				cout << '\n';
			}
			break;
		case 2:
			for (int i = 0; i < size; i++) {
				char char_array[credentials[i].size() + 1];
				strcpy(char_array, credentials[i].c_str());
				pch = strtok(char_array, "@");
				while (pch != NULL) {
					printf("%s\t", pch);
					pch = strtok(NULL, "@");
				}
				cout << '\n';
			}
			break; 
		case 3:
			for (int i = 0; i < size; i++) {
				char char_array[credentials[i].size() + 1];
				strcpy(char_array, credentials[i].c_str());
				pch = strtok(char_array, ".");
				while (pch != NULL) {
					printf("%s\t", pch);
					pch = strtok(NULL, ".");
				}
				cout << '\n';
			}
			break;
	}

	delete[] credentials;
	return 0;
}

