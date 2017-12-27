#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int findNInH(const map<string, string> &my_map, string in);

int main() {
	map<string, string> my_map;
	my_map["needle"] = "haystack";
	string input;

	cout << "Enter a line of text: " << endl;
	getline(cin, input, '\n');

	int count = findNInH(my_map, input);
	cout << "Needle appears in haystack " << count << " times." << endl;
}

int findNInH(const map<string, string> &my_map, string in) {
	int needles = 0;
	bool haystack_present = false;
	
	map<string, string>::const_iterator itr = my_map.begin();

	for (int i = in.find(itr->second, 0);
		i != string::npos;
		i = in.find(itr->second, i))
	{
		haystack_present = true;
		i++;
	}
	
	if (haystack_present) {
		for (int i = in.find(itr->first, 0);
		i != string::npos;
		i = in.find(itr->first, i))
		{
			needles++;
			i++;
		}
	}
	return needles;
}