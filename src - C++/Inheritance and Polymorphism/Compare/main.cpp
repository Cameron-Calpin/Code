#include "Compare.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<Comparable*> my_comparables;

	my_comparables.push_back(new HighScoreElement("Cameron", 56));
	my_comparables.push_back(new HighScoreElement("Tony", 12));
	my_comparables.push_back(new HighScoreElement("Shaniqua", 84));
	my_comparables.push_back(new HighScoreElement("DatBoi", 200));

	sortComparableVector(my_comparables);

	for (int i = 0; i < my_comparables.size(); i++) {
		const HighScoreElement *ay = dynamic_cast<const HighScoreElement*>(my_comparables[i]);
		cout << i << ": " << ay->getScore() << "\t" << ay->getName() << endl;
	} 
	return 0;
}