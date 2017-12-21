#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

vector<int> insertSorted(vector<int> vec, int num);

int main() {
	int number = 400;
	vector<int> vec;

	vec.push_back(200);
	vec.push_back(600);
	vec = insertSorted(vec, number);

	for (vector<int>::iterator itr =
			vec.begin(),
			end = vec.end();
			itr != end;
			++itr)
	{
		cout << *itr << " ";
	}

	if (number > vec.front()) {
		cout << "\nTrue";
	}
	else {
		cout << "\nFalse";
	}
}

vector<int> insertSorted(vector<int> vec, int num) {
	vec.push_back(num);
	sort(vec.begin(), vec.end());
	return vec;
}